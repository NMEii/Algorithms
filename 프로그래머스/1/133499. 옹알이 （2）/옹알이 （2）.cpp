#include <string>
#include <vector>

using namespace std;


int solution(vector<string> babbling) {
	/*int answer = 0;
	vector<string> word = { "aya", "ye", "woo", "ma" };

	for (int i = 0; i < babbling.size(); i++)
	{
		if (babbling[i][0] == 'a'
			|| babbling[i][0] == 'm'
			|| babbling[i][0] == 'w'
			|| babbling[i][0] == 'y')
		{
			
			string preWord = "";
			bool exitCount = true;
			while (exitCount)
			{

				exitCount = false;
				if (babbling[i] == "")
				{
					answer++;
					break;
				}

				if (preWord != word[0] && babbling[i].substr(0, word[0].size()) == word[0])	// aya
				{
					babbling[i] = babbling[i].substr(word[0].size(), babbling[i].size());
					preWord = word[0];
					exitCount = true;
				}

				if (preWord != word[1] && babbling[i].substr(0, word[1].size()) == word[1])	// ye
				{
					babbling[i] = babbling[i].substr(word[1].size(), babbling[i].size());
					preWord = word[1];
					exitCount = true;
				}

				if (preWord != word[2] && babbling[i].substr(0, word[2].size()) == word[2])	// woo
				{
					babbling[i] = babbling[i].substr(word[2].size(), babbling[i].size());
					preWord = word[2];
					exitCount = true;
				}

				if (preWord != word[3] && babbling[i].substr(0, word[3].size()) == word[3])	// ma
				{
					babbling[i] = babbling[i].substr(word[3].size(), babbling[i].size());
					preWord = word[3];
					exitCount = true;
				}
			}


		}

	
	}

	return answer;*/
    int answer = 0;

    // 1. babbling 배열의 단어를 하나씩 순회합니다.
    for (const string& b : babbling) {
        int i = 0;         // 현재 읽고 있는 문자열의 인덱스 위치
        int prev_word = 0; // 이전에 발음한 단어 번호 (0: 없음, 1: aya, 2: ye, 3: woo, 4: ma)

        // 2. 현재 단어(b)의 끝에 도달할 때까지 문자를 하나씩 봅니다.
        while (i < b.length()) {
            
            // [단어 검사 로직]
            // C++의 && 연산자는 앞의 조건이 거짓이면 뒤의 조건을 아예 보지 않습니다. (단축 평가)
            // 따라서 i + 2 < b.length() 로 인덱스 초과 에러를 먼저 막고 문자를 검사합니다.

            // 1번 단어: "aya" 검사
            if (b[i] == 'a' && i + 2 < b.length() && b[i+1] == 'y' && b[i+2] == 'a') {
                if (prev_word == 1) break; // [조건] 연속 발음이면 즉시 실패(break)
                prev_word = 1;             // 방금 발음한 단어 번호 기록
                i += 3;                    // "aya" 길이만큼 인덱스 점프!
            }
            // 2번 단어: "ye" 검사
            else if (b[i] == 'y' && i + 1 < b.length() && b[i+1] == 'e') {
                if (prev_word == 2) break; 
                prev_word = 2;
                i += 2;
            }
            // 3번 단어: "woo" 검사
            else if (b[i] == 'w' && i + 2 < b.length() && b[i+1] == 'o' && b[i+2] == 'o') {
                if (prev_word == 3) break; 
                prev_word = 3;
                i += 3;
            }
            // 4번 단어: "ma" 검사
            else if (b[i] == 'm' && i + 1 < b.length() && b[i+1] == 'a') {
                if (prev_word == 4) break; 
                prev_word = 4;
                i += 2;
            }
            // 5. 예외 처리 (사용자님의 가지치기 아이디어가 자연스럽게 적용된 부분)
            // 첫 글자가 a, y, w, m 중 하나가 아니거나, 글자가 중간에 끊겨서 단어가 완성되지 않으면
            // 이 else 문으로 빠져들어와 즉시 검사를 종료합니다.
            else {
                break;
            }
        }

        // 3. while 루프를 빠져나왔을 때, 인덱스(i)가 문자열의 총 길이와 같다면
        // 중간에 막히지 않고 모든 단어를 완벽하게 발음했다는 뜻입니다!
        if (i == b.length()) {
            answer++;
        }
    }

    return answer;
}
#include <string>
#include <vector>

using namespace std;


int solution(vector<string> babbling) {
	int answer = 0;
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

	return answer;
}
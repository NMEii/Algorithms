#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int k, int m, vector<int> score) {
    int answer = 0;
    vector<int> box;

    sort(score.begin(), score.end(), greater<int>());

    for (int apple = m - 1; apple < score.size(); apple += m)
    {
        answer += (score[apple] * m);
    }
   
    return answer;
}
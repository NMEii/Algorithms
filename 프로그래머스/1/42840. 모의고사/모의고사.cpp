#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer(3);

    vector<int> Student1 = { 1, 2, 3, 4, 5 };
    vector<int> Student2 = { 2, 1, 2, 3, 2, 4, 2, 5 };
    vector<int> Student3 = { 3, 3, 1, 1, 2, 2, 4, 4, 5, 5 };

    vector<vector<int>> Score = { {1,0}, {2,0}, {3,0} };

    for (int i = 0; i < answers.size(); i++)
    {
        if (Student1[i % 5] == answers[i])
        {
            Score[0][1]++;
        }

        if (Student2[i % 8] == answers[i])
        {
            Score[1][1]++;
        }

        if (Student3[i % 10] == answers[i])
        {
            Score[2][1]++;
        }
    }

    sort(Score.begin(), Score.end(), [](const vector<int>& a, vector<int>& b) {
        if (a[1] == b[1])
        {
            return a[0] < b[0];
        }
    
        return a[1] > b[1];
    });
   
    for (int j = 0; j < 3; j++)
    {
        if (j != 0 && Score[j-1][1] != Score[j][1])
        {
            answer.resize(j);
            return answer;
        }

        answer[j] = Score[j][0];
    }

    return answer;
}
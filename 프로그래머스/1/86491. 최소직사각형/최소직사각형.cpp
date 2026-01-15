#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    int maxNum = 0;
    int otherNum = 0;
    for (vector<int> pair : sizes)
    {
        for (int inner : pair)
        {
            if (inner > maxNum)
            {
                maxNum = inner;
            }
        }

        if (pair[0] > pair[1])
        {
            if (otherNum < pair[1])
            {
                otherNum = pair[1];
           }
        }
        else
        {
            if (otherNum < pair[0])
            {
                otherNum = pair[0];
            }
        }
    }

    return maxNum * otherNum;
}
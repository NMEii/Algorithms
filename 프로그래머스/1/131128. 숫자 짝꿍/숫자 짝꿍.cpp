#include <string>
#include <vector>
#include <algorithm>

using namespace std;


string solution(string X, string Y) {
    string answer = "";

    int longNum = X.size();

    vector<int> XNum = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
    vector<int> YNum = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
    if (X.size() < Y.size()) longNum = Y.size();

    sort(X.begin(), X.end(), greater<int>());
    sort(Y.begin(), Y.end(), greater<int>());



    int xLength = 0;
    int yLength = 0;
    char xCounter = '9';
    char yCounter = '9';

    while (xLength < X.length())
    {        
        if (xLength < X.length() && X[xLength] == xCounter)
        {
            XNum[xCounter - '0'] += 1;
            xLength++;
        }
        else
        {
            xCounter--;
        }
    }

    while (yLength < Y.length())
    {
        if (yLength < Y.length() && Y[yLength] == yCounter)
        {
            YNum[yCounter - '0'] += 1;
            yLength++;
        }
        else
        {
            yCounter--;
        }
    }


    int shortNum = 0;
    for (int i = 9; i >= 0; --i)
    {
        if (XNum[i] > 0 && YNum[i] > 0)
        {
            shortNum = YNum[i];

            if (XNum[i] < YNum[i])
            {
                shortNum = XNum[i];
            }

            for (int j = 0; j < shortNum; j++)
            {
                answer += ('0' + i);
            }
        }
    }

    if (answer == "")
    {
        return "-1";
    }
    
    if (answer[0] == '0')
    {
        return "0";
    }
    return answer;
}
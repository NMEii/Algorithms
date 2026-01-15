#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    long long cutNum = 0;
    vector<long long> str;

    for (int i = 0; i < t.length() - (p.length() -1); i++)
    {
        cutNum = stoll(t.substr(i, p.length()));
        str.push_back(cutNum);
    }

    int answer = 0;
    long long compareNum = stoll(p);
    for (const long long value : str)
    {
        if (value <= compareNum)
        {
            answer++;
        }
    }

    return answer;
}
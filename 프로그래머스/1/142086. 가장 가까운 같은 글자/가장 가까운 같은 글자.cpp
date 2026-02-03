#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    map<char, int> CharNum;
    int count = 0;
    for (char c : s)
    {
        map<char, int>::iterator it = CharNum.find(c);
        if (it == CharNum.end())
        {
            CharNum.emplace(pair<char, int>(c, count));
            answer.push_back(-1);
        }
        else
        {
            answer.push_back(count - it->second);
            CharNum[c] = count;
        }

        count++;
    }
    return answer;
}
#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int index = s.length() / 2;
    if (s.length() % 2 == 1)
    {
        return answer = s.at(index);
    }
    answer = s.at(index - 1);
    answer.push_back(s.at(index));
    return answer;
}
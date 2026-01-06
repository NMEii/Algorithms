#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    string answer = "";
    string watermelon = "수박";
    for (int i = 0; i < n; i++)
    {
        answer += watermelon;
    }
    return answer.substr(0,n * 3);
}
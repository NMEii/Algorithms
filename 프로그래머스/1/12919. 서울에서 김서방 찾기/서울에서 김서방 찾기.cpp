#include <string>
#include <vector>

using namespace std;

string solution(vector<string> seoul) {
    string answer = "";
    int count = 0;
    for (const auto& vec : seoul)
    {        
        if ( vec == "Kim")
        {
            answer = "김서방은 " + to_string(count) + "에 있다";
        }
        count ++;
    }
    return answer;
}
#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = "";

    for (char c : s)
    {
        if (c == ' ') 
        {
            answer += ' ';
            continue; 
        }

        if (islower(c))
        {
            if (c + n > 'z')
            {
                answer += (c + n - 26);
                continue;
            }
        }
        else
        {
            if (c + n > 'Z')
            {
                answer += (c + n - 26);
                continue;
            }

        }

        answer += c + n;
    }

    return answer;
}
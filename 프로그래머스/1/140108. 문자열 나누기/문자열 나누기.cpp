#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;

    vector<string> save;

    char x = s[0];
    int sameCount = 0;
    int diffCount = 0;

    //word += (s[0]);

    for (int i = 0; i < s.length(); i++)
    {
        if (x == s[i])
        {
            sameCount++;
        }
        else
        {
            diffCount++;
        }
        
        if (sameCount == diffCount)
        {
            answer++;
            
            if(i+1 < s.length())
            {
                x = s[i+1];
            }
            
            sameCount = 0;
            diffCount = 0;
        }
    }

    if (sameCount != 0 || diffCount != 0)
    {
        answer++;
    }

    return answer;
}
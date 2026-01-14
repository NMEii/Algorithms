#include <string>
#include <vector>

using namespace std;

string solution(string s) {

    int blankCount = 0;
    int stringCount = 0;
    for (char c : s)
    {
        if (c == ' ')
        {
            blankCount = 0;
            stringCount++;
            continue;
        }

        if (blankCount % 2 == 0)
        {
            if (c >= 97 && s.at(c <= 122))
            {
                s.at(stringCount) = toupper(c);

            }
        }
        else
        {
            if (c >= 65 && c <= 90)
            {
                s.at(stringCount) = tolower(c);
            }
        }
        stringCount++;
        blankCount++;
    }
    return s;
}
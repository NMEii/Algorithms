#include <string>
#include <vector>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    string answer = "";
    vector<string> sentence;
    int count1 = 0;
    int count2 = 0;

    for (string word : goal)
    {
        if (count1 > cards1.size() || count2 > cards2.size()) return "No";

        if (word == cards1[count1])
        {
            sentence.push_back(cards1[count1]);
            count1++;
        }
        else if (word == cards2[count2])
        {
            sentence.push_back(cards2[count2]);
            count2++;
        }
        else
        {
            return "No";
        }
    }

    return "Yes";
}
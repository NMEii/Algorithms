#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(vector<string> survey, vector<int> choices) {
    string answer = "";
    map<char, int> mbtiScore;
    string indicators[4] = {"RT", "CF", "JM", "AN"};
    
    for(int i = 0; i < survey.size(); i++)
    {
        int choice = choices[i];
        
        if(choices[i] < 4)
        {
            mbtiScore[survey[i][0]] += (4 - choice);
        }
        else if (choices[i] > 4)
        {
            mbtiScore[survey[i][1]] += (choice - 4);
        }

    }
    
    for(string key : indicators)
    {
        if(mbtiScore[key[0]] >= mbtiScore[key[1]]) answer += key[0];
        else answer += key[1];
    }
    
    return answer;
}
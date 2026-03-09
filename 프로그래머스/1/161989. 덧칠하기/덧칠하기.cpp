#include <string>
#include <vector>

using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 0;
    int CurrentLoc = 0;
    
    CurrentLoc = section[0] + m-1;
    answer++;
    
    for(int i = 1; i <section.size(); i++)
    {
        if(CurrentLoc < section[i])
        {
            CurrentLoc = section[i] + (m-1);
            answer++;
        }   
    }
    return answer;
}
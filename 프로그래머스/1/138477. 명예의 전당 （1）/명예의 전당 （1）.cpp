#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;   
    priority_queue<int, vector<int>, greater<int>> ranking;
    
    for (int s : score)
    {
        ranking.push(s);

        if (ranking.size() > k)
        {
            ranking.pop();
        }
        
        answer.push_back(ranking.top());
    }
    return answer;
}

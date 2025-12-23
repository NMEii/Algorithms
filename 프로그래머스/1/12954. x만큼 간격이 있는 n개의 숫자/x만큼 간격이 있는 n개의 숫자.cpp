#include <string>
#include <vector>

using namespace std;

vector<long long> solution(int x, int n) {
    vector<long long> answer;
    
    if((x >= -10000000 && x <= 10000000) && (n > 0 && n <= 1000))
    {
        for(int i = 1 ; i <= n ; i++)
        {
            answer.push_back(x * i);
            
        }
    }
    return answer;
}
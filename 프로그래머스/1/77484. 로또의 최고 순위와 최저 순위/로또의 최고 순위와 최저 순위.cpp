#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer(2);
    int zeroCount = 0;
    int Count = 0;
    
    for (int num : lottos)
    {
        if( num == 0)
        {
            zeroCount++;
            continue;
        }
        
        for (int lottosNum : win_nums)
        {
            if(num == lottosNum)
            {
                Count++;
                break;
            }
        }
    }
    
    
    if (Count + zeroCount <= 1)
    {
        answer[0] = 6;
        answer[1] = 6;
    }
    else
    {
        answer[0] = 7 - (Count + zeroCount);
        (7 - Count) > 6 ? answer[1] = 6: answer[1] = 7 - Count;
    }
    
    
    return answer;
}
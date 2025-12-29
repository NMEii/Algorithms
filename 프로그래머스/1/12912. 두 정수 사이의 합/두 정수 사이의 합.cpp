#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    if((a >= -10000000 && a <= 10000000) && (b >= -10000000 && b <= 10000000))
    {
        if(a == b)
        {
            return a;
        }
        
        if(a > b)
        {
            int temp = 0;
            temp = a;
            a = b;
            b = temp;
        }
        
        for (a ; a <= b; a++)
        {
            answer += a;
        }
        
    }
    return answer;
}
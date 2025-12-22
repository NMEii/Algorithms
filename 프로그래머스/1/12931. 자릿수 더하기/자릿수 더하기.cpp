#include <iostream>

using namespace std;
int solution(int n)
{
    int answer = 0;
    int res = 0;
    
    while(1)
    {
        if(n == 0)
        {
            return res;
        }
        res += (n % 10);
        n /= 10;
      
        
    }
    

    return res;
}
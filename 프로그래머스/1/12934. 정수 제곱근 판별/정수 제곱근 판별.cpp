#include <string>
#include <vector>
#include <cmath>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    int i = 1;
    while(1)
    {
        if(i > n)
        {
            return -1;
        }
        if(pow(i,2) == n)
        {
            return pow(i+1,2);
        }
        i++;
    }
    return answer;
}
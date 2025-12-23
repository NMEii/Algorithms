#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int div = 1;
    if(n >= 3 && n <= 1000000)
    {
        while(1)
        {
            if ((n % div) == 1)
            {
                return div;
            }
            div++;
        }
    }
    return answer;
}
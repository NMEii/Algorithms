#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int n) {
    int answer = 0;
    while (n >= a)
    {
    
            int newCola = (n / a) * b;
            int remainCola = n % a;

            answer += newCola;
            n = newCola + remainCola;
    }

    return answer;
}

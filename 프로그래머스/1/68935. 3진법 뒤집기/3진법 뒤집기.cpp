#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    long long thirdValue = 0;
    long long answer = 0;
    string result = "";

    if (n == 0) { return 0; }
    
    while (n > 0)
    {
        result += to_string(n % 3);
        n /= 3;
    }

    thirdValue = stoll(result);

    int muliplyNum = 1;

    while (thirdValue > 0)
    {
         answer += (thirdValue % 10)* muliplyNum;
         muliplyNum *= 3;
         thirdValue /= 10;
    }

    return answer;
}
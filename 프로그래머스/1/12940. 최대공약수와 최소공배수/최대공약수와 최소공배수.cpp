#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;

    if (n > m)
    {
        int temp = n;
        n = m;
        m = temp;
    }
    
    int min = 0;

    for (int i = 1; i <= n; i++)
    {
        if (m % i == 0 && n % i == 0)
        {
            min = i;
        }
    }
    answer.push_back(min);

    for (int i = 1; i <= m; i++)
    {
        if ((n * i) % m == 0)
        {
            answer.push_back(n * i);
            return answer;
        }
    }

}
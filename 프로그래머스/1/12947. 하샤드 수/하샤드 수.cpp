#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool solution(int x) {
    bool answer = true;
    int num = 0;
    string str = to_string(x);

    for (const auto& c : str)
    {
        num += c - '0';
    }

    answer = (x % num) == 0;

    return answer;
}
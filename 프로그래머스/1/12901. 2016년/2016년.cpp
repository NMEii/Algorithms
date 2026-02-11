#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    string answer = "";

    struct tm time_info = {};

    time_info.tm_year = 2016 - 1900;
    time_info.tm_mon = a - 1;
    time_info.tm_mday = b;

    mktime(&time_info);

    vector<string> vstr = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };
    answer = vstr[time_info.tm_wday];

    return answer;
}
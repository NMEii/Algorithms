#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> wallpaper) {
    vector<int> answer = { 0, 0, 0, 0 };
    vector<int> height;
    vector<int> width;
    for(int i = 0; i < wallpaper.size(); i++)
    {
        for(int j = 0; j < wallpaper[i].size(); j++)
        {
            if(wallpaper[i][j] == '#')
            {
                height.push_back(i);
                width.push_back(j);
            }
        }
    }
    
    answer[0] = *min_element(height.begin(), height.end());
    answer[1] = *min_element(width.begin(), width.end());
    answer[2] = *max_element(height.begin(), height.end()) + 1;
    answer[3] = *max_element(width.begin(), width.end()) + 1;
    
    return answer;
}
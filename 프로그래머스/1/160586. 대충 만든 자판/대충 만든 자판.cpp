#include <string>
#include <vector>
#include <map>

using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> answer;
    map<char, int> alphabet;

    for (string key : keymap)
    {
        for (int i = 0; i < key.size(); i++)
        {
            if (alphabet.count(key[i]))
            {
                if (i < alphabet[key[i]])
                {
                    alphabet[key[i]] = i + 1;
                }
            }
            else
            {
                alphabet[key[i]] = i + 1;
            }
        }
    }

    for (string _targets : targets)
    {
        int typing = 0;

        for (int j = 0; j < _targets.size(); j++)
        {
            if (alphabet.count(_targets[j]))
            {
                typing += alphabet[_targets[j]];
            }
            else
            {
                typing = -1;
                break;
            }

        }
        answer.push_back(typing);
    }

    return answer;
}
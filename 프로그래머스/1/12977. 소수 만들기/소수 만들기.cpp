#include <vector>
#include <iostream>
using namespace std;

bool PrimeNum(int num)
{
    int count = 0;

    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            count++;
        }
    }

    if (count == 2)
    {
        return true;
    }

    return false;
}


int solution(vector<int> nums) {
    int answer = 0;
    int total = 0;
    if (nums.size() == 3)
    {
        total = nums[0] + nums[1] + nums[2];
        if (PrimeNum(total))
        {
            answer++;
        }
    }
    else
    {
        for (int i = 0; i < nums.size() - 2; i++)
        {
            for (int j = i+1; j < nums.size() - 1; j++)
            {
                for (int k = j+1; k < nums.size(); k++)
                {
                    total = nums[i] + nums[j] + nums[k];

                    if (PrimeNum(total))
                    {
                        answer++;
                    }
                }
            }
        }
    }

    return answer;
}
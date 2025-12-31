#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    int workCount = 0;
    long bigNum = num;

    if (bigNum == 1)
    {
        return workCount;
    }

    while (workCount < 500)
    {

        if (bigNum % 2 == 0)
        {
            bigNum /= 2;
        }
        else
        {
            bigNum = (bigNum * 3) + 1;
        }
      
        workCount++;
        
        if (bigNum == 1)
        {
            return workCount;
        }

    }
    return -1; 
}

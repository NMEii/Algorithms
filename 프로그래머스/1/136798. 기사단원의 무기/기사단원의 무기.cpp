#include <string>
#include <vector>

using namespace std;


int solution(int number, int limit, int power) {
	int answer = 0;
	
	for (int soldier = 1; soldier <= number; ++soldier)
	{
		int count = 0;

		for (int i = 1; i * i <= soldier; i++)
		{
			if (soldier % i == 0)
			{
				count++;

				if (i * i != soldier)
				{
					count++;
				}

				if (count > limit)
				{
					break;
				}
			}
		}

		if (count > limit)
		{
			answer += power;
		}
		else
		{
			answer += count;
		}
	}

	return answer;
}
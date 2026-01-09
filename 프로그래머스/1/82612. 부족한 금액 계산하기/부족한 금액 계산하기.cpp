using namespace std;

long long solution(int price, int money, int count)
{
    long long currentMoney = money;
    
    for (int i = 1; i <= count; i++)
    {
        currentMoney -= price * i;
    }

    if (currentMoney <= 0)
    {
        return currentMoney * -1;
    }

    return 0;
}
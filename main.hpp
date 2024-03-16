#include <iostream>
using namespace std;

int getTwoValues(int &begin, int &end)
{
    do
    {
        cout << "Enter two integers: ";
        cin >> begin >> end;
    } while (begin > end);
    return 0;
}

int getNextPrime(int begin)
{
    int i, j;
    for(i = begin + 1; ; i++)
    {
        for(j = 2; j <= (i/2); j++)
        {
            if(i % j == 0)
            {
                break;
            }
        }
        if(j > i/2)
        {
            return i;
        }
    }
}

int getPrevPrime(int end)
{
    int i, j;
    for(i = end - 1; ; i--)
    {
        for(j = 2; j <= (i/2); j++)
        {
            if(i % j == 0)
            {
                break;
            }
        }
        if(j > i/2)
        {
            return i;
        }
    }
}

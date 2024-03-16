#include <iostream>
using namespace std;

int getTwoValues(int begin, int end)
{
    do
    {
        cout << "Enter two integers: ";
        cin >> begin >> end;
    } while (begin < end);
}

int getNextPrime(int begin)
{
    int i, j;
    for(int i = begin; ; i++)
    {
        for(j = 2; j <= (i/2); j++)
        {
            if(i % j == 0)
            {
                break;
            }
        }
        if(j > 1/2)
        {
            int prime1 = i;
        }
    }
}

int getPrevPrime(int end)
{
    int i, j;
    for(int j = end; ; i--)
    {
        for(j = 2; j <= (i/2); j++)
        {
            if(i % j == 0)
            {
                break;
            }
        }
        if(j > 1/2)
        {
            int prime2 = i;
        }
    }
}

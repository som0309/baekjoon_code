#include <iostream>
using namespace std;

int main()
{
    int N, L, result = -1;

    cin >> N;
    cin >> L;

    for(int i = L; i <= 100; i ++)
    {
        if(i%2 == 0)
        {
            int e = N/i;
            double E = N/static_cast<double>(i);
            if(E-e == 0.5)
            {
                if(e-i/2+1 < 0)
                {
                    continue;
                }
                else
                {
                    for(int j = e-i/2+1; j <= e+i/2; j++)
                    {
                        cout << j << " ";
                    }
                    result = 1;
                    break;
                }
            }
        }
        else
        {
            if(N%i == 0)
            {
                if(N/i-i/2 < 0)
                {
                    continue;
                }
                else
                {
                    for(int j = N/i-i/2; j <= N/i+i/2; j++)
                    {
                        cout << j << " ";
                    }
                    result = 1;
                    break;
                }
            }

        }
    }
    
    if(result == -1)
    {
        cout << result;
    }

    return 0;
}


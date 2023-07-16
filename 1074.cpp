#include <iostream>
#include <math.h>
using namespace std;

int se(int r, int c, int sd, int N)
{
    if (r == 1 && c == 1)
        return 0;
    else if (r > sd/2 && c > sd/2)
        return se(r, c-sd/2, sd, N) + pow(4, N-1);
    else if (r > sd/2 && c <= sd/2)
        return se(r-sd/2, c+sd/2, sd, N) + pow(4, N-1);
    else if (r <= sd/2 && c > sd/2)
        return se(r, c-sd/2, sd, N) + pow(4, N-1);
    else if (r <= sd/2 && c <= sd/2)
    {
        sd /= 2;
        N -= 1;
        return se(r, c, sd, N);
    }
    else
        return -1;
}

int main()
{
    int N, r, c;
    
    cin >> N;
    cin >> r;
    cin >> c;

    int sd = pow(2, N);
    int result = se(r+1, c+1, sd, N);
    cout << result;

    return 0;
}


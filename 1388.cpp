#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N, M, num = 0;
    char c;

    cin >> N;
    cin >> M;
    vector<vector <char>> p(N, vector <char> (M, 0));

    for(int i = 0; i < N; i++)
    {
        for(int j=  0; j < M; j++)
        {
            cin >> c;
            p[i][j] = c;
        }
    }

    for(int i = 0; i < N; i++)
    {
        for(int j=  0; j < M; j++)
        {
            if(p[i][j] == '-')
            {
                if(j > 0)
                {
                    if(p[i][j-1] != p[i][j])
                    {
                        num++;
                    }
                }
                else
                {
                    num++;
                }
            }
            else if(p[i][j] == '|')
            {
                if(i > 0)
                {
                    if(p[i-1][j] != p[i][j])
                    {
                        num++;
                    }
                }
                else
                {
                    num++;
                }
            }
        }
    }

    cout << num;

    return 0;
}
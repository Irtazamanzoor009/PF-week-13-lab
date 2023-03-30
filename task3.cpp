#include <iostream>
using namespace std;
int count = 0;
void check();
int matrix[4][3] = {
    {0, 0, 0},
    {0, 1, 2},
    {0, 0, 0},
    {2, 1, 0}};

main()
{
    check();
}

void check()
{
    for (int i = 0; i < 4; i++)
    {
        count = 0;
        for (int j = i+1; j < 3; j++)
        {
            if (matrix[i][j] == matrix[i + 1][j])
            {
                count++;
            }
        }
    }
    cout<<"count: "<<count;
}

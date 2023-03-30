#include <iostream>
using namespace std;
int matrix[3][3] = {
    {1, 0, 0},
    {0, 1, 0},
    {0, 0, 1}};
int count = 0;
bool check();
main()
{
    bool value = check();
    cout << value;
}

bool check()
{
    bool flag = true;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j && matrix[i][j] != 1)
            {
                flag = false;
                break;
            }
            else if (i != j && matrix[i][j] != 0)
            {
                flag = false;
                break;
            }
        }
    }
    return flag;
}
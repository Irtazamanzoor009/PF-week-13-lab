#include <iostream>
using namespace std;
main()
{
    int carData[5][5] = {
        {10, 7, 12, 10, 4},
        {18, 11, 15, 17, 2},
        {23, 19, 12, 16, 1},
        {7, 12, 16, 0, 2},
        {3, 5, 6, 2, 1}};
        int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            sum = sum + carData[i][j];
        }
        //cout<<endl;
    }
    cout<<"Sum is: "<<sum;
}
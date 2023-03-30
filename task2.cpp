#include<iostream>
using namespace std;

string ship[5][5] = {
    {".",".",".","*","*"},
    {".","*",".",".","."},
    {".","*",".",".","."},
    {".","*",".",".","."},
    {".",".","*","*","."},
};
string coordinate;
void check();
main()
{
    while(true)
    {

    cout<<"Enter diagonal: ";
    cin >> coordinate;
    check();
    }
}

void check()
{
    char row;
    char col;
    if(coordinate[0] == 'A')
    {
        row = 0;
    }
    if(coordinate[0] == 'B')
    {
        row = 1;
    }
    if(coordinate[0] == 'C')
    {
        row = 2;
    }
    if(coordinate[0] == 'D')
    {
        row = 3;
    }
    if(coordinate[0] == 'E')
    {
        row = 4;
    }

    col = coordinate[1] - 1;
    if(ship[row][col] == ".")
    {
        cout<<"Splah";
    }
    else
    {
        cout<<"BOOM!";
    }
    //col = word[1];

}
#include <iostream>

using namespace std;

int main()
{
    //static
    int x = 2;
    int *pX = &x;
    cout << *pX << endl;        //output = 2

    //dynamic
    int *y = new int;
    *y = 3;
    cout << *y << endl;         //output = 3
    delete y;
    cout << *y << endl;         //output = 0

    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int x = 5;
    int *pX = &x;
    int **p = &pX;
    
    cout << **p;

    return 0;
}

#include <iostream>
using namespace std;

int main()
{

    int cliff = 10;
    int x = 0;

    while (x<cliff)
    {
        x = x + 1;

        cout << "taking 1 step reaching"     <<     x    << endl;
    }

    cout << "final X" << x << endl;

    if (x == cliff)
    {
        cout << "we are standing at cliff" << endl;
    }
    else if (x > cliff)
    {
        cout << "falling from cliff" << endl;
    }
    return 0;
}
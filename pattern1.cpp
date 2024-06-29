// hard pattern problem
/* 

********
***  ***
**    **
*      *
*      *
**    **
***  ***
********

To solve divide into 2 parts 
part 1: let n= no of rows = 8
row  --  star -- space -- star
4         row    1 to n-2*row  row
3
2
1

part 2: let n= no of rows = 8
row  --  star -- space -- star
1    --  row    n- 2*row   row
2
3
4
*/

#include <iostream>
using namespace std;

int main()
{
    int i, j, n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (i = n / 2; i >= 1; i--)
    {
        for (j = i; j > 0; j--) // Decrement j here
        {
            cout << "*";
        }

        for (j = n - 2 * i; j > 0; j--) // Decrement j here
        {
            cout << " ";
        }

        for (j = i; j > 0; j--) // Decrement j here
        {
            cout << "*";
        }

        cout << endl;
    }

    for (i = 1; i <= n / 2; i++)
    {
        for (j = i; j > 0; j--) // Decrement j here
        {
            cout << "*";
        }

        for (j = n - 2 * i; j > 0; j--) // Decrement j here
        {
            cout << " ";
        }

        for (j = i; j > 0; j--) // Decrement j here
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
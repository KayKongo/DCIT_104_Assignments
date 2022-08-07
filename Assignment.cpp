#include <iostream>
using namespace std;
/* I certify that I, Prince Kongo with index number: 10990135 received no aid in writing the code below. */

int main()
{
    int numbr;
    int a;
    int limit;
    cout << "Hit me with any number ;) : ";
    cin >> limit;
    int sum = 0;
    for(numbr = 2; numbr <= limit; numbr++)
    {
        for(a = 2; a <= (numbr/2); a++)
        {
            if(numbr % a == 0)
            {
                a = numbr;
                break;
            }
        }
    }
        if(a != numbr)
        {
            sum += numbr;
        }

    cout << sum << endl;

    return 0;
}
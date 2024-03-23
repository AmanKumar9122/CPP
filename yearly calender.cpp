#include <iostream>
using namespace std;
int ly(int x)
{
    int nd;
    if (x % 400 == 0)
        nd = 29;
    else if (x % 100 == 0)
        nd = 28;
    else if (x % 4 == 0)
        nd = 29;
    else
        nd = 28;
    return nd;
}
int tyod(int y)
{
    y--;
    int yod4, yod3, ytod;
    int yod1 = y % 400;
    int yod2 = yod1 / 100;
    if (yod2 != 0)
    {
        yod3 = yod1 % 100;
        yod4 = yod1 / 100;
        ytod = ((yod4 * 5) + ((yod3 / 4) * 2) + (yod3 - (yod3 / 4)));
    }
    else
    {
        ytod = (((yod1 / 4) * 2) + (yod1 - (yod1 / 4)));
    }
    return ((ytod + 1) % 7);
}
int main()
{
    int y, temp;
    cout << "Enter the year" << endl;
    cin >> y;
    string m[12] = {"Jannuary", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int m_d[12] = {31, 0, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    m_d[1] = ly(y);
    int d = tyod(y);
    for (int i = 0; i < 12; i++)
    {
        cout << "\n\n\t\t" << m[i] << ", " << y;
        cout << "\n\n   Sun   Mon   Tue   Wed   Thu   Fri   Sat" << endl;
        for (int j = 0; j < d; j++)
        {
            cout << "      ";
        }
        temp = d;
        for (int k = 1; k <= m_d[i]; k++)
        {
            if (k <= 10)
                cout << "     ";
            else
                cout << "    ";
            if (temp > 6)
            {
                cout << "\n    " << k;
                temp = 0;
            }
            else
            {
                cout << k;
            }
            temp++;
        }
        d = temp;
    }
    return 0;
}

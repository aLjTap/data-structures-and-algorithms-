#include <iostream>
using namespace std;

int sayac = 0;
double p = 0.1;
double d = 3853569;
int main()
{

    do
    {
        p = p * 2;
        sayac++;
        cout << sayac << ". katlama = " << p / (10 * 100 * 1000) << endl;

    } while ((p / 1000) < (d * 1000));

    cout << sayac << endl;
}

#include <iostream>
using namespace std;

int degistir(int a) {
    a++;
    return a;
}

int main()
{
    int a, b;
    a = 10;
    cout << "a eski deger: " << a << endl;
    a = degistir(a);
    cout << "a yeni deger: " << a << endl;
    return 0;
}
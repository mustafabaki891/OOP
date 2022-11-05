#include <iostream>
using namespace std;

void degistir(int *a) {
    *a = *a + 1;
    cout << "fonsksiyondaki a degeri: " << *a << endl;
}

int main(){
    int a = 5;
    degistir(&a);
    cout << "maindeki a degeri: " << a << endl;
    return 0;
}

#include <iostream>
using namespace std;

/*
void swap(int *a, int *b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}


int main()
{
	int a = 10, b = 5;
	cout << "a degeri: " << a << endl;
	cout << "b degeri: " << b << endl;
	swap(&a, &b);
	cout << "a degeri: " << a << endl;
	cout << "b degeri: " << b << endl;
	return 0;
}
*/

//struct ogrenci {
//	int no;
//	string sinif;
//};
//
//int main() {
//	ogrenci mert, yaren;
//	yaren.no = 100;
//	yaren.sinif = "Bilg.";
//	mert.no = 150;
//	mert.sinif = "Fizyoterapi";
//	cout << yaren.sinif << endl;
//	return 0;
//}

//struct yer {
//	int degisken;
//};
//
//int main() {
//	yer konum, *adres;
//	adres = &konum;
//	konum.degisken = 100;
//	/*konum->adres = &konum.degisken;*/
//
//	cout << konum.degisken << endl;
//	/*cout << konum->adres << endl;*/
//	return 0;
//}

struct yer {
	int degisken;
};

int main() {
	yer konum;
	int a = 100;
	konum->degisken = &a;

	cout << konum->degisken << endl;

	return 0;
}
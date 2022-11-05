#include <iostream>
using namespace std;

struct ogrenci {
	double ortalama;
	int vize, quiz, final;
	string isim;
};

int main() {
	const int n = 2;
	ogrenci sinif1[n];
	int x[n];

	sinif1[0].isim = "hasan";
	sinif1[0].vize = 50;
	sinif1[0].quiz = 50;
	sinif1[0].final = 60;

	sinif1[1].isim = "huseyin";
	sinif1[1].vize = 50;
	sinif1[1].quiz = 50;
	sinif1[1].final = 70;

	/*
	//ortalamayi tek tek hesaplamak icin
	sinif1[0].ortalama = sinif1[0].vize*0.3 + sinif1[0].quiz * 0.1 + sinif1[0].final * 0.6;
	sinif1[1].ortalama = sinif1[1].vize*0.3 + sinif1[1].quiz * 0.1 + sinif1[1].final * 0.6;
	*/

	//ortalamalari dongu ile hesaplamak icin
	for (int i = 0; i < n; i++) {
		sinif1[i].ortalama = sinif1[i].vize * 0.3 +
			sinif1[i].quiz * 0.1 +
			sinif1[i].final * 0.6;
	}

	for (int i = 0; i < n; i++) {
		cout << sinif1[i].isim << " " << sinif1[i].vize << " " << sinif1[i].quiz << " "
			<< sinif1[i].final << " " << sinif1[i].ortalama << endl;
	}

}

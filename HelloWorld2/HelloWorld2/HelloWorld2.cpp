#include <iostream>
using namespace std;

int main()
{
	int dizi[1];
	dizi[0] = 5;
	int* ptr;
	ptr = dizi;

	cout << "Dizinin adresi..: " << ptr << endl;
	cout << "Dizinin degeri..: " << *ptr << endl;

	cout << "*******************************" << endl << endl;

	int dizi2[3] = { 5,10,15 };
	int* myPtr;
	myPtr = dizi2;
	*myPtr = 6;
	cout << "Dizinin degistirilen ilk elemani..: " << dizi2[0] << endl << endl;

	for (int i = 0; i < 3; i++) {
		cout << "Dizinin " << i + 1 << ". degeri..: " << *(myPtr + i) << endl;
	}
		cout << endl << endl;

		for (int i = 0; i <3; i++) {
			cout << "Dizinin " << i + 1 << ". degerinin adresi(4 bayt artiyor.)..: " << (myPtr + i) << endl;
		}
}
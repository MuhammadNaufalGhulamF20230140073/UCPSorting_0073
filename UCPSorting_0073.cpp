// 1. bekerja dengan cara menyisipkan elemen dari array yang belum di urutkan ke dalam sub array yang sudah diurutkan cocok untuk data yang hampir terurut
// 2. mengambil nilai minimal terendah kemudian membandingkan nya di samping nya.
// 3. dengan melihat jumblah input array, maka kita akan tahu jumblah langkah yang di lakukan
// 4.

#include <iostream>
#include <string>
using namespace std;

int naufal[73]; //deklarasi variabel global array a dengan ukuran 73
int n; //deklarasi variabel global n untuk menyimpan banyak elemen array

void input(){
	int d;
	while (true) {
		cout << " Masukan banyaknya elemen pada array : "; // menampilkan ke layar
		cin >> n; // input dari user
		if (n <= 73) // jika kurang atausama dengan 73
			break; // keluar dari loop
		else
		{
			cout << "\nArray dapat mempunyai maksimal 73 elemen.\n"; // menampilkan ke layar
		}
	}
	cout << endl;
	cout << "=====================" << endl;
	cout << "Masukan Elemen Array" << endl;
	cout << "=====================" << endl;

for (int i = 0; i < n; i++) {
		cout << "Data ke-" << (i + 1) << " : ";
		cin >> naufal[i];
	}

}

// void SelectonSort() {

    void insertionSort() {
	int i, temp, j;

	for (i = 1; i <= n - 2; i++) { // step 1
		temp = naufal[i]; //step 2
		j = i - 1; // step 3
		while (j >= 0 && naufal[j] > temp) //step4
		{
			naufal[j + 1] = naufal[j]; //step 4a
			j = j - 1; //step 4b
		}
		naufal[j + 1] = temp; //step 5
	}
}

	

void display() {
	cout << endl;
	cout << "=================================" << endl;
	cout << "Element Array yang telah tersusun" << endl;
	cout << "==================================" << endl;
	for (int j = 0; j < n; j++) {
		cout << naufal[j] << endl;
	}
	cout << "Jumblah pass = " << n - 1 << endl;
	cout << endl;
}


int main() {

	input();
	insertionSort();
	display();
	system("pause");

	return 0;
}






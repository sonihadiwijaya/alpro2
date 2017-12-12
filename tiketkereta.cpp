#include <iostream>
using namespace std;

typedef struct { 
	char nama[30]; 
	string alamat;
	int umur;
	char goldarah[2];
} penumpang;

typedef struct { 
	string asal;
	string tujuan;
	string kereta;
} kepergian;

typedef struct { 
	int dd;
	int hh;
	int yy;
} jamkeberangkatan;

typedef struct { 
	int tgl;
	string hari;
	string bulan;
	int tahun;
} tanggal;

int main () { 

cout << "===================================================" <<endl;
cout << "| SELAMAT DATANG DIPROGRAM PESAN TIKET KERETA API |" <<endl;
cout << "===================================================" <<endl;

penumpang A;// 
	cout <<"Nama penumpang 	:";gets (A.nama);
	cout <<"No ktp 		:";cin >> A.ktp;
	cout <<"alamat		:";cin >> A.alamat;
	cout <<"Umur 		:";cin >> A.umur;
	cout <<"Goldarah 	:";cin >> A.goldarah;
	cout <<endl;
	
kepergian B;
	cout <<"Asal		  :";cin >>B.asal;
	cout <<"Tujuan		:";cin >>B.tujuan;
	cout <<"Kereta 		:";cin >>B.kereta;
	cout <<"================================================"<<endl;

jamkeberangkatan C;
	cout <<"jam 		  :";cin >> C.dd; //jam
	cout <<"menit 		:";cin >> C.hh; //menit
	cout <<"detik		  :";cin >> C.yy; //detik

tanggal D;
	cout <<"tanggal 	:";cin >> D.tgl;
	cout <<"hari 		  :";cin >> D.hari;
	cout <<"bulan 		:";cin >> D.bulan;
	cout <<"tahun 		:";cin >> D.tahun;

cout << "=================================================" <<endl;
cout << "=================================================" <<endl;

cout <<"tiket kereta api anda adalah :" <<endl;
cout <<"nama penumpang 	:"<< A.nama<<endl;
cout <<"No ktp 		:"<< A.ktp<<endl;
cout <<"alamat		:"<< A.alamat<<endl;
cout <<"Umur 		  :"<< A.umur<<endl;
cout <<"Goldarah 	:"<< A.goldarah<<endl;
cout <<"Asal		  :"<< B.asal<<endl;
cout <<"Tujuan		:"<< B.tujuan<<endl;
cout <<"Kereta 		:"<< B.kereta<<endl;
cout <<"keberangkatan pada jam : " << C.dd 
		<<":"<< C.hh
		<<":"<< C.yy <<endl;
cout << "berangkat pada tanggal : " << D.tgl 
		 <<" hari " << D.hari
		 <<" bulan " << D.bulan
		 <<" tahun " << D.tahun << endl;

return 0;
}

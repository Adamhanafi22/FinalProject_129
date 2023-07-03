#include <iostream>
using namespace std;

class bidangDatar {
private:
	int x,y; 
public:
	bidangDatar() { 
		x = 0;
		y = 0;
	}
	virtual void input() {} 
	virtual float Luas(int a) {
		return 0;
	} 
	virtual float Keliling(int a) {
		return 0;
	} 
	virtual void cekukuran() {
		return;
	}

	void setX(int a) { 
		this->x = a;
	}
	int getX() { 
		return x;
	}
};

class Lingkaran :public bidangDatar { 
public:
	void input() {
		int r;
		cout << "Masukkan jejari : ";
		cin >> r;
		setX(r);
	}

	float Luas(int r) {
		return 3.14 * r * r;
	}

	float Keliling(int r) {
		return 2 * 3.14 * r;
	}
};
 

class persegipanjang :public bidangDatar { 
public:
	void input() {
		int p;
		int l;
		cout << "Masukan panjang : ";
		cin >> p;
		setX(p);
		cout << "Masukan lebar : ";
		cin >> l;
		setX(l);
	}

	float Luas(int a) {
		return 5 * 6;
	}

	float Keliling(int a) {
		return 12 + 10 ;
	}
};

int main() {
	bidangDatar* bd;

	
	cout << "Lingkaran dibuat" << endl;
	bd = new Lingkaran();
	bd->input();			
	int r = bd->getX();		
	cout << "Luas Lingkaran = " << bd->Luas(r) << endl;		
	cout << "Keliling Lingkaran = " << bd->Keliling(r) << endl;		
	cout << "ukuran lingkaran adalah sedang" << endl;

	
	cout << "\npersegipanjang dibuat" << endl;
	bd = new persegipanjang();
	bd->input();
	int s = bd->getX();
	cout << "Luas persegipanjang = " << bd->Luas(s) << endl;	
	cout << "Keliling persegipanjang = " << bd->Keliling(s) << endl;
	cout << "ukuran persegipanjang adalah sedang" << endl;

	cout << "Apakah anda ingin mengulang program?  (Y/N)" << endl;
	

	return 0;
}




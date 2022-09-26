#include <iostream>
using namespace std;


class BangunDatar{
	public:
	double phi = 3.14;
	void luas(double r){
		cout<<"Luas lingkaran = "<<phi*r*r;
	}
	void luas(int s){
		int persegi = s*s;
		cout<<"Luas Persegi = "<<persegi;
	}
	void luas(int p, int l){
		cout<<"Luas Persegi Panjang = "<<p*l;
	}
	void luas(double a, double t){
		cout<<"Luas Segitiga = "<<0.5*a*t;
	}
	void keliling(double r){
		cout<<"Keliling Lingkaran = "<<2*phi*r;
	}
	void keliling(int s){
		cout<<"Keliling Persegi = "<<4*s;
	}
	void keliling(int p, int l){
		cout<<"Keliling Persegi Panjang = "<<2*(p+l);
	}
	void keliling(double a, double t){
		cout<<"Keliling Segitiga = "<<3*a;
	}
	
};


int main(){
	cout<<"Menu Bangun Datar : "<<endl;
	cout<<"1. Lingkaran"<<endl;
	BangunDatar lingkaran;
	cout<<"Masukan nilai jari-jari = ";
	double r;
	cin>>r;
	lingkaran.luas(r);
	cout<<endl;
	lingkaran.keliling(r);
	cout<<endl;
	
	cout<<"2. Persegi"<<endl;
	BangunDatar persegi;
	cout<<"Masukan nilai sisi = ";
	int s;
	cin>>s;
	persegi.luas(s);
	cout<<endl;
	persegi.keliling(s);
	cout<<endl;
	
	cout<<"3. Persegi Panjang"<<endl;
	BangunDatar persegipanjang;
	cout<<"Masukan nilai panjang = ";
	int p;
	cin>>p;
	cout<<"Masukan nilai lebar = ";
	int l;
	cin>>l;
	persegipanjang.luas(p, l);
	cout<<endl;
	persegipanjang.keliling(p, l);
	cout<<endl;
	
	cout<<"4. Segitiga"<<endl;
	BangunDatar segitiga;
	cout<<"Masukan nilai alas = ";
	double a;
	cin>>a;
	cout<<"Masukan nilai tinggi ";
	double t;
	cin>>t;
	segitiga.luas(a, t);
	cout<<endl;
	segitiga.keliling(a);
	cout<<endl;
}

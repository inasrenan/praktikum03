#include<iostream>

using namespace std;

int main(){
	int ta;
	cout<<"Positif, Negatif, Nol"<<endl;
	cout<<"++++++++++++++++++++++++++++++++++++++"<<endl;
	cout<<"Masukan Angka = "; cin>>ta;
	cout<<"======================================"<<endl;
	if(ta>0){
		cout<<"Angka Yang Anda Masuka Positif";
	}
	else if(ta<0){
		cout<<"Angka Yang Nada Masukan Negatif";
	}
	else if(ta=0){
		cout<<"Angka Yang Anda Masukan Nol";
	}
	else {
		cout<<"Angka Yang Anda Masukan Pecahan";
	}
}

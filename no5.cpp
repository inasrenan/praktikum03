#include<iostream>

using namespace std;

int main(){
	int tb,bb,hasil,hasil2;
	cout<<"_____________________________"<<endl;
	cout<<"Menghitung Badan Ideal"<<endl;
	cout<<"_____________________________"<<endl;
	cout<<"Input Tinggi Badan = ";cin>>tb;
	cout<<"Input Berat Badan = ";cin>>bb;
	
	if(bb<(tb/2.5)){
		cout<<"Anda Termasuk Underweghit";
	}
	else if((tb/2.5)<=bb<=(tb/2.3)){
		cout<<"Anda Termasuk Normal";
	}
	else if((tb/2.3)<bb){
		cout<<"Anda Termasuk Overweight";
	}
	else{
		cout<<"Input Tidak Valid!!";
	}
}

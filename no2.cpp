#inculude<iostream>
#inculude<conio.h>

using namespace std;
int main(){
	int x,y,z;
	char r;
	
	cout<<"Program Hitung Luas"<<endl;
	cout<<"****************************************"<<endl;
	cout<<"P = Persegi Panjang"<<endl;
	cout<<"s = Segitiga"<<endl;
	cout<<"Ketika Huruf [P/S] = ";cin>>r;
	
	if (r=='P'||r=='P'){
		cout<<"Menghitung Luas Persegi Panjang"<<endl;
		cout<<"\n";
		cout<<"-------------------------------"<<endl;
		cout<<"Masukan Nilai Panjang\t = "; cin>>x;
		cout<<"masukan Nilai Lebar\t = "; cin>>y;
		z=x*y;
		cout<<"luas Persegi Pnajang\t = "<<z<<"cm";
	}
	else if(r=='S')
}

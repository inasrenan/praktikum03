#include<iostream>

using namespace std;

int main(){
	double jk,lb,jl,jtot;
	long gtot,gaber;
	
	cout<<"PROGRAM HITUNG GAJI"<<endl;
	cout<<"+++++++++++++++++++++++++++++++++"<<endl;
	cout<<"Lama Jam Kerja Perminggu = ";cin>>jk;
	cout<<"==============================="<<endl;
	if (jk>40){
		cout<<"Gaji Pokok\t\t = Rp 2000.000"<<endl;
		cout<<"Jam Kerja Standar\t = 40 jm"<<endl;
		lb=jk-40;
		cout<<"Lembur\t\t = "<<lb<<" jam"<<endl; 
		jl=lb*1.5;
		jtot=40+jl;
		cout<<"Total Jam Kerja\t\t = "<<jtot<<" jam"<<endl;
		gtot=2000000+(jl*100000);
		cout<<"Total Gaji \t\t = "<<"Rp "<<gtot<<endl;
		cout<<"Potongan \t\t = 15%"<<endl;
		gaber=gtot-(0.15*gtot);
		cout<<"Gaji Bersih\t\t = "<<"Rp "<<gaber;
	}
	else if (jk<=40){
		cout<<"Gaji Pokok\t\t = Rp 2000.000"<<endl;
		cout<<"Jam Kerja Standar\t = 40 jam"<<endl;
		lb=0;
		cout<<"Lembur\t\t\t = "<<lb<<" jam"<<endl;
		jl=lb*1.5;
		jtot=40+jl;
		cout<<"Total Jam Kerja \t\t = "<<jtot<<" jam"<<endl;
		gtot=2000000+(jl*100000);
		cout<<"Total Gaji \t\t = "<<"Rp "<<gtot<<endl;
		cout<<"Potongan \t\t = 15%"<<endl;
		gaber=gtot-(0.15*gtot);
		cout<<"Gaji Bersih\t\t = "<<"Rp "<<gaber;
	}
	return 0;
}

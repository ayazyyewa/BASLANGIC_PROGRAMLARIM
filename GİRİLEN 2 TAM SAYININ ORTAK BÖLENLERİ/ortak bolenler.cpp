#include<iostream>
using namespace std;
string secim;
int main()
{
	do{
		int i,x,y,toplam=1;
		
		cout<<"BIRINCI SAYIYI GIRINIZ:"<<endl;
		cin>>x;
		cout<<"\n\nIKINCI SAYIYI GIRINIZ:"<<endl;
		cin>>y;
		
		i=1;
		while(i<=x&&i<=y)
		{
	i++;
	if(x%i==0&&y%i==0)
	{
	cout<<"\n"<<i;
	}
	}		
		cout<<"\ndDEVAM ETMEK ISTIYORMUSUNUZ:"<<endl;
		cin>>secim;
	
	}while(secim=="evet"||secim=="EVET");	
}

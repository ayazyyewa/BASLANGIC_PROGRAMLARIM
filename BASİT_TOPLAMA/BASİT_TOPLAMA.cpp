#include<iostream>
using namespace std;
int main()
{
	int i,j,z;
	int toplam=0;
	cout<<"BASLANGIC SAYI:"<<endl;
	cin>>j;
	cout<<"BITIS SAYISI:"<<endl;
	cin>>z;
	for(i=j;i<=z;i++)
	{
		toplam+=j;	
	}
	cout<<j<<"den"<<z<<"e kadar olan sayýlarýn toplamý:"<<toplam;
	return 0;	
}

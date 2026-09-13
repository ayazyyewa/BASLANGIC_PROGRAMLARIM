#include<iostream>
using namespace std;
string secim;
int main()
{   
do{
    int z,x,i;
	cout<<"ASAL SAYI OLUP OLMADYGYNY ANLAMAK ISTEDIGINIZ SAYIYI GIRINIZ:"<<endl;
	cin>>x;
	if(x==1||x==4)
	{
		cout<<"\nBU SAYI ASAL SAYI DEGILDIR"<<endl;
	}
	else if(x==2||x==3)
	{
		cout<<"BU SAYI ASAL SAYIDIR"<<endl;
	}
	i=2;
while(i<x)
{
	z=0;
	if(x%i==0)
	{
cout<<"\nBU SAYI ASAL SAYI DEGILDIR"<<endl;	
z++;	
	    		break;		
	}
	i++;
}
    if(z==0)
    {
	cout<<"BU SAYI ASAL SAYIDIR"<<endl;
    }
	cout<<"\nDEVAM ETMEK ISTIYORMUSUNUZ?"<<endl;
	cin>>secim;

}while(secim=="evet"||secim=="EVET");
}

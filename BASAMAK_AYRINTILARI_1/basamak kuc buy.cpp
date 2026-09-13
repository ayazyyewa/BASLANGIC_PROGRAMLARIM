#include<iostream>
using namespace std;
string secim;
int main()
{
	do{
	
    int a,t=9,b=0,x,z=0,c=0,d;
    cout<<"GIRDIGINIZ SAYININ EN KUCUK BASAMAK SAYISI VE VS AYRINTILAR ICIN  1-I \nGIRDIGINIZ SAYININ EN BUYUK BASAMAK SAYISI VE VS AYRINTILAR ICIN  2-I   TUSLAYINIZ"<<endl;
    cin>>d;
    switch(d)
     {
	 case 2:
	 	{
		 
	
	cout<<"BIR SAYI GIRINIZ:"<<endl;
	cin>>x;
	while(x>0)
	{
		a=x%10;
		if(a>c)
		{
			c=a;	
		}
		
		x=x/10;
		
		b+=a;
		z++;
	}
	cout<<"\nEN BUYUK SAYI:"<<c<<endl;
	cout<<"TOPLAM BASAMAK SAYISI:"<<z<<"\nBASAMAKLARIN TOPLAMI:"<<b<<endl;
	break;
}
	case 1: 
	{
			cout<<"BIR SAYI GIRINIZ:"<<endl;
	cin>>x;
	while(x>0)
	{
		a=x%10;
		if(a<t)
		{
			t=a;	
		}	
		x=x/10;
		b+=a;
		z++;
	}
	cout<<"\nEN KUCUK BASAMAK SAYISI:"<<t<<endl;
	cout<<"TOPLAM BASAMAK SAYISI:"<<z<<"\nBASAMAKLARIN TOPLAMI:"<<b<<endl;
		break;
}
default:
	{cout<<"HATALI TUSLAMA!"<<endl;
		break;
	}
}
	cout<<"\nDEVAM ETMEK ISTIYORMUSUNUZ:"<<endl;
	cin>>secim;
	}while(secim=="evet"||secim=="EVET");
	return 0;
}

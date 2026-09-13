#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d,i,j,a1,a2;
	int dizi01[]={455,63,89,83,83,75,41,2555,77,89,63,63,664};
	int dizi02[]={88,63,89,89,441,2555,83,83,83,78,2222,41,41};
	a1=sizeof(dizi01)/sizeof(dizi01[0]);
	a2=sizeof(dizi02)/sizeof(dizi02[0]);
	for(i=0;i<a1;i++)
	{
		a=0;
		b=0;
		for(j=0;j<i;j++)
		{
			if(dizi01[i]==dizi01[j])
			{
			b++;
			break;
		}
		}
		if(b!=0)
		{
			continue;
		}
		for(d=0;d<a2;d++)
		{
			if(dizi01[i]==dizi02[d])
			{
				a++;
				
			}
			
		}
		if(a!=0)
		{
			cout<<"1.dýzýde olup 2.dýzýde tekrar eden "<<a<<"tane "<<dizi01[i]<<"var"<<endl;
		}
		
	}
	
}

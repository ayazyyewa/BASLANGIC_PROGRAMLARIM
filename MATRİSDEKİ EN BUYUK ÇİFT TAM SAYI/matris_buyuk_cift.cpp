#include<iostream>
using namespace std;
int main()
{
int toplam=0,x,a=0,y=0,i,j,b,z;
int dizi[5][6]={{2,3,65,4,5,6},{99,56,12,13,45,14},{65,89,9,6,45,34},{67,89,34,51,21,31},{1,2,3,4,5,6}};
y=dizi[0][0];
for(i=0;i<5;i++)
{
for(j=0;j<6;j++)
{
if(dizi[i][j]%2==0&&dizi[i][j]>y)
{
y=dizi[i][j];
}
}
}
cout<<y;
}

#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int a[1000],n,m=a[0];

void nhap()
{
	cout<<"nhap so luong phan tu : "; cin>>n;
	for(int i=0; i<n; i++)
	{
		cout<<"nhap gia tri thu "<< i<<":";
		cin>>a[i];
	}
}

void gtlonnhat()
{
	for(int i=0; i<n; i++)	
	{
		if(i%2==0&&a[i]>m)
	{
	   m=a[i];
	}
    }
	cout<<"gia tri lon nhat o vi tri chan la :"<< m;
}

int main()
{
	nhap();
	gtlonnhat();
}
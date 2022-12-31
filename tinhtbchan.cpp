#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int a[100], n, tong=0, d=0;
void nhap()
{
	cout<<"\nnhap so luong phan tu :"; cin>>n;
	for(int i=0; i<n; i++)
	{
		cout<<"nhap phan tu thu "<< i <<"la : ";
		cin>>a[i];
	}
}

void tinhtb()
{
	for(int i=0; i<n; i++)
	{
		if(i%2==0)
		{
			tong+=a[i];
			d++;
		}
	}
	cout<<"gia tri trung binh chan la :"<< float(tong)/float(d);
}

int main()
{
	nhap();
	tinhtb();
}
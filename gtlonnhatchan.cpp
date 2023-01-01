#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int a[1000],n,m=a[0],m1=a[1];

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
	cout<<"gia tri lon nhat o vi tri chan la :"<< m <<"\n";
}

void gtlonnhat1()
{
	for(int i=0; i<n; i++)
	{
		if(i%2==1&&a[i]>m1)
		{
			m1=a[i];
		}
	}
	cout<<"gia tri lon nhat o vi tri le la :"<< m1;
}

int main()
{
	nhap();
	gtlonnhat();
	gtlonnhat1();
}
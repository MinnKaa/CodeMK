#include <iostream>
#include <string>

using namespace std;

void mang(int a[], int n)
{
	cout<<"nhap so luong phan tu :"<<" ";
	cin>>n;
	for(int i=0; i<n; i++)
	{
		cout<<"nhap phan tu thu "<< i+1<<" "<<"la :"<<" ";
		cin>>a[i];
	}
	for(int i=0; i<n; i++)
	{
	   int max=i;
	   for(int j=i+1; j<n; j++)
	   {
	   	if(a[j]>a[max])
	   	a[max]=a[j];
		}	
		if(max != i){
			int k=a[i];
			a[i]=a[max];
			a[max]=k;
		}
	}	
	cout<<"sap xep gia tri trong mang : "<<"\n";
	for(int i=0; i<n; i++){
		cout<< a[i] <<"\n";
	}
	
}


int main()
{
	int mk[100];
	int n;
	mang(mk, n);
}
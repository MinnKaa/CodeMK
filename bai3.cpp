#include<iostream>
#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
struct hocsinh
{
    char ht[100];
    int ns;
    float diemtb;
};
void nhap(hocsinh hs[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "________________________________\n";
        cout << "Nhap ho ten hoc sinh " << i + 1 << " :";
        fflush(stdin);
        gets(hs[i].ht);
        cout << "\n \tnam sinh cua hoc sinh " << i + 1 << " :";
        cin >> hs[i].ns;
       cout << "\n \tnhap diem trung binh " << " :";
        cin >> hs[i].diemtb;
        if (hs[i].diemtb >= 8)
    {
        cout << "hoc luc gioi";
    }
    else if (hs[i].diemtb < 8 && hs[i].diemtb >= 7)
    {
        cout << "hoc luc kha";
    }
    else if (hs[i].diemtb < 7 && hs[i].diemtb>5)
    {
        cout << "hoc luc TB";
    }
    else
    {
        cout << "hoc luc yeu";
    }
    }
  
   
}

/*
void tim(canbo cb[])
{
 for(int i=0;i<=1;i++)
 {
  cout<<"tim kiem can bo:";
  fflush(stdin);
  gets(cb[i].ht);
 //thuc hien lenh gan
}

 while(true)
 {
  char x=cb[i].ht;

  for(int i=0;i<n;i+)
  {
   if(cb[i].ht==x)
   {
    for(int i=1;i<n;i++)
    cb[i-1].ht=cb[i].ht;
   }
  }
 }
}
*/


int main()
{
    hocsinh min[100];
    int n;
    do
    {
        cout << "nhap so luong hoc sinh:";
        cin >> n;
    } while (n > 50);
    nhap(min, n);

}
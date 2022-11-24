#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main() {
int a,b,r,d=0;
cin>>a>>b;
if (b!=0)
{
 r=a;
 while (r>=b)
 {
  r-=b;
  d++;
 }
 cout<<"quotient : "<<d<<"\n";

 cout<<"remaining : "<<r;
 }
}

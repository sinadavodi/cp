#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main() {
	int a,n;
cout<<"enter your salary : ";
cin>>a;
if(a<6000000){
	cout<<a;
}
else if(a>=6000000 && a<8000000){
	n=(5*a)/100;
	cout<<n;
}
else if(a>=8000000 && a<10000000){
	n=(10*a)/100;
	cout<<n;
}
else if(a>=10000000 && a<14000000){
	n=(15*a)/100;
	cout<<n;
}
else if(a>=14000000 && a<18000000){
	n=(20*a)/100;
	cout<<n;
}
else if(a>=18000000 && a<25000000){
	n=(25*a)/100;
	cout<<n;
}
else if(a>25000000){
	n=(35*a)/100;
	cout<<n;
}
}

#include <iostream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() {
 int n;
 cout <<" Enter Number :";
 cin >>n;
 for(int i = 1; i <= n ; i++){
   if( n % i == 0 ){
     cout <<i<<endl; }
    } 
}

#include<iostream>
using namespace std;
int main (){
    // take float input and print the factorial part of the real number 
   float x ;
   cin >> x ; // 9.7
   float y = (int)x ; // y = 9 ;
   if (y <0 ) y = y-1 ;
   x = x - y ;
   cout << x ; 

return 0;
}
#include<iostream>
#include<ctime>
using namespace std;
int main (){
 // pseudo random number = not truly random (but close) 

  srand(time(NULL));
 // triple dice
  int x = rand () % 6 + 1;
  int y = rand () % 6 + 1;
  int z = rand () % 6 + 1;
  
    cout << x << '\n';
    cout << y << '\n';
    cout << z << '\n';


}
#include<iostream>
#include<ctime>
using namespace std;
int main (){
    
    srand( time(0));

    int wish = (rand() % 10) + 1;
   
    switch(wish){
        case 1: cout << " Harbinger of dawn ";
        break;
        case 2: cout << " Bennet 4 star ";
        break;
        case 3: cout << " slingshot " ;
        break;
        case 4: cout << " sacrifical sword 4 star ";
        break;
        case 5: cout << " 5 STAR RAIDEN SHOGUN";
        break;
        case 6: cout << " magic index ";
        break;
        case 7: cout << " Harbinger of dawn ";
        break;
        case 8: cout << " xingqui 4 star ";
        break;
    
        case 9:cout << " slingshot " ;
        break;
        case 10: cout << " magic index ";
        break;

    
    }
   
        }


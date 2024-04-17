#include <iostream>
#include <cmath>
 using namespace std;
 int main (){
    // type conversion
    /*
    int correct = 8;
    int questions = 10 ;

    double score = correct/(double)questions *100;

    std::cout << score << "%";
    */


   // if else statements

   /* int age ;
   
   cout << "enter your age ";
   cin >> age;

   if (age >=18){
      cout << " you are eligible to enter the site ";
   }

   else if (age <=0){
      cout << " you are not born yet " ;
   }
   
   else {
      cout << " you are not eligible to enter the site ";
   }
   */
   
     // switches

    /* char rank;
     cout << "What's your rank ? " ;
     cin >> rank;

     switch( rank ){
      case 'R' :
      cout << " you are radiant rank";
      break;

      case 'I' :
      cout << " you are immortal rank ";
      break;

      case 'A':
      cout << " you are ascendent rank";
      break;

      case 'D':
      cout << " you are diamond ";
      break;

      case 'P':
      cout << " you are plat ";
       
      default :
      cout << " you are plastic rank ";
   

     } */

     //int number =9;
     //number % 2 == 0 ? cout << " ODD" : cout << " EVEN ";

   int age ;
   
   cout << "enter your age ";
   cin >> age;

   if (!age <=18 ){
      cout << " you are  not eligible to enter the site ";
   }
   
   else {
      cout << " you are eligible to enter the site ";
   }

 }
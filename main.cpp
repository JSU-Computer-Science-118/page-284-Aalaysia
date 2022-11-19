// Aalaysia Kelley j00958443
// Program on pg. 284 11/15/22


#include <iostream>                                 
#include <cstdlib>                                  
#include <ctime>  
using namespace std;                                
int main()                                          
{                                                   
       //declare the variables                      
int num;             //variable to store the random
                         //number                         
int guess;         //variable to store the number
                        //guessed by the user            
bool isGuessed;  //boolean variable to control
                           //the loop                       

srand(time(0));                                 
num = rand() % 100;                             
 isGuessed = false;                              
while (!isGuessed)                              
{                                               
        cout << "";             
     cin >> guess;                               
    cout << endl;                               

    if (guess == num)                           
   {                                         
         cout << "You guessed the correct "                 
                << "number." << endl;              
        isGuessed = true;                     
   }                                           
else if (guess < num)                     
    cout << ""                 
            << endl;                           
else
           cout << ""                
                   << endl;                          
    } //end while
 return 0;                                       
} 

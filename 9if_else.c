# include <stdio.h> 

int main(){
     
     int a ;
     printf("Enter the value \n");
     scanf("%d", &a);

     if (a%2==0){
          printf("%d is even number \n", a);
     }

     else{

          printf("%d is odd number \n", a);

     }

/*

               Syntax 
          
          if (condition){
               code to be executed if the condition retuns true
          }

*/

// Relational operators return true or false 
// These operators are used to decide the condition is true of false example : <,>,<=,>=,!=

     
     return 0;
}
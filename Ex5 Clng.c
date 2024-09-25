#include <stdio.h>


int main () {

     float a , b , s , m , n ;


     printf ( "veuillez entrer les valeurs a et b" ) ;
     scanf ( "%f %f" ,  &a , &b ) ;

      s = a + b ;
      m = a - b ;
      n = a * b ;

      if ( b != 0 ){

         printf("a / b = %f\n", a / b ) ;
      }

       else {
        printf (" entrer un nombre non null") ;
       }

      printf("a + b = %f\n", s ) ;
      printf("a - b = %f\n", m ) ;
      printf("a * b = %f\n", n ) ;





return 0 ;

}

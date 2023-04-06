#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>





int min (int ,int );
int max (int ,int );
int GCD( int  , int  );
int abs( int );
int Totient(int );
bool  isNumberPrime( int  );

int main()
{

    int a,b,c;

    printf("Input the first number for GCD: ");
    scanf("%d", &a);
    printf("Input the second number for GCD: ");
    scanf("%d", &b);
    int abs_a = abs(a);
    int abs_b = abs(b);
    printf("The GCD of %d and %d is %d\n", a, b, GCD(abs_a, abs_b));


    printf("Input number to find totient : \n");
    scanf("%d", &c);
    printf("The totient of %d is %d\n", c,Totient(c));


    int number_to_check_prime;

    printf("Enter number to check if prime : ");
    scanf("%d", &number_to_check_prime);

    if(isNumberPrime(number_to_check_prime)){
        printf("%d is prime", number_to_check_prime);
    }
    else{
        printf("%d is not prime", number_to_check_prime);;
    }
    printf("\n\n");


    return 0;
}



int GCD( int a , int  b){

    int smaller_number = min(a,b);
    int bigger_number = max(a,b);

    if(smaller_number == 0)
        return bigger_number;

    int rem = bigger_number % smaller_number;

    return GCD (rem, smaller_number);

}



int max (int a, int b){
    return a > b ? a : b;
}

int min (int a,int b){
    return a > b ? b : a;
}

int abs( int a){
    if( a > 0)
        return a;
    else
        return -a;
}


int Totient(int a){

    int relatively_prime_numbers_so_far = 0;

    for (int current_number_to_check =  1 ; current_number_to_check < a ; current_number_to_check++){
        if(GCD(a,current_number_to_check) == 1){
            relatively_prime_numbers_so_far++;
        }
    }

    return relatively_prime_numbers_so_far;

}

bool  isNumberPrime( int a ){
    if(Totient(a) == a - 1)
        return true;
    else
        return false;
}



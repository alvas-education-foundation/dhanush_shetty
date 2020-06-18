//Write a C Program to generate first N Magic Numbers
#include <stdio.h> 
int nthMagicNo(int n) 
{ 
    int pow = 1, answer = 0; 
    while (n) 
    { 
       pow = pow*5; 
       if (n & 1) 
         answer += pow; 
       n >>= 1;  // or n = n/2 
    } 
    return answer; 
} 
int main() 
{ 
    int n = 5; 
    printf("nth magic number is %d\n",nthMagicNo(n)); 
    return 0; 
}
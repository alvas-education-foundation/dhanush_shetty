//Write a C Program to print the sum of boundary elements of a matrix
#include <stdio.h> 
#define MAX 100
  
void printBoundary(int a[][MAX], int m, int n) 
{ 
    for (int i = 0; i < m; i++) { 
        for (int j = 0; j < n; j++) { 
            if (i == 0 || j == 0 || i == n - 1 || j == n - 1) 
                printf("%d",a[i][j]); 
            else
                 printf(" ");
                 printf(" "); 
        } 
       printf("\n"); 
    } 
} 
  
// Driver code 
int main() 
{ 
    int a[4][MAX] = { { 1, 2, 3, 4 }, { 5, 6, 7, 8 }, { 1, 2, 3, 4 }, { 5, 6, 7, 8 } }; 
    printBoundary(a, 4, 4); 
    return 0; 
} 

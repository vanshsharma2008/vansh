#include <stdio.h>
int main() { 
    int pMO = 1000, rMO = 5, tMO = 2;
    int simpleInterest = (pMO * rMO * tMO) / 100;
    printf("Simple Interest: %d\n", simpleInterest); 
    int totalAmount = pMO + simpleInterest;
    printf("Total Amount: %d\n", totalAmount);  
    return 0;
}
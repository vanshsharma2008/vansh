#include <stdio.h>
int main() { 
    float pMO = 1000.0f, rMO = 5.0f, tMO = 2.0f;
    float simpleInterest = (pMO * rMO * tMO) / 100.0f;
    printf("Simple Interest: %.2f\n", simpleInterest); 
    float totalAmount = pMO + simpleInterest;
    printf("Total Amount: %.2f\n", totalAmount); 
    return 0;
}
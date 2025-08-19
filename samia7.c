#include <stdio.h> 
int main() { 
float principal,rate,time,si; 
printf("Enter Principal (P): "); 
scanf("%f", &principal); 
printf("Enter Time (T in years): "); 
scanf("%f", &time); 
printf("Enter Rate (R in %%): "); 
scanf("%f", &rate); 
si = (principal * rate * time) / 100; 
printf("Simple Interest = %.2f\n", si); 
return 0; 
} 

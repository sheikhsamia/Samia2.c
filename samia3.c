#include <stdio.h> 
int main() { 
int days, years, weeks; 
printf("Enter number of days: "); 
scanf("%d", &days); 
years = days / 365; 
days = days % 365; 
weeks = days / 7;
days = days % 7; 
printf("Years: %d, Weeks: %d, Days: %d\n", years, weeks, days); 
return 0; 
} 
  #include <stdio.h> 
  int main() 
  { 
  float cm,meters,km; 
  printf("Enter length in centimeters: "); 
  scanf("%f", &cm); meters = cm / 100.0; km = cm / 100000.0; 
  printf("Length in meters = %.2f\n", meters); 
  printf("Length in kilometers = %.5f\n", km); 
  return 0; 
  } 

#include <stdio.h> 
int main()
{
  int n=3, i, sum; 
  sum = 0;
  for (i = 1; i < n; i++) 
  {
    if (n % i == 0)
    {
      sum+= i; 
      printf("%d  ", i); 
    }
  }
  printf("\nThe sum of the divisors is: %d", sum); 
  if (sum == n) 
    printf("\nSo, the number is perfect.\n");
  else
    printf("\nSo, the number is not perfect.\n");
  return 0; 
}

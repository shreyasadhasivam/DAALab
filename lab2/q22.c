#include <stdio.h>
#include <stdlib.h>
# define size 100

int* prime_factors(int n) 
{

  int *ans = calloc(n,sizeof(int));

  int i,j,k,check;
  check = k = 0;
  int opcount;
    for(i=2; i<n; i++) 
    {
      opcount++;
      if(n%i == 0) 
      {
      // i is a factor
        for(j=2; j<=i; j++) 
        {
          if(i%j == 0) 
            check ++;
        }

        if(check == 1)
        ans[k++] = i; 
      }

    }

  return ans;

}

int gcd(int m, int n) 
{
  printf("%d", prime_factors(m));

}

int main() {
  int a, b;
  printf("Enter two positive integers: ");
  scanf("%d %d", &a, &b);
  printf("GCD of %d and %d is: %d\n", a, b, gcd(a, b));
  return 0;
}

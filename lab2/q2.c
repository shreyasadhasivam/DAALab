int[] prime(int n)
{
	for (i = 2; i <= n; ++i) {
    while (n % i == 0) 
    {
 		for(int j=0;j<=n;j++)
 		{
 			int arr[j] = i;
 		}	     
    	n /= i;
    }
    return arr[j];
    printf("%d", arr[j]);

}

int common(int m, int n)
{
	int mpf = prime(m);
	int npf = prime(n);

}
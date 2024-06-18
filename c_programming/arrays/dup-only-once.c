#include <stdio.h>

int main() 
{
	int n, i, j;

	printf("Enter the value of n: ");
	scanf("%d", &n);

	int a[n];
	printf("Enter the array values:\n");
	for (i = 0; i < n; i++) 
	{
		scanf("%d", &a[i]);
	}

	printf("Duplicate elements (each printed only once):\n");
	for (i = 0; i < n; i++) 
	{
		for (j = i + 1; j < n; j++) 
		{
			if (a[i] == a[j]) 
			{
				int is_duplicate = 0;
				for (int k = 0; k < i; k++) 
				{

					if (a[k] == a[i]) 
					{
						is_duplicate = 1;
						break;
					}
				}
				if (!is_duplicate) 
				{
					printf("%d\n", a[i]);
				}
				break;
			}
		}
	}

	return 0;
}

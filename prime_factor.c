/* find prime factor of number input */

#include <stdio.h> 

int main(){

int num, pf=2; 
int vector[1000];
int i=0;

int var; 
	scanf("%d",&var);
	num = var; 
	while (num > 1)
	{
		if( num % pf == 0)
		{
			num = num / pf;
			vector[i] = pf; 
			i++; 
			if(num==1)
				break; 
		}
		else 
			pf++; 
	}

	printf("prime factor of %d is: \n",var);
	for(int k = 0; k < i-1 ; k++)
		printf("%d*",vector[k]);
		
		printf("%d\n",vector[i-1]);

}
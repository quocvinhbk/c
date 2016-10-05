/* print out this patten 
A B C D E F G F E D C B A
A B C D E F   F E D C B A
A B C D E       E D C B A
A B C D           D C B A
A B C               C B A
A B                   B A
A                       A

	*/

#include <stdio.h> 

int main() 
{

	int hi_chr = 'G', low_chr = 'A'; 

	int boder = 2*(hi_chr - low_chr) + 1; 
	int cnt,chr; 

	for(int lim = hi_chr ;lim >= low_chr; lim--)
		{	
			chr= low_chr;
			for( int cnt = low_chr; cnt < low_chr + boder; cnt++)
			{
				
					if(chr <= lim)
						printf("%c ",chr); 
					else 
						printf("  "); 

					if(cnt < hi_chr)
						chr++; 
					else 
						chr--;	
			}
		printf("\n"); 	
		}
}
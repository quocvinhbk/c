/* convert year to Roman Numerals */

#include <stdio.h> 

char roman[1000]; 
int pt = 0; 

void pos(char dg, int n)
{
    for(int i=0;i<n; i++)
        roman[pt++] = dg; 
}

void pre(char first, char last)
{
    roman[pt++] = first; 
    roman[pt++] = last; 
}


int main(){

    int num,year; 
    printf("year input: ");
    scanf("%d",&year);

    if(year < 0 )
    {
        printf("wrong input" );
        return 0; 
    }
    else 
    {
        num = year; 

        while(num > 0)
        {
        // num > 1000   ==> +'M'
        if(num > 1000) 
        {
            pos('M',num / 1000); 
            num = num % 1000;
        } 

        // 900 <= num < 1000 ==> +CM
        else if(900 <= num && num < 1000) 
        {
            pre('C','M'); 
            num = num - 900; 
        }

        // 500 <= num < 900     ==> +D
        else if(500 <= num && num < 900)
        {
            pos('D',num/500);
            num = num % 500;  
        }

        // 400 <= num < 500     ==> +CD
        else if(400 <= num && num < 500) 
        {
            pre('C','D');
            num = num - 400; 
        }

        // 100 <= num < 400 ==> +C
        else if(100 <= num && num < 400) 
        {
            pos('C',num/100);
            num = num % 100; 
        }

        // 90  <= num < 100 ==> +XC
        else if(90 <= num && num < 100)
        {
            pre('X','C'); 
            num = num - 90; 
        }
        // 50 <= num < 90   ==> +L
        else if(50 <= num && num < 90) 
        {
            pos('L',num/50);
            num = num % 50; 
        }

        // 40 <= num < 50   ==> +XL 
        else if( 40 <= num && num < 50)
        {
            pre('X','L'); 
            num = num - 40; 
        }

        // 10 <= num < 40   ==> +X
        else if( 10 <= num && num < 40)
        {
            pos('X',num/10);
            num = num % 10; 
        }

        // 9 <= num < 10    ==> +IX
        else if( 9 == num)
        {
            pre('I','X');
            num = num - 9;  
        }

        // 5 <= num < 9     ==> +V 
        else if( 5 <= num && num < 9)
        {
            pos('V',num/5);
            num = num % 5; 
        }

        // 4 <= num < 5     ==> +IV 
        else if( 4 == num)
        {
            pre('I','V');
            num = num - 4; 
        }

        //  0 < num < 4     ==> +I
        else 
        {
            pos('I',num/1);
            num = num % 1; 
        }
        }

        printf("year %d in roman is %s \n",year,roman);

    }
}

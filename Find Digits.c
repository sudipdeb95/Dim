#include<stdio.h>

main()
{
    int t, i , n, divisors, div, count;
    scanf("%d", &t);
    for(i=0; i<t; i++){
        count=0;
        scanf("\n%d", &n);
        divisors=n;
        while(divisors!=0){
                div=divisors%10;
                if(div!=0)
                {
                    if(n%div==0)
                    {
                        count++;
                    }

                } divisors=divisors/10;


        }
        printf("%d",count);
    }


}


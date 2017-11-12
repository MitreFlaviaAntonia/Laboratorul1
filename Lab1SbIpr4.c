#include<stdio.h>
int main()
{

    int a,b,s,d,p,intdiv,modulus;
    float realdiv;

        printf("a=");
        scanf("%d",&a);

        printf("b=");
        scanf("%d",&b);

        s=a+b;

        printf("\nsum=%d",s);

        d=a-b;

        printf("\ndif=%d",d);

        p=a*b;

        printf("\nproduct=%d",p);

            if(a%b==0)

            {
                intdiv=a/b;
                printf("\nintdiv=%d",intdiv);
            }
                else

                {
                    realdiv=(float)a/(float)b;
                    printf("\nrealdiv=%f",realdiv);
                }

                        modulus = a % b ;

                        printf("\n a %% b = %i", modulus);

                        return 0;
}





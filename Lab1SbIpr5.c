#include <stdio.h>
#include <math.h>
int main ()
    {
    int n1,n2,raise;
    int result1, result2,inv1=0,inv2=0,copyn1,copyn2,c;

    printf("n1=");
    scanf("%d",&n1);

    printf("\nn2=");
    scanf("%d",&n2);

    result1=sqrt(n1);
    result2=sqrt(n2);
    raise=pow(n1,n2);

        printf("The square root of n1 = %d\n",result1);
        printf("The square root of n2 = %d\n",result2);
        printf("Raise x to y = %d\n",raise);

        copyn1=n1;
        copyn2=n2;

            while(copyn1!=0)
            {
                c=copyn1%10;
                inv1=inv1*10+c;
                copyn1=copyn1/10;
            }

                    printf("The inverse of n1 is: ");
                    printf("%d",inv1);

                        while(copyn2!=0)
                        {
                            c=copyn2%10;
                            inv2=inv2*10+c;
                            copyn2=copyn2/10;
                        }

                                printf("\nThe inverse of n2 is: ");
                                printf("%d",inv2);

                                    return(0);
    }



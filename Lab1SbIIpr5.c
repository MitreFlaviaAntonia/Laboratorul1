#include<stdio.h>
int main()
    {
        char fname[20],lname[20];
        int i;

            printf("First name:");
            gets(fname);
            printf("\nLast name: ");
            gets(lname);

                    for(i=1;i<=9;i++)
                {
                    printf("\n\nFirst name: ");
                    printf("%s",fname);
                    printf("\n\nLast name: ");
                    printf("%s", lname);
                }
    }

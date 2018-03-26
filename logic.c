#include <stdio.h>
int main()
{
    int i,j,k;
    printf("A B C  O/P\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            for(k=0;k<2;k++)
            {
                if(i==1|j==1|k==1)
                {
                    printf("%d %d %d   1\n",i,j,k);
                }
                else
                {
                    printf("%d %d %d   0\n",i,j,k);
                }
            }
        }
    }
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a=0;
    scanf_s("%d",&n);
    int N[n];
    for(int i=0;i<n;i++)
    {
    scanf_s("%d",&N[i]);

    for(int x=2;x<=N[i];x++)
    {
        if(x==N[i])
            {
            a=1;
            break;
            }
        if((N[i]%x)==0)
        {
          a=0;
          break;
        }
    }
    if(a==1) printf("YES ");
    else printf("NO ");

    }

        }



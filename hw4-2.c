#include <stdio.h>
#include <stdlib.h>

int main()
{
int N,a,pass;
int account[3][6] = {{123,456,789,336,775,566},
                     {456,789,888,558,666,221},
                     {9000,5000,6000,10000,12000,7000}};


scanf("%d",&N);

for(int i=0;i<N;i++)
{
    scanf("%d %d",&a,&pass);
    for(int j=0;j<=6;j++)
    {

        if(account[0][j] == a)
        {
          if(account[1][j] == pass)
          {
              printf("%d\n",account[2][j]);
              break;
          }
          else
          {
           printf("error\n");
           break;
          }

          }

        else if(j == 6) printf("error\n");
        }

        }


                    }

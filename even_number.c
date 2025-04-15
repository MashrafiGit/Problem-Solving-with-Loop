#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);

   if(N < 2)
   {
    printf("-1");
   } else{
    for (int i = 2; i <= N; i += 2)
    {
        printf("%d\n", i);
    }
   }

    return 0;
}
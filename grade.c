#include <stdio.h>
int main(){
    float score;
    printf("Enter you score:    \n");
    scanf("%f",&score);
    
if(score >=70)
{
   printf("A\n");
}
else if (score >=60)
{
   printf("B\n");
}
else if (score >=50)
{
    printf("C\n");
}
else if (score >=45)
{
    printf("D\n");
}
else if (score >=40)
{
    printf("E\n");
}
else
{
    printf("E");
}
}
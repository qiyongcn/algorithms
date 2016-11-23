#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define C   100000

int * insertSort(int * test)
{
     long i,j;
     int key;
     
     for (j=2; j<C; j++)
     {
         key = test[j];
         i = j-1;
         while ((i>0)&&(test[i]>key))
         {
               test[i+1]=test[i];
               i=i-1;
         }
         test[i+1]=key;
     }
     return &test[0];
}



int main()
{ 
int *test;

time_t timeStart, timeEnd;  
timeStart = clock();
test=(int *)malloc(sizeof(int)*C);
long a;
for(a=0; a<C; a++)
{
test[a]=C-a;
//printf("%d \t", test[a]);
}
printf("%d \t", test[1]);
test = insertSort(test);
printf("%d \t", test[1]);

timeEnd = clock();
printf ("cost is : %f \n", difftime(timeEnd,timeStart) );  
system("pause");
return 0;
}


#include<stdio.h>
#include<pthread.h>
#include<unistd.h>
#include<stdlib.h>
void *runner();
void main()
{
    pthread_t tid;//thread id
    int ret;//to store the return value
    ret=pthread_create(&tid,NULL,runner,0);//thread creation
    if(ret==-1)
    {
        printf("\n thread not created");
        exit(1);
    }
    pthread_join(tid,0);
    
}
void *runner()
{
    int m=5;//spaces before the *
    int i,j;//loop counters
    for(i=1;i<=11;i++)
    {
        if(i!=6)//when the iteration hasn't reached the middle of the pattern
        {
            for(j=1;j<=m;j++)
            printf("  ");
            printf("* ");
        }
        else//outer loop has reached the middle of the pattern
        {
            for(j=1;j<=11;j++)//printing the horizontal line
            printf("* ");
        }
        sleep(1);
        
        printf("\n");
    }
}
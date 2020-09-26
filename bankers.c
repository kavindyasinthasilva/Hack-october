#include <stdio.h>
void main()
{
    int max[10][3],n,alloc[10][3],avail[3],need[10][3],i,j,isSafe = 1,finish[10]={0};
    int work[3] ;
    printf("Enter number of process:\n");
    scanf("%d",&n);
    printf("Enter max resources");
    for(i=0;i<n;i++)
    {
        printf("P%d:",i+1);
        for(j=0;j<3;j++)
        {
            scanf("%d",&max[i][j]);

        }


    }
    printf("Enter allocation of resources");
    for(i=0;i<n;i++)
    {
        printf("P%d:",i+1);
        for(j=0;j<3;j++)
        {
            scanf("%d",&alloc[i][j]);

        }

    }
    printf("Enter available resources: \n");
    for(i=0;i<3;i++)
    {
        scanf("%d",&avail[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<3;j++)
        {
            need[i][j] = max[i][j] - alloc[i][j];
        }
    }
    for(i=0;i<3;i++)
    {
        work[i] = avail[i];
    }
    for(i=0;i<n;i++)
    {
        if(!finish[i])
        {
                
        }
    }






}
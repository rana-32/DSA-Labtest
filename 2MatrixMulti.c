#include<stdio.h>

int main()
{

    int r1  , r2 , c1 , c2 ;
    scanf("%d%d%d%d",&r1,&r2,&c1,&c2);


    if (c1!=r2)
    {

        printf("Multiplecation not possible");
    }

    int a[r1][c1] , b[r2][c2] , c[r1][c2];

    //matrix a input
    for (int i = 0 ; i< r1 ; i++)
    {

        for (int j = 0 ; j < c1 ; j++)
        {
          printf("a[%d][%d]= ", i , j);
            scanf("%d" , &a[i][j]);
        }
    }

       //matrix b input
    for (int i = 0 ; i< r2 ; i++)
    {

        for (int j = 0 ; j < c2 ; j++)
        {
             printf("b[%d][%d]= ", i , j);

          scanf("%d" , &b[i][j]);
        }
    }

    //matrix (c) initilazation with 0
    for (int i = 0 ; i< r1 ; i++)
    {

        for (int j = 0 ; j < c2 ; j++)
        {

          c[i][j]=0;
        }
    }

    //c matrix gun

        for (int i = 0 ; i< r1 ; i++)
    {

        for (int j = 0 ; j < c2 ; j++)
        {

         for (int k = 0 ; k<c1 ; k++)
         {

             c[i][j]+=a[i][k] * b[k][j];
         }
        }
    }


    printf("Enter result matrix is :\n");


        for (int i = 0 ; i< r1 ; i++)
    {

        for (int j = 0 ; j < c2 ; j++)
        {

          printf("%d ",c[i][j]);
        }
        printf("\n");
    }



}

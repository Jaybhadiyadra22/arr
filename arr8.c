#include<stdio.h>
int main()
{
 	int i, j, rows, columns, a[10][10], Sum = 0;
  
 	printf("\n Enter Number of rows and columns : ");
 	scanf("%d %d", &i, &j);
 
 	printf("\nEnter the Matrix Elements \n");
 	for(rows = 0; rows < i; rows++)
  	{
   		for(columns = 0;columns < j;columns++)
    	{
      		scanf("%d", &a[rows][columns]);
    	}
  	}
 	for(rows = 0; rows < i; rows++)
  	{
  		for(columns = 0;columns < j; columns++)
  		{
  			if(rows + columns == ((i + 1) - 2))
  			       Sum = Sum + a[rows][columns];
		}
  	}
 	printf("\n The Sum of Opposite Diagonal Elements of a Matrix =  %d", Sum );
}


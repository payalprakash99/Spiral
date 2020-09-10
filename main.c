#include<stdio.h>
#include<stdlib.h>
void print(int n,int m,int x,int y,int a[100][100])
{
    if(x>=n || y>=m)
    {
    return;
    }
	for (int t= x; t < m; t++) 
        { 
            printf("%d ",a[x][t]);
        }
    for (int t = x + 1; t < n; t++) 
	    {
	        printf("%d ",a[t][m - 1]);
	    } 
	if ((n - 1) != x) 
    	{
    	    for (int t = m - 2; t >= y; t--) 
		    {
		        printf("%d ",a[n - 1][t]);
    		}
    	}
	if ((m - 1) != y) 
	    {
	        for (int t = n - 2; t > x; t--) 
	    	{
		    printf("%d ",a[t][y]); 
	    	}
    	}
    print(n-1,m-1, x+1, y+1,a); 
    
}
int main()
{
    int a[100][100],i,j,m,n,b[100][100];
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
       
    }
	print(n, m,0, 0,a); 
    printf("\n");
 
}

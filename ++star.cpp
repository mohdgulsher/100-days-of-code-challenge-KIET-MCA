#include <stdio.h>
 int main()
{
	int i,j,n=7,m=7;
	for(i=1;i<=n;i++){
			
		
		for(j=1;j<=m;j++){
//				if(i==n-3)
//			{
//				
//			for(j=1;j<=m;j++){
//		
//				printf("*");
//				printf(" ");
//		}
//			}
	
			if(j>=n && j<=n||i==n-3){			
				printf("*");
				
			}
		
			else
			printf(" ");
			
		}
		
		printf("\n");
	}
		return 0;
	}

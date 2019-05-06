#include<stdio.h>
	
	int row,col,r,g,b,Rr,Rg,Rb,y;

	
	int main(){

		scanf("%d%d",&col,&row);
		printf("%d %d\n",col,row);
		for(int i=0;i<row;i++){
			if (col%4!=0){
				 y=4-(col%4);
				for(int t=1;t<=col+y;t++){
					scanf("%d%d%d",&r,&g,&b);
					if (t<=col){
						Rr=255-r;
						Rg=255-g;
						Rb=255-b;
                  				printf("%d %d %d \n",Rr,Rg,Rb);
					}else{
 						printf("0\n0\n0\n");
					}
				}
			}else{
				for(int t=1;t<=col+y;t++){
					scanf("%d%d%d",&r,&g,&b);
			
					Rr=255-r;
					Rg=255-g;
					Rb=255-b;
                  			printf("%d %d %d \n",Rr,Rg,Rb);
				}
			}
		}
}
				

						
                

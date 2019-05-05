/* E/15/010
   Programme for electricity bill calculation
   p-
*/


#include <stdio.h>
int main(){ 
      double x;
      int p;
      	   			
    
    printf("enter the monthly consumption");
    scanf("%d",&p);
    
  

    if (p<0){
	printf("-1\n");
    }else{
     
    if (p<=60){
        if (p<=30){
		x=p*2.50+ 30;
	}else{ 
		x=30*2.50+(p-30)*4.85;
	}
    }else {
	if (p<=90) {  
          x=60*7.85+(p-60)*10+90;
	}else if (p<=120){
          x=60*7.85+30*10+(p-90)*27.75+480;
	}else if (p<=180){
         x=60*7.85+30*10+30*27.75+(p-120)*32+480;
	}else{
	 x=60*7.85+30*10+30*27.75+60*32+(p-180)*45+540;
	}
    }

    printf("%.2f\n",x);
  return 0;

}
}


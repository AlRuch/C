#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define RESET    	0
#define BRIGHT 		1

#define BLACK 		0
#define RED		1
#define GREEN		2
#define YELLOW		3
#define BLUE		4
#define MAGENTA		5
#define CYAN		6
#define	WHITE		7

void textcolor(int attr, int fg, int bg);

void textcolor(int attr, int fg, int bg)
{	char command[13];

	/* Command is the control command to the terminal */

	/* textcolor(BRIGHT,BLACK,WHITE) will have characters printed in
	black in white background */
	sprintf(command, "%c[%d;%d;%dm", 0x1B, attr, fg + 30, bg + 40);
	printf("%s", command);
}





int main(int argc, char **argv){
 //.............................................................................................................................................................................................................................................................................................................................................................................................................................dddddddddddd............................................................................hhhhhhhhhhhhh.......................................................................................................................................................
int p,q;
    textcolor(RESET,WHITE,BLACK);
    if(argc==4){

       int p,q;
	if(!strcmp(argv[2],"black")){//identify the colors
                    p=9;
                    }else if(!strcmp(argv[2],"red")){
		    p=1;
	            }else if(!strcmp(argv[2],"green")){
		    p=2;
     		    }else if(!strcmp(argv[2],"yellow")){
		    p=3;
		    }else if(!strcmp(argv[2],"blue")){
		    p=4;
		    }else if(!strcmp(argv[2],"magenta")){
		    p=5;
		    }else if(!strcmp(argv[2],"cyan")){
		    p=6;
		    }else if(!strcmp(argv[2],"white")){
		    p=7;
		    }else{
		   printf("background color is not available\n");
					exit(0);
		    }
                  if(!strcmp(argv[3],"black")){
		    q=9;
		    }else if(!strcmp(argv[3],"red")){
		    q=1;
	            }else if(!strcmp(argv[3],"green")){
		    q=2;
     		    }else if(!strcmp(argv[3],"yellow")){
		    q=3;
		    }else if(!strcmp(argv[3],"blue")){
		    q=4;
		    }else if(!strcmp(argv[3],"magenta")){
		    q=5;
		    }else if(!strcmp(argv[3],"cyan")){
		    q=6;
		    }else if(!strcmp(argv[3],"white")){
		    q=7;}
		    else{
		    printf("foreground color is not available \n");
			exit(0);
                    }






	if (!strcmp(argv[1],"checker")){//identify the checker mode



    for(int c=0;c<8;c++){
       if(c%2==0) {
        for(int b=0;b<8;b++){
            for(int a=0;a<8;a++){
                if(a%2==0){
                    textcolor(BRIGHT,p,q);
                    printf("    ");
                }else{
                    textcolor(BRIGHT,q,p);
                    printf("    ");}

            }printf("\n");
        }
        }else{
            for(int b=0;b<8;b++){
                for(int a=0;a<8;a++){
                    if(a%2==0){
                        textcolor(BRIGHT,q,p);
                        printf("    ");
                    }else{
                        textcolor(BRIGHT,p,q);
                        printf("    ");}

            }   printf("\n");
textcolor(RESET,WHITE,BLACK);
        }
}
   }
 }else if(!strcmp(argv[1],"donut")){//identify the donut mode

   int d;

    int r,t;


scanf("%d",&d);


   for(int y=0;y<d;y++){
          for(int x=0;x<d;x++)  {
                int r= ((x*x)+(y*y)-(d*x)-(d*y)+((d*d))/4);
                int t= ((x*x)+(y*y)-(d*x)-(d*y)+((d*d))*7/16);

                   if((r>0)&(t>0)){
			textcolor(BRIGHT,q,p);
                        printf(" ");
                    }else if((r<=0)&(t>=0)){
			textcolor(BRIGHT,p,q);
                        printf(" ");
                    }else if((r<0)&(t<0)){
			textcolor(BRIGHT,q,p);
                        printf(" ");
                    }


}

printf("\n");
          }







 }else{
 printf("Requested figure is not available \n");






 }




    textcolor(RESET, WHITE, BLACK);
	return 0;
  }else if(argc<4){
  printf("Not enough arguments \n");
  }else{
  printf("Too many arguments \n");}
  }



//..............................................................................................................................................................................................................................................................................................................................................................................................................................................






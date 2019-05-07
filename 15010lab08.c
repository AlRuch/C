#include<stdio.h>
#include<stdlib.h>
#include<string.h>




int main(int argc,char** argv){
	char wrd[100];
	char nl[2];
	int x=0;
	int sl=0;
	int wdth=0;
	if(argc<3){
		printf("Usage: ./prog <width> <input-file>\n");
	}else{
		//making the objective file and open the outer file
		FILE *fin=fopen(argv[2],"r");
		int wdth=atoi(argv[1]);
		while(fscanf(fin,"%s",wrd)!=EOF){//checking the end of the file and getting the words
					
			fscanf(fin,"%c",nl);//getting characters	
			sl=strlen(wrd); //calculating string length	
			int k=sl+x;   //count through the line of a paragraph
			if(k<=wdth){//printing words with space
				printf("%s ",wrd);
				x=x+sl+1;
			}else{
				printf("\n");
				printf("%s ",wrd);
				x=sl+1;
			}
			if(nl[0]=='\n'){
				printf("\n");
				x=0;
			}
		   }
	}
}

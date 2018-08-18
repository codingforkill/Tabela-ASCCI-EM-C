#include <stdio.h>

int main(){
	int cl, li, i,flag;
	char letter;
	flag = 0;
	for(li =0; li<51; li++){
		i = 0;
		i = i+flag;
		for(cl = 0;cl<5;cl++){				
		letter = i;
		if ( i == 7){ 
			printf("|%03i Bell                |",i);
		}	
		else if ( i == 8){
			printf("|%03i Backspace           |",i);

		}
		else if( i == 9){
			printf("|%03i HorizontalTab       |",i);

		}
		else if( i == 10){
			printf("|%03i Linefeed            |",i);

		}
		else if ( i == 13){
			printf("|%03i CarriageReturn      |",i);

		}
		else{
		
		printf("|%03i %20c|",i,letter);
	}
				
		i++;
		
		}
		printf("\n");

		flag = i;
		
	}
	return 0;
	}
	



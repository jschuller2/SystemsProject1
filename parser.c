#include <stdio.h> 
#include <stdlib.h> 

int main(int argc, char** argv){

	printf("starting .... \n"); 
	char buffer[1]; 
	read(0,buffer,1);  
	printf("%c\n", buffer[0]); 
	return 0; 
}

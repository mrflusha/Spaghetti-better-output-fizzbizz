#include <stdio.h>

char main (){
unsigned char array[100], j[2],i = 1;

for (i; i<=100;i++){
		array[i] = i;
		j[0] = i % 3;
		j[1] = i % 5;
/*
Spaghetti better
*/
		if (j[0] == 0 && j[1] == 0){		
		printf("Fizz Buzz\n");
		}else if (j[0] == 0){
		printf("Fizz\n");
		}else if (j[1] == 0){
		printf("Buzz\n");
		
		}else{
		printf("%d\n", array[i]);
}

}


return 0;
}

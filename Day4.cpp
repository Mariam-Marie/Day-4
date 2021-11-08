#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <time.h>
int main() {
	int M, N, X, i, j, random, search=0;
	printf("Enter the number of rows: ");
	scanf("%d", &M);
	printf("Enter the number of columns: ");
	scanf("%d", &N);
	//2 inputs were taken from the user to make the dimensions of the matrix
	int row=M, col=N;
	srand(time(0));
	int num[i][j];
    for( i = 0; i < M; i++) {
  		for( j = 0; j < N; j++) {
  			random=rand()%50;
        	num[i][j] = random;
        	printf("%d \t", num[i][j]);
    	}
    	printf("\n");
	}
	//the value of each item of the array was randomized, using the dimensions M & N
	printf("\n");
	printf("Enter the number 'X' that you want to search for: ");
	scanf("%d", &X);
	//A value was taken from the user to check if it was present in the array
	for(i=0; i<M; i++){
		for(j=0; j<N; j++) {
    		if(num[i][j] == X)
        		search=1;
        }
	}
	//If it was found the variable "search"'s value changed to 1
	if(search==1)
		printf("Found the number %d in the array", X);
	if(search != 1)
		printf("Didn't find the number %d in the array", X);
	//if so it appears that it was found, if not it doesn't
	return 0;
}

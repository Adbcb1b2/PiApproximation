#include <stdio.h>
#include <stdlib.h>

void calcPi(int n, double * resultPi){
    
    *resultPi = 0.0;
    
    
    for(int i = 0; i < n; i++){
        // To alternate the sign, check if iteration is odd or even
        if(i % 2 == 0){
            *resultPi += 1.0/(2 * i + 1);
        }else{
            *resultPi -= 1.0/(2 * i + 1);
        }
    }
    
    // Multiply by 4 to get estimation of pi
    *resultPi = *resultPi * 4;
    
    // Return result
    printf("result = %lf\n", *resultPi);
}


void main(int argc, char** argv){

    // Initialise pi
    double pi;
    
 	// Check there are 2 command line arguments (./a.out and number of terms)
 	if(argc < 2){
 		printf("Error: No amount of terms entered\n");
 		exit(-1);
 	}
    // n is command line argument
    int n = atoi(argv[1]);
    
    // Check a positive number of terms has been entered
    if(n < 1){
        printf("Number of terms must be positive\n");
        exit(-1);
    }
    
    calcPi(n, &pi);
    
    printf("%lf\n", pi);
}


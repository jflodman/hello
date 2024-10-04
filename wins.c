/**
 * Author: Joseph Flodman
 *         jflodman3@huskers.unl.edu
 * Date: 09/9/2024
 *
 *
 *
 */
#include <stdlib.h>
#include <stdio.h>
#include<stdbool.h>
#include<math.h>

int main(int argc, char **argv){


if(argc != 2){

    printf("ERROR: provide two command line arguments(points for, points againts)\n");
    exit[1];
}

int n = atoi(argv[1]);

int aPoints = 0;
int bPoints = 0;
int round = 1;


while(n != 1){
    if(n % 2 == 0){
        n = n / 2;
        aPoints ++;
        printf("Round  %d:  %n... even, Player A scores!\n");
    }else {
        //n is odd so do somehting else
        n = 3 * n + 1
        bpoints ++;
    }

}



return 0;

}


//
//  main.c
//  Assignment 1: FizzBuzz
//
//  Created by Dayson Dong on 2018-12-06.
//  Copyright © 2018 Dayson Dong. All rights reserved.
//

#include <stdio.h>

/*
 Write a program that prints the numbers from 1 to 100. 
 For the multiples of 3, print "Fizz" instead of the number 
 and for the multiples of 5, print "Buzz" instead of the number.
 For numbers which are multiples of both 3 and 5 print "FizzBuzz"
 */
int main(int argc, const char * argv[]) {
    int num;
    while(num < 100){
        
        num++;
        if(num % 3 == 0){
            
            if (num % 5 == 0) {
                
                printf("FizzBuzz\n");
                
                continue;
                
            } else {
                
                printf("Fizz\n");
                
                continue;
                
            }
            
        } else if (num % 5 == 0) {
            
            printf("Buzz\n");
            
            continue;
            
        } else {
            
            printf("%d\n",num);
            
            
        }
        
        
        
        
    }
    
    return 0;
}

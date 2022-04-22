//
//  main.c
//  my_first_c_proj
//
//  Created by Shivam Gupta on 05/04/22.
//
#include<stdio.h>

int main(){
    int celcius, farenheit;
    printf("Enter a Farenheit Value: ");
    scanf("%d", &farenheit);
    
    celcius = (farenheit-32)*5/9;
    
    printf("Celcius : %d ",celcius);
    
    
}

//
//  main.c
//  Project2
//
//  Created by Shivam Gupta on 12/04/22.
//

#include <stdio.h>

int main(){
    int a,b,c,d,e,f, result;
    printf("Enter 4 value: ");
    scanf(" %d%d%d%d", &a,&b,&c,&d);
    
    e = (a > b)? a:b;
    
    f = (c > d)? c:d;
    
    result = (e>f)? e:f;
    
    printf("result: %d \n", result);
}

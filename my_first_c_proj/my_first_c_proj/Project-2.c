//
//  Project-2.c
//  my_first_c_proj
//
//  Created by Shivam Gupta on 07/04/22.
//

#include "Project-2.h"

int main()
{
    int a,b,c, max;
    printf("Enter Three Number : ");
    scanf("%d%d%d", &a, &b, &c);
    
    max = a;
    
    if(b>a){
        max = b;
    }
    if(c>b){
        max = c;
    }
    printf("max: %d", max);
}

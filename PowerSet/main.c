//
//  main.c
//  PowerSet
//
//  Created by hgl on 2018/2/8.
//  Copyright © 2018年 hgl. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
 
    char c[3]={'1','2','3'};
    char c1[3]={'\0'};
    void powerSet(int i,int n,char c[],char c1[]);
    powerSet(0, 2, c, c1);
    return 0;
}

void powerSet(int i,int n,char c[],char c1[]){
    if(i>n){
        int j;
        printf("[\t");
        for(j=0;j<=n;j++){
            if(c1[j]!='\0'){
                printf("%c\t",c1[j]);
            }
        }
        printf("]\n");
    }else{
        c1[i]=c[i];
        powerSet(i+1, n, c, c1);
        c1[i]='\0';
        powerSet(i+1, n, c, c1);
    }
}

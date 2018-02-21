//
//  main.c
//  PowerSet
//
//  Created by hgl on 2018/2/8.
//  Copyright © 2018年 hgl. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
 
    char c[3]={'1','2','3'};//集合A
    char c1[3]={'\0'};//集合A的幂集的子集
    void powerSet(int i,int n,char c[],char c1[]);//求集合的幂集的函数
    powerSet(0, 2, c, c1);
    return 0;
}

/*
  求集合的幂集的函数
 */
void powerSet(int i,int n,char c[],char c1[]){
    if(i>n){//I从0开始，当i大于2时，说明所有的元素都已经筛选过了,结果已经出来了，可以输出了
        int j;
        printf("[\t");
        for(j=0;j<=n;j++){
            if(c1[j]!='\0'){
                printf("%c\t",c1[j]);
            }
        }
        printf("]\n");
    }else{
        c1[i]=c[i];//取第i个元素
        powerSet(i+1, n, c, c1);
        c1[i]='\0';//把第i个位置的元素的值置为'\0',相当于舍弃第i个元素
        powerSet(i+1, n, c, c1);
    }
}

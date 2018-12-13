//
// Created by 26794 on 2018/12/13.
//
#include <stdio.h>
#include <stdlib.h>
void ShellSort(int k[],int n){
    int i,j,temp;
    int gap=n;
    do{
        gap=gap/3+1;
        for(i=gap;i<n;i++){

            if(k[i]<k[i-gap])
                temp=k[i];
            for(j=i-gap;j>temp;j-=gap){
                k[j+gap]=k[j];
            }
            k[j+gap]=temp;
        }
    }while(gap>1);

}

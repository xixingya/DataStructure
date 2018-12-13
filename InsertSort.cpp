//
// Created by 26794 on 2018/12/13.
//
#include <stdio.h>
#include <stdlib.h>
void InsertSort(int k[],int n){
    int i,j,temp;
    for(i=1;i<n;i++){
        if(k[i]<k[i-1]){
            temp=k[i];
            for(j=i-1;k[j]>temp;j--){
                k[j+1]=k[j];
            }
            k[j+1]=temp;
        }
    }
}
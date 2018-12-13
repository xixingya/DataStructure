//
// Created by xixingya on 2018/12/13.
//
#include <stdio.h>
#include <stdlib.h>
typedef char TElemType;
typedef struct BiTNode{
    TElemType data;
    BiTNode *left;
    BiTNode *right;
}BiTNode,*BiTree;
void createBiTree(BiTree &T){
    char c;
    scanf("%c",&c);
    if(c=='0') T=NULL;
    else{
        T=(BiTree)malloc(sizeof(BiTNode));
        T->data=c;
        createBiTree(T->left);
        createBiTree(T->right);


    }
}
void visit(char c,int level ){
    printf("%c is in %d",c,level);
}
void PreOrderTraverse(BiTree T,int level){
    if(T){
        visit(T->data,level);
        PreOrderTraverse(T->left,level+1);
        PreOrderTraverse(T->right,level+1);
    }

}
int main(){
    int level=1;
    BiTree T=NULL;
    createBiTree(T);
    PreOrderTraverse(T,level);
    return 0;
}
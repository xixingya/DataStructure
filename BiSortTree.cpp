//
// Created by 26794 on 2018/12/13.
//
#include <stdio.h>
#include <stdlib.h>
#define OK 1
#define ERROR 0
typedef bool Status;
typedef char TElemType;
typedef struct BiTNode{
    TElemType data;
    BiTNode *left;
    BiTNode *right;
}BiTNode,*BiTree;
Status SearchBST(BiTree T,TElemType key,BiTree f,BiTree &p){
    if(!T){
        p=f;
        return false;
    }
    else if(T->data==key){
        p=T;return true;
    }
    else if(key>T->data) return SearchBST(T->right,key,T,p);
    else return SearchBST(T->left,key,T,p);
}
Status InsertBST(BiTree *T,int key){
    BiTree p,s;
    if(!SearchBST(*T,key,NULL,p)) {
        s = (BiTree) malloc(sizeof(BiTNode));
        s->data = key;
        s->left = NULL;
        s->right = NULL;

        if (!p) *T = s;
        else if (key < p->data)
            p->left = s;
        else p->right = s;
        return true;
    }
    else return false;
}
Status Delete(BiTree &T){
    //未实现
}
Status DeleteBST(BiTree &T,int key){
    if(!T){
        return false;
    }
    if(T->data==key)
        Delete(T);
    else if(T->data>key)
        return DeleteBST(T->left,key);
    else
        return DeleteBST(T->right,key);

}
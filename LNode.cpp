//
// Created by 26794 on 2018/12/13.
//
#include <stdio.h>
#include <stdlib.h>
#define OK 1
#define ERROR 0
typedef int ElemType;
typedef int Status;
typedef struct LNode{
    ElemType data;
    LNode *next;

}LNode,*LinkList;
Status GetElem(LinkList L,int i,ElemType  &e){
    int j=0;
    LNode *p=L;
    while(p&&j<i){
        p=p->next;
        j++;
    }
    while(!p||j>i) return ERROR;
    e=p->data;
    return OK;
}
Status ListInsert(LinkList &L,int i,ElemType &e){
    LNode *p,*s;
    p=L;
    int j=0;
    while(p&&j<i){
        p=p->next;
        j++;
    }
    if(!p||j>i) return  ERROR;
    s=(LinkList)malloc(sizeof(LNode));
    s->data=e;
    s->next=p->next;
    p->next=s;
    return OK;
}
Status ListDelete(LinkList &L,int i,ElemType &e){
    LNode *p, *q;
    p=L;
    int j=0;
    while(p&&j<i-1){
        p=p->next;
        j++;
    }
    if(!p||j>i-1) return ERROR;
    q=p->next;
    p->next=q->next;
    e=q->data;
    free(q);
    return OK;
}
void createList(LinkList &L,int n){
    LinkList p;
    int i=0;
    L=(LinkList)malloc(sizeof(LNode));
    L->next=NULL;
    for(i=n;i>0;i--){
        p=(LinkList)malloc(sizeof(LNode));
        scanf("%d",&(p->data));
        p->next=L->next;
        L->next=p;

    }

}
void createListTail(LinkList &L,int n){
    LinkList p,r;
    int i=0;
    L=(LinkList)malloc(sizeof(LNode));
    r=L;//使两个指针同时指向第一个，因为该表刚刚创建，只有一个节点，所以第一个节点就是最后一个
    for(i=0;i<n;i++){
        p=(LinkList)malloc(sizeof(LNode));
        scanf("%d",&(p->data));
        r->next=p;
        r=p;
    }
    r->next=NULL;
}
Status clearList(LinkList L){
    LinkList p,q;
    while(p){
        q=p->next;
        free(p);
        p=q;
    }
    return OK;
}
int main(){
    LinkList L;
    createList(L,5);
    ElemType  e;
    GetElem(L,3,e);
    printf("%d",e);
}


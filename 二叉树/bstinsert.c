/*
 * 作者：xulinjie
 * 描述：建立一棵二叉排序树
 * 思想：左小右大思想
 */
#include <stdio.h>
#include <stdlib.h>
typedef char TElemType;
typedef struct BiTNode{
    TElemType data;
    struct BiTNode *lchild,*rchild;
}BiTNode,BiTree;

void BstInsert(BiTree *biTree,int key){
    if (biTree == NULL){
        biTree = (BiTree *)malloc(sizeof(BiTree));
        biTree->data = key;
        biTree->lchild = NULL;
        biTree->rchild = NULL;
    } else if (biTree->data > key){         //左小
        BstInsert(biTree->lchild,key);
    } else{                                 //右大
        BstInsert(biTree->rchild,key);
    }
}
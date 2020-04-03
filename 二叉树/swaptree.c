/*
 * 作者：xulinjie
 * 描述：交换二叉树中所有结点的左右子树
 */
#include <stdio.h>
typedef char TElemType;
typedef struct BiTNode{
    TElemType data;
    struct BiTNode *lchild,*rchild;
}BiTNode,BiTree;

void SwapTree(BiTree *biTree){
    BiTree *p;
    //判空
    if (biTree==NULL){
        return;
    }
    SwapTree(biTree->lchild);
    SwapTree(biTree->rchild);
    //左右子树交换
    p = biTree->lchild;
    biTree->lchild = biTree->rchild;
    biTree->rchild = p;
}

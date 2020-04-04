/*
 * 作者：xulinjie
 * 描述：统计二叉树中度为0的结点
 * 思想：度为0即叶子结点
 */
#include <stdio.h>
typedef char TElemType;
typedef struct BiTNode{
    TElemType data;
    struct BiTNode *lchild,*rchild;
}BiTNode,BiTree;

int NumsDegree_0(BiTree *biTree){
    if(biTree){
        if (biTree->lchild==NULL && biTree->rchild==NULL){
            return 1;
        } else{         //前往下一层
            return NumsDegree_0(biTree->lchild)+NumsDegree_0(biTree->rchild);
        }
    } else{
        return 0;
    }
}


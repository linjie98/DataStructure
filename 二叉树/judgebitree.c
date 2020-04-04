/*
 * 作者：xulinjie
 * 描述：判断两棵二叉树是否相同
 * 思想：递归
 */
#include <stdio.h>
#include <stdlib.h>
typedef char TElemType;
typedef struct BiTNode{
    TElemType data;
    struct BiTNode *lchild,*rchild;
}BiTNode,BiTree;

int JudgeBitree(BiTree *biTree1,BiTree *biTree2){
    if (biTree1 == NULL && biTree2 == NULL){            //两棵树都为空，则相同
        return 1;
    } else if (biTree1 == NULL || biTree2 == NULL ||biTree1->data != biTree2->data){    //一棵为空一棵不为空，不同。 数据不同，不同
        return 0;
    } else{
        return (JudgeBitree(biTree1->lchild,biTree2->lchild)*JudgeBitree(biTree1->rchild,biTree2->rchild));//如果不同，则0*1或0*0或1*0
    }
}
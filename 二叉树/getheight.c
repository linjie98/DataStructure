/*
 * 作者：xulinjie
 * 描述：统计树的高度
 * 注意：1、树空高度为0   //2、只有根高度为1
 */
#include <stdio.h>
#include <stdlib.h>
typedef char TElemType;
typedef struct BiTNode{
    TElemType data;
    struct BiTNode *lchild,*rchild;
}BiTNode,BiTree;

int GetHeight(BiTree *biTree){

    if (biTree == NULL){                                            //树空
        return 0;
    } else if (biTree->lchild == NULL && biTree->rchild == NULL){   //只有根
        return 1;
    } else{                                                         //不是上两种
        int hl = 0;
        int hr = 0;
        hl = GetHeight(biTree->lchild);
        hr = GetHeight(biTree->rchild);
        if (hl>hr){
            return hl+1;
        } else{
            return hr+1;
        }
    }
}
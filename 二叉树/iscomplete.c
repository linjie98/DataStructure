/*
 * 作者：xulinjie
 * 描述：判断给定的二叉树是否为完全二叉树
 * 思想：利用层次遍历思想
 * 思路：采用层次遍历思想，将所有结点加入队列（包括空结点）。遇空结点时，查看其后是否有非空结点，如果有，则二叉树不是完全二叉树
 */
#include <stdio.h>

/**
 * 二叉树存储结构
 */
typedef char TElemType;
typedef struct BiTNode{
    TElemType data;
    struct BiTNode *lchild,*rchild;
}BiTNode,BiTree;

/**
 * 队列存储结构
 */
typedef int QElemType;
typedef struct{
    QElemType *base;
    int front;
    int rear;
}SqQueue;


void InitQueue(SqQueue Q){}                 //初始化队列
void EnQueue(SqQueue Q,BiTree *biTree){}    //入队
void DeQueue(SqQueue Q,BiTree *p){}         //出队
int IsEmpty(){}                             //判队列是否为空

int IsComplete(BiTree *biTree){
    BiTree *p;
    SqQueue Q;
    InitQueue(Q);
    if(!biTree){            //空树为完全二叉树
        return 1;
    }
    EnQueue(Q,biTree);      //将根结点入队
    while(!IsEmpty()){
        DeQueue(Q,p);       //出队
        if(p){              //出队结点非空，将其左右子树入队（注意：空结点也入队）
            EnQueue(Q,p->lchild);
            EnQueue(Q,p->rchild);
        } else{             //出队结点为空，检查其后是否有非空结点，若有，则不是完全二叉树
            while (!IsEmpty()){
                DeQueue(Q,p);
                if(p){      //结点非空，不是完全二叉树
                    return 0;
                }
            }
        }
    }
    return 1;
}

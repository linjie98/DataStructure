/*
 * 作者：xulinjie
 * 描述：非递归先序遍历
 * 思想：利用栈的思想
 * 思路：1、遇到一个结点，访问它，然后把它压栈，并去遍历它的左子树
 * 思路：2、当左子树遍历结束后，从栈顶弹出该结点，并将其指向右儿子，继续1步骤
 * 思路：3、当所有结点访问完成，即最后访问的结点为空且栈空时，停止。
 */
#include <stdio.h>
typedef char TElemType;
typedef struct BiTNode{
    TElemType data;
    struct BiTNode *lchild,*rchild;
}BiTNode,BiTree;

int  isEmpty(){}            //判断栈是否为空
void visit(BiTree *node){}  //输出当前结点的值
void push(BiTree *node){}   //压栈
BiTree *pop(){}             //出栈

void PreOrder(BiTree *biTree){
    BiTree * node = biTree;
    while (node || (!isEmpty())){
        while (node){
            visit(node);
            push(node);
            node = node->lchild;
        }
        if(!isEmpty()){
            node = pop();
            node = node->rchild;
        }
    }
}


/*
 * 作者：xulinjie
 * 描述：判断数据序列是否是小根堆
 */
#include <stdio.h>
void IsMinHeap(int A[], int n){
    //n为偶数，即有一个单分支结点
    if(n%2==0){
        //判断单分支结点
        if(A[n/2]>A[n]){
            printf("不是小根堆");
            return;
        }
        for (int i = n/2-1; i >= 1; --i) {
            if (A[i]>A[2*i] || A[i]>A[2*i+1]){
                printf("不是小根堆");
                return;
            }
        }
    }
    //n为奇数，即没有单分支结点
    else{
        for (int i = n/2; i >= 1; --i) {
            if (A[i]>A[2*i] || A[i]>A[2*i+1]){
                printf("不是小根堆");
                return;
            }
        }
    }
    printf("是小根堆");
}

int main() {
    int A[6] = {1,2,3,4,5,6};
    IsMinHeap(A,6);
    //第一趟结果：223685
    return 0;
}

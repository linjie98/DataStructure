/*
 * 作者：xulinjie
 * 描述：直接插入排序
 * 思想：在一个已经有序的序列中，插入数据，重新有序。
 * 注意：0号位空出（哨兵）
 */
#include <stdio.h>
int InsertSort(int A[],int n){
    int j = 0;
    //从2开始是因为认为第一个已有序
    for (int i = 2; i <=n; ++i) {
        if (A[i]<A[i-1]){
            //哨兵，A[0]不存元素
            A[0] = A[i];
            A[i] = A[i-1];
            for (j = i-2; A[0]<A[j] ; --j) {
                A[j+1] = A[j];
            }
            A[j+1] = A[0];
        }
    }
    for (int k = 1; k <=n; ++k) {
        printf("%d",A[k]);
    }
}


int main() {
    int A[6] = {0,2,5,6,8,2};
    InsertSort(A,5);
    //结果:22568
    return 0;
}

/*
 * 作者：xulinjie
 * 描述：希尔排序
 * 思想：类似于直接插入排序，但前后记录的增量是dk而不是1
 * 注意：A[0]作为暂存单元
 */
#include <stdio.h>

void ShellSort(int A[],int n){
    int i,j;                                //计数变量
    for (int dk = n/2; dk >= 1; dk=dk/2) {  //步长变化
        for (i = dk+1; i <= n ; ++i) {
            if (A[i]<A[i-dk]){              //需将A[i]插入到有序增量表中
                A[0] = A[i];                //暂存到A[0]中
                for (j = i-dk; j>0&&A[0]<A[j]; j-=dk) {
                    A[j+dk] = A[j];
                }
                A[j+dk] = A[0];
            }
        }
    }
    for (int k = 1; k <=n; ++k) {
        printf("%d",A[k]);
    }
}

int main() {
    int A[6] = {0,2,5,6,8,2};
    ShellSort(A,5);
    //结果：22568
    return 0;
}

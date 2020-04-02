/*
 * 作者：xulinjie
 * 描述：简单选择排序
 * 思想：每一趟在后面的n-i+1个中选出关键码最小的对象，作为有序序列的第i个记录
 * 注意：每一次都拿最小的插入即可，和直接插入排序的区别是直接插入排序是随机拿出一个去比较插入。
 */
#include <stdio.h>

void SelectSort(int A[],int n){
    int min = 0;//记录最小值数据下标变量
    int t;      //交换数据变量
    //n-1趟
    for (int i = 0; i < n-1; ++i) {
        min = i;                        //记录最小位置
        for (int j = i+1; j < n; ++j) { //在i~n-1中找到最小值元素
            if (A[min]>A[j]){           //更新最小元素位置
                min = j;
            }
        }
        if (min != i){                  //与第i个位置交换
          t = A[i];
          A[i] = A[min];
          A[min] = t;
        }
    }
    for (int k = 0; k < n; ++k) {
        printf("%d",A[k]);
    }
}

int main() {
    int A[6] = {0,2,5,3,8,4};
    SelectSort(A,6);
    //结果：023458
    return 0;
}

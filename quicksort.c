/*
 * 作者：xulinjie
 * 描述：快速排序
 * 思想：1、确定枢轴 2、右与枢轴比较 3、左与枢轴比较
 * 注意：需要多趟才能完成排序
 */
#include <stdio.h>

void partition(int A[], int low , int high , int n){
    //将当前表中第一个元素设为枢轴值，对表进行划分
    int pivot = A[low];
    while (low<high){
        //枢轴值比A[high]小，没问题，high--
        while (low<high&&A[high]>=pivot){
            --high;
        }
        //当枢轴值大于high时，将high位置的元素移动到左端
        A[low] = A[high];
        //同上
        while (low<high&&A[low]<=pivot){
            ++low;
        }
        A[high] = A[low];
    }
    //枢轴元素存放到最终位置
    A[low] = pivot;

    for (int i = 0; i < n; ++i) {
        printf("%d",A[i]);
    }
}

int main() {
    int A[6] = {3,2,5,6,8,2};
    partition(A,0,5,6);
    //第一趟结果：223685
    return 0;
}

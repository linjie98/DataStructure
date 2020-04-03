/*
 * 作者：xulinjie
 * 描述：2路归并排序
 * 思想：分治思想
 * 注意0：表A的两段，A[low..mid],A[mid+1..high]各自有序
 * 注意1：最后两个while，只有一个会执行
 * 注意2：B只是辅助数组，B有两段，分别比较，小的进A，之后会有一段多余，直接进A
 */
#include <stdio.h>
int B[6] = {0};
void MergeSort(int A[],int low, int mid,int high){
    int j,k,h;                                              //计数变量
    for (int i = low; i <=high; ++i) {                      //将A中所有元素赋值到辅助数组B中
        B[i] = A[i];
    }
    for (j = low,k = mid+1,h = j; j<=mid&&k<=high; ++h) {   //h是归并之后数组下标计数器
        if (B[j]<=B[k]){
            A[h] = B[j++];
        } else{
            A[h] = B[k++];
        }
    }
                                                            //若第一个表未检测完，赋值
    while (j<=mid){
        A[h++] = B[j++];
    }                                                       //若第二个表未检测完，赋值
    while (k<=high){
        A[h++] = B[k++];
    }

    for (int l = 0; l < 6; ++l) {
        printf("%d",A[l]);
    }
}

int main() {
    int A[6] = {3,4,5,1,2,7};
    MergeSort(A,0,2,5);
    //第一趟结果：123457
    return 0;
}

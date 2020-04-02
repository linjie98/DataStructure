/*
 * 作者：xulinjie
 * 描述：折半插入排序
 * 思想：折半插入(折半查找思想)。
 * 注意：相对于直接插入排序，改善了比较次数，不能改善移动次数
 */
#include <stdio.h>
void HalfSort(int A[],int n){
    int low,high,mid;
    int i,j;         //计数变量
    for (i = 2; i <= n; ++i) {
        A[0] = A[i]; //A[i]暂存到A[0]中
        low = 1;
        high = i-1;
        while (low <= high){
            mid = (low+high)/2;
            if (A[mid]<A[0]){      //查左半子表
                high = mid - 1;
            } else{
                low = mid + 1;     //查右半子表
            }
        }
        //统一后移，空出插入位置
        for (j = i-1; j>=high+1; --j){
            A[j+1] = A[j];
        }
        A[high+1] = A[0];
    }
    //结果递减
    for (int k = 1; k <= n; ++k) {
        printf("%d",A[k]);
    }
}

int main() {
    int A[6] = {0,2,5,6,8,2};
    HalfSort(A,5);
    //结果:86522
    return 0;
}

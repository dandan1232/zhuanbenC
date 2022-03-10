//
// @author: lindand  
// @date: 2022/1/28
// @description:输入10个数字并输出最大值
// 
//

#include<stdio.h>
int main()
{
    int a[10], i, max;
    printf("输入10个整数，用空隔隔开：\n");
    for(i=0; i<10; i++)
        scanf("%d", &a[i]);
    //打擂台法找最大
    max=a[0];  //先认为第一个数是最大的
    for(i=1; i<10; i++)  //其余所有数依次和擂主max比较，
        if(a[i]>max)      //只要发现有新的数比max大 ,
            max=a[i];       //max就更新。
    printf("max is %d\n", max);
    return 0;
}


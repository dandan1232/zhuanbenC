//
// @author: lindand
// @date: 2022/2/22
// @description:输入12回车34回车，得到结果12 \n 3
//
//

#include <stdio.h>

int main() {
    char a, b, c, d;
    scanf("%c%c", &a, &b);
    c = getchar();
    d = getchar();
    printf("%c%c%c%c\n", a, b, c, d);


//    int a = 1;
//    printf("%d,%d,%d,%d", a, ++a, a++, a);
//    return 0;
}

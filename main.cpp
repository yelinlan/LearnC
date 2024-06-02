/*
#include <stdio.h>
#include <string.h>

//常量
#define STATUS 1
#define ADD(x,y) x+y
//类型重定义
typedef int INT;
INT num =0;
extern int a;

//static 修饰全局变量 ，不能被外部链接到
static int c =0;

enum SEX {
    MALE,
    FEMALE
};

int main() {

    //编译时就创建。
    static int c =0;

    int r = ADD(3, 4);
    printf("%d\n",r);

    //八进制 ascii
    printf("%c\n",'\130');
    //十六进制 ascii
    printf("%c\n",'\x30');
    //基本数据类型
    printf("char:%llu byte\n", sizeof(char));
    printf("bool:%llu byte\n", sizeof(bool));
    printf("short:%llu byte\n", sizeof(short));
    printf("int:%llu byte\n", sizeof(int));
    printf("long:%llu byte\n", sizeof(long));
    printf("long long :%llu byte\n", sizeof(long long));
    printf("float:%llu byte\n", sizeof(float));
    printf("double:%llu byte\n", sizeof(double));
    //常量
    printf("constants %d\n", STATUS);
    //const
    const int b = 9;
    printf("constants %d\n", b);
    //enum 枚举常量
    printf("constants %d\n", MALE);

    //全局变量
    printf("%d\n", a);

    //字符串 隐藏有结束符 '\0'
    char str1[] = "abc";
    printf("string1 : %s\n",str1);
    printf("string1 len: %d\n",strlen(str1));
    char str2[] = {'a','b','c'};
    printf("string2 : %s\n",str2);
    printf("string2 len: %d\n",strlen(str2));

    //input
//    char str;
//    printf("input a string\n>>");
//    scanf("%c", &str);
//    printf("input string is %c\n", str);

    return 0;
}
*/

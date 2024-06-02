//
// Created by 夜林蓝 on 2024/4/3.
//

#include <cstdio>
#include <cerrno>
#include <cstring>

void seek();

void printlog();

void fgets() {
    char *read = "D:\\hello.txt";
    FILE *p = fopen(read, "r");
    if (p == NULL) {
        printf("%s\n", strerror(errno));
    }
    char str[50] = {0};
    char *res;
    while ((res = fgets(str, 50, p)) != NULL) {
        printf(res);
    }
    fclose(p);
    p = NULL;
    printf("\n");
}

void fputs() {
    char *read = "D:\\hello.txt";
    FILE *p = fopen(read, "w");
    if (p == NULL) {
        printf("%s\n", strerror(errno));
    }
    fputs("123456789", p);
    fclose(p);
    p = NULL;
}

void fgetc() {
    char *read = "D:\\hello.txt";
    FILE *p = fopen(read, "r");
    if (p == NULL) {
        printf("%s\n", strerror(errno));
    }
    int i;
    while ((i = fgetc(p)) != EOF) {
        printf("%c", i);
    }
    fclose(p);
    p = NULL;
}

void fputc() {
    char *read = "D:\\hello.txt";
    FILE *p = fopen(read, "w");
    if (p == NULL) {
        printf("%s\n", strerror(errno));
    }
    for (int i = 'a'; i <= 'z'; ++i) {
        fputc(i, p);
    }
    fclose(p);
    p = NULL;
}

void fprintf() {
    char *read = "D:\\hello.txt";
    FILE *p = fopen(read, "w");
    if (p == NULL) {
        printf("%s\n", strerror(errno));
        //perror("error"); 同上
    }
    for (int i = 'a'; i <= 'z'; ++i) {
        fprintf(p, "%s\t%c\t%d \n", "NO.", i, i);
    }
    fclose(p);
    p = NULL;
}

void fscanf() {
    char *read = "D:\\hello.txt";
    FILE *p = fopen(read, "r");
    if (p == NULL) {
        printf("%s\n", strerror(errno));
        //perror("error"); 同上
    }
    char *a;
    char b;
    int c;
    for (int i = 'a'; i <= 'z'; ++i) {
        fscanf(p, "%s\t%c\t%d", a, &b, &c);
        printf("%s%c%d\n", a, b, c);
    }

    fclose(p);
    p = NULL;
}

void print() {
    char *read = "D:\\hello.txt";
    FILE *p = fopen(read, "w");
    if (p == NULL) {
        printf("%s\n", strerror(errno));
        //perror("error"); 同上
    }
    for (int i = 'a'; i <= 'z'; ++i) {
        fprintf(p, "%s\t%c\t%d \n", "NO.", i, i);
    }
    fclose(p);
    p = NULL;
}

void fwrite() {
    char *a[3] = {"zhangsan", "lisi", "wangwu"};
    char *read = "D:\\hello.txt";
    FILE *p = fopen(read, "wb");
    if (p == NULL) {
        printf("%s\n", strerror(errno));
        //perror("error"); 同上
    }
    fwrite(&a, sizeof(char *), 3, p);
    fclose(p);
    p = NULL;
}

void fread() {
    char *a[3];
    char *read = "D:\\hello.txt";
    FILE *p = fopen(read, "rb");
    if (p == NULL) {
        printf("%s\n", strerror(errno));
        //perror("error"); 同上
    }
    fread(&a, sizeof(char *), 3, p);
    fclose(p);
    p = NULL;
    for (int i = 0; i < 3; ++i) {
        printf("%s \n", a[i]);
    }
}

void sprintf() {
    char *a[3] = {"zhangsan", "lisi", "wangwu"};
    char p[100] = {0};
    sprintf(p, "%s\t%s\t%s", a[0], a[1], a[2]);
    char r[30] = {0};
    char s[30] = {0};
    char t[30] = {0};
    sscanf(p, "%s\t%s\t%s", r, s, t);
    printf(r);
    printf(s);
    printf(t);
}

int main() {
11    return 0;
}

void printlog() {
    char *read = "D:\\hello.txt";
    FILE *p = fopen(read, "w");
    if (p == NULL) {
        printf("%s\n", strerror(errno));
        //perror("error"); 同上
    }

    printf("%s %s %s %d\n",__DATE__,__TIME__,__FILE__,__LINE__);
    printf("%s %s %s %d\n",__DATE__,__TIME__,__FILE__,__LINE__);
    printf("%s %s %s %d\n",__DATE__,__TIME__,__FILE__,__LINE__);
    printf("%s %s %s %d\n",__DATE__,__TIME__,__FILE__,__LINE__);
    fclose(p);
    p = NULL;
}

void seek() {
    fputs();
    fgets();
    char *read = "D:\\hello.txt";
    FILE *p = fopen(read, "r");
    if (p == NULL) {
        printf("%s\n", strerror(errno));
        //perror("error"); 同上
    }
    fseek(p, 1, SEEK_SET);
    printf("%c,%ld \n", fgetc(p), ftell(p));
    fseek(p, -2, SEEK_END);
    printf("%c,%ld \n", fgetc(p), ftell(p));
    fseek(p, -1, SEEK_CUR);
    printf("%c,%ld \n", fgetc(p), ftell(p));
    fclose(p);
    p = NULL;
}

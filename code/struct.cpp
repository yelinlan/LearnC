/*
//
// Created by 夜林蓝 on 2024/3/16.
//

#include "stdio.h"

struct Stu {
    int id;
    char name[20];
    int sex;
};

int main() {

    Stu stu = {1, "lily", 1};
    Stu *p = &stu;

    printf("%d\t%s\t%d\n", p->id, p->name, p->sex);
    printf("%d\t%s\t%d\n", (*p).id, (*p).name, (*p).sex);

    return 0;
}*/

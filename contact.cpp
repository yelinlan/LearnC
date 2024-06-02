//
// Created by 夜林蓝 on 2024/3/28.
//

#include "contact.h"

static int findByName(Contact *pContact, char name[100]) {
    for (int i = 0; i < pContact->count; ++i) {
        if (strcmp(pContact->people[i].name, name) == 0) {
            return i;
        }
    }
    return -1;
}

/**
 * 静态数组
 * @param pContact
 */
//void InitContact(Contact *pContact) {
//    pContact->count = 0;
//    memset(pContact->people, 0, sizeof(pContact->people));
//}

/**
 * 动态数组
 * @param pContact
 */
void InitContact(Contact *pContact) {
    pContact->count = 0;
    pContact->capacity = CAPACITY;
    People *people = (People *) calloc(CAPACITY, sizeof(People));
    if (people == NULL) {
        printf("%s\n", strerror(errno));
        return;
    }
    printf("初始容量%d\n", pContact->capacity);
    pContact->people = people;
    loadContact(pContact);
}

void destroy(Contact *pContact) {
    free(pContact->people);
    pContact->people = NULL;
}

void show(Contact *pContact) {
    printf("age \t name \t sex \t tel \t addr \n");
    for (int i = 0; i < pContact->count; ++i) {
        People &people = pContact->people[i];
        printf("%d \t %s \t %s \t %s \t %s \n", people.age, people.name, people.sex, people.tel, people.addr);
    }
}

void addContact(Contact *pContact) {
    autoCapacity(pContact);
    People &people = pContact->people[pContact->count];
    printf("请输入name:\n>>");
    scanf("%s", people.name);
    printf("请输入age:\n>>");
    scanf("%d", &people.age);
    printf("请输入sex:\n>>");
    scanf("%s", people.sex);
    printf("请输入tel:\n>>");
    scanf("%s", people.tel);
    printf("请输入addr:\n>>");
    scanf("%s", people.addr);
    pContact->count++;
}

void autoCapacity(Contact *pContact) {
    if (pContact->count == pContact->capacity) {
        printf("开始扩容\n");
        People *p = (People *) realloc(pContact->people, (pContact->capacity + INCREASE_SZ) * sizeof(People));
        if (p == NULL) {
            printf("autoCapacity::%s\n", strerror(errno));
            return;
        } else {
            pContact->people = p;
            pContact->capacity += INCREASE_SZ;
        }
        printf("扩容后容量%d\n", pContact->capacity);
    }
}

void delOne(Contact *pContact) {
    if (pContact->count == 0) {
        printf("通讯录为空\n");
        return;
    }

    char name[MAX] = {0};
    printf("请输入要删除的name:\n>>");
    scanf("%s", name);

    int pos = findByName(pContact, name);
    if (pos == -1) {
        printf("不存在name:%s\n", name);
    } else {
        for (int i = pos; i < pContact->count; ++i) {
            pContact->people[i] = pContact->people[i + 1];
        }
        pContact->count--;
        show(pContact);
    }
}

void select(Contact *pContact) {
    char name[MAX] = {0};
    printf("请输入要查找的name:\n>>");
    scanf("%s", name);
    int pos = findByName(pContact, name);
    if (pos == -1) {
        printf("不存在name:%s\n", name);
    } else {
        showOne(pContact, pos);
    }
}

void showOne(Contact *pContact, int i) {
    printf("age \t name \t sex \t tel \t addr \n");
    People &people = pContact->people[i];
    printf("%d \t %s \t %s \t %s \t %s \n", people.age, people.name, people.sex, people.tel, people.addr);
}

void modify(Contact *pContact) {
    char name[MAX] = {0};
    printf("请输入要修改的人的name:\n>>");
    scanf("%s", name);
    int pos = findByName(pContact, name);
    if (pos == -1) {
        printf("不存在name:%s\n", name);
    } else {
        People &people = pContact->people[pos];
        printf("请输入name:\n>>");
        scanf("%s", people.name);
        printf("请输入age:\n>>");
        scanf("%d", &people.age);
        printf("请输入sex:\n>>");
        scanf("%s", people.sex);
        printf("请输入tel:\n>>");
        scanf("%s", people.tel);
        printf("请输入addr:\n>>");
        scanf("%s", people.addr);
        showOne(pContact, pos);
    }
}

int compare(const void *a, const void *b) {
    return strcmp(((People *) a)->name, ((People *) b)->name);
}

void sort(Contact *pContact) {
    qsort(pContact->people, pContact->count, sizeof(pContact->people[0]), compare);
    show(pContact);
}

void saveContact(Contact *pContact) {
    FILE *p = fopen(filename, "wb");
    if (p == NULL) {
        perror("saveContact");
        return;
    }
    for (int i = 0; i < pContact->count; ++i) {
        fwrite(pContact->people + i, sizeof(People), 1, p);
    }
    fclose(p);
    p = NULL;
    printf("保存通讯录\n");
}

void loadContact(Contact *pContact) {
    FILE *p = fopen(filename, "rb");
    if (p == NULL) {
        perror("loadContact");
        return;
    }
    People people = {0};
    while (fread(&people, sizeof(People), 1, p)==1) {
        autoCapacity(pContact);
        pContact->people[pContact->count] = people;
        pContact->count++;
    }
    fclose(p);
    p = NULL;
}

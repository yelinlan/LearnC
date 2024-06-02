//
// Created by 夜林蓝 on 2024/3/28.
//

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#define MAX 100
#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TEL 12
#define MAX_ADDR 30
#define CAPACITY 1
#define INCREASE_SZ 2

typedef struct People {
    int age;
    char name[MAX_NAME];
    char sex[MAX_SEX];
    char tel[MAX_TEL];
    char addr[MAX_ADDR];
} People;

/**
 * 静态
 */
//typedef struct Contact {
//    People people[MAX];
//    int count = 0;
//} Contact;

/**
 * 动态
 */
typedef struct Contact {
    People *people;
    int count = 0;
    int capacity = CAPACITY;
} Contact;

static const char *const filename = "D:\\my_contact.txt";

void InitContact(Contact *pContact);

void destroy(Contact *pContact);

void show(Contact *pContact);

void addContact(Contact *pContact);

void delOne(Contact *pContact);

void select(Contact *pContact);

void showOne(Contact *pContact, int i);

void modify(Contact *pContact);

void sort(Contact *pContact);

void saveContact(Contact *pContact);

void loadContact(Contact *pContact);

void autoCapacity(Contact *pContact);

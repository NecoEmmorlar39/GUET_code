#include<stdio.h>
#include<string.h>
struct book
{
    float price;//
    char name[20];//书名超过10个字符
};
int main(void)
{
    struct book myBook;
    myBook.price=5.6;
    strcpy(myBook.name,"the world is flat");
    printf("book name=%s,book price=%.1f",myBook.name,myBook.price);
    return 0;
}
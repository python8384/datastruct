#include <stdio.h>
#include <stdlib.h>

typedef struct  Link
{
    char elem;       //数据域
   struct   Link * next;      //指针域
    
} link;

// 头结点的链表初始化
link * initLinkList1(){
    link * p = NULL;        //创建  头指针
    link * temp = (link *)malloc(sizeof(link)); //创建首元结点
    temp->elem = 1; //首元结点数据域赋值
    temp->next = NULL;  //首元结点指针节点赋值
    p = temp;   //让头指针指向首元结点的首地址

    for(int i=2;i<=5;i++) {
        link * e = (link *)malloc(sizeof(link));        //创建每一个节点
        e->elem = i;                  //每个节点数据域赋值
        e->next = NULL;             //每个节点指针域赋值
        temp->next = e;             //首元结点的指针域指向新创建的节点的首地址
        temp = temp->next;         //temp变量指向新创建的节点的首地址
    }
    return p;               //返回首元结点的首地址
}

// 有头结点的链表的初始化
link * initLinkList2() {
    // 创建头指针
    link * p = NULL;
    //创建头结点
    link *temp = (link *)malloc(sizeof(link));
    p = temp;

    //创建其他节点（包含首元结点）

    for (int i = 1; i <= 5; i++)
    {
        link * e = (link *) malloc(sizeof(link));
        e->elem = i;
        e->next = NULL;
        temp->next = e;
        temp = temp->next;
    }
    
    return p;
}


int main(int argc, char const *argv[])
{
   /* link * table = initLinkList();
   printf("%d\n",table->next->elem);
   printf("%d\n",table->next->next->elem);
   printf("%d\n",tabl>next->next->next->elem);
   printf("%d\n",table->next->next->next->next->elem);
   printf            \n",table->next->next->->elem);
 */
    link * tb = initLinkList2();
    printf("%d\n",tb->next->elem);
} 
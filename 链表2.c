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
    //头指针指向头结点的首地址
    p = temp;

    //创建其他节点（包含首元结点）

    for (int i = 1; i <= 5; i++)
    {
        // 创建其他节点
        link * e = (link *) malloc(sizeof(link));
        // 其他节点赋值
        e->elem = i;
        e->next = NULL;
        // 头结点的指针域指向其他元素的首地址
        temp->next = e;
        //头结点指向新创建节点的首地址
        temp = e;
    }
    
    return p;
}

// 遍历链表节点

void displayLink(link * p){
    link * temp = p;
    while (temp)
    {
        printf("%d ",temp->elem);
        temp = temp->next;
    }
    printf("\n");
    
}



int main(int argc, char const *argv[])
{

    link * tb = initLinkList2();
    /* printf("%d\n",tb->next->elem);
    printf("%d\n",tb->next->next->elem);
    printf("%d\n",tb->next->next->next->elem);
    printf("%d\n",tb->next->next->next->next->elem);
    printf("%d\n",tb->next->next->next->next->next->elem); */
    displayLink(tb);
} 
# include <stdio.h>

struct Node
{
    int value;
    struct Node *next;
};

void release_list(struct Node *node);

void release_list(struct Node *node)
{
    struct Node *temp;
    while(node != NULL)
    {
        temp = node;
        node = node->next;
        free(temp);
    }
}

int main(void)
{
    // ͷ�巨
    int a,count;
    struct Node *temp;
    struct Node *head = NULL;
    //head = (struct Node *)malloc(sizeof(struct Node));
    while(count < 5){
        printf("����Ҫ����Ľ���ֵ��");
        scanf("%d",&a);
        struct Node *node;
        node = (struct Node *)malloc(sizeof(struct Node));
        node->value = a;
        count ++;
        if(head == NULL){
            node->next = NULL;
            head = node;
        }
        else{
            temp = head;
            head = node;
            node->next =temp;
        }
    }

    temp = head;
    while(head != NULL){
        printf("����Ҫ����������ֵ:%d\n",head->value);
        head = head->next;
    }

    release_list(temp);

    return 0;
}

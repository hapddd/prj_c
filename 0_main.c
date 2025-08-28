#include <stdio.h>
#include <stdlib.h>//

typedef struct ListNode{
    int val;
    struct ListNode * next;
}ListNode;

ListNode * create_node(int val){
    ListNode *newNode = (ListNode *)malloc(sizeof(ListNode));
    if(newNode == NULL){
        printf("Malloc Error!!\r\n");
        return 0;
    }
    newNode->val = val;
    newNode->next = NULL;
    return newNode;
}
void insert_at_head(int val, ListNode **head){
    ListNode *newNode = create_node(val);
    if(newNode == NULL){
        return;
    }
    newNode->next = *head;//
    *head = newNode;//
}

// void insert_at_tail(int val, ListNode **head){
//     ListNode **newNode = head;
//     ListNode *lastNode = create_node(val);

//     if(*newNode == NULL){
//         *head = lastNode;
//         return ;
//     }

//     while((*newNode)->next != NULL){
//         newNode = &(*newNode)->next;
//     }
//     (*newNode)->next = lastNode;//
// }

// 双指针版本
void insert_at_tail(int val, ListNode **head){
    ListNode **newNode = head;
    ListNode *lastNode = create_node(val);

    if(lastNode == NULL)return ;

    // printf("newNode size = %d\n",sizeof(newNode));

    while((*newNode) != NULL){
        newNode = &(*newNode)->next;
    }
    (*newNode) = lastNode;
}

// 单指针版本
// void insert_at_tail(int val, ListNode **head){
//     ListNode *newNode = *head;
//     ListNode *lastNode = create_node(val);

//     if(lastNode == NULL)return ;

//     if(newNode == NULL){
//         *head = lastNode;
//         return;
//     }

//     while(newNode->next != NULL){
//         newNode = newNode->next;
//     }
//     newNode->next = lastNode;
// }


void travel_node(ListNode *head){
    ListNode *now_node = head;
    // while(now_node->next != NULL){
    while(now_node != NULL){
        printf("%d->",now_node->val);
        now_node = now_node->next;
    }
    printf("\n");
}
void delete_node(int val, ListNode **head){
    ListNode **now_node = head;
    while((*now_node) != NULL){
        if((*now_node)->val == val){
            ListNode *to_delete = *now_node;
            *now_node = (*now_node)->next;
            free(to_delete);
            break;
        }
        now_node = &(*now_node)->next;
    }
}

// void delete_node(int val, ListNode **head){
//     ListNode *now_node = *head;
//     if(now_node->val == val){
        
//     }
// }

int main(){
    // printf("Hello World\r\n");
    ListNode *head = NULL;
    insert_at_head(1, &head);
    insert_at_head(2, &head);
    insert_at_head(3, &head);

    // delete_node(2, &head);
    insert_at_tail(4, &head);

    travel_node(head);

    
    return 0;
}


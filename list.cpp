#include <stdio.h>
#include <stdlib.h>//
#include <iostream>
using namespace std;

// typedef struct ListNode{
//     int val;
//     struct ListNode * next;
// }ListNode;

// ListNode * create_node(int val){
//     ListNode *newNode = (ListNode *)malloc(sizeof(ListNode));
//     if(newNode == NULL){
//         printf("Malloc Error!!\r\n");
//         return 0;
//     }
//     newNode->val = val;
//     newNode->next = NULL;
//     return newNode;
// }
// void insert_at_head(int val, ListNode **head){
//     ListNode *newNode = create_node(val);
//     if(newNode == NULL){
//         return;
//     }
//     newNode->next = *head;//
//     *head = newNode;//
// }

// // void insert_at_tail(int val, ListNode **head){
// //     ListNode **newNode = head;
// //     ListNode *lastNode = create_node(val);

// //     if(*newNode == NULL){
// //         *head = lastNode;
// //         return ;
// //     }

// //     while((*newNode)->next != NULL){
// //         newNode = &(*newNode)->next;
// //     }
// //     (*newNode)->next = lastNode;//
// // }

// // 双指针版本
// void insert_at_tail(int val, ListNode **head){
//     ListNode **newNode = head;
//     ListNode *lastNode = create_node(val);

//     if(lastNode == NULL)return ;

//     // printf("newNode size = %d\n",sizeof(newNode));

//     while((*newNode) != NULL){
//         newNode = &(*newNode)->next;
//     }
//     (*newNode) = lastNode;
// }

// // 单指针版本
// // void insert_at_tail(int val, ListNode **head){
// //     ListNode *newNode = *head;
// //     ListNode *lastNode = create_node(val);

// //     if(lastNode == NULL)return ;

// //     if(newNode == NULL){
// //         *head = lastNode;
// //         return;
// //     }

// //     while(newNode->next != NULL){
// //         newNode = newNode->next;
// //     }
// //     newNode->next = lastNode;
// // }


// void travel_node(ListNode *head){
//     ListNode *now_node = head;
//     // while(now_node->next != NULL){
//     while(now_node != NULL){
//         printf("%d->",now_node->val);
//         now_node = now_node->next;
//     }
//     printf("\n");
// }
// void delete_node(int val, ListNode **head){
//     ListNode **now_node = head;
//     while((*now_node) != NULL){
//         if((*now_node)->val == val){
//             ListNode *to_delete = *now_node;
//             *now_node = (*now_node)->next;
//             free(to_delete);
//             break;
//         }
//         now_node = &(*now_node)->next;
//     }
// }

// // void delete_node(int val, ListNode **head){
// //     ListNode *now_node = *head;
// //     if(now_node->val == val){
        
// //     }
// // }

// int main(){
//     // printf("Hello World\r\n");
//     ListNode *head = NULL;
//     insert_at_head(1, &head);
//     insert_at_head(2, &head);
//     insert_at_head(3, &head);

//     // delete_node(2, &head);
//     insert_at_tail(4, &head);

//     travel_node(head);

    
//     return 0;
// }

// 反转单向链表

typedef struct ListNode{
    int val;
    ListNode * next;
}ListNode;

ListNode* creat_node(int val){
    ListNode * new_node = (ListNode *)malloc(sizeof(ListNode));
    new_node->val = val;
    new_node->next = NULL;
    return new_node;
}
void reverse_list(ListNode **head){
    ListNode * temp_node = *head;
    ListNode * last_node = NULL;
    ListNode * next_node = NULL;
    if(*head == NULL) return ;

    while(temp_node->next != NULL){
        next_node = temp_node->next;
        temp_node->next = last_node;//change
        last_node = temp_node;

        // temp_node = temp_node->next;
        temp_node = next_node;
    }
    // last node 
    temp_node->next = last_node;
    *head = temp_node;
}


int main(){
    ListNode *head = NULL;
    ListNode *node1 = creat_node(1);
    ListNode *node2 = creat_node(2);
    ListNode *node3 = creat_node(3);
    ListNode *node4 = creat_node(4);
    head = node1;
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;

    reverse_list(&head);



    ListNode *temp = head;
    while(temp->next != NULL){
        printf("%d->",temp->val);
        temp = temp->next;
    }

    printf("%d\n",temp->val);

    return 0;
}
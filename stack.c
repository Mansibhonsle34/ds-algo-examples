#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void display(struct Node* head) {
    while(head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node *head = NULL, *temp, *newNode;
    int i;
    for(i = 1; i <= 3; i++) {
        newNode = (struct Node*) malloc(sizeof(struct Node));
        newNode->data = i * 10;
        newNode->next = NULL;
        if(head == NULL)
            head = temp = newNode;
        else {
            temp->next = newNode;
            temp = newNode;
        }
    }
    display(head);
    return 0;
}

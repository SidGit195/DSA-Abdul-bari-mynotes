/*
# Node = Data + Pointer

----------------------------------------------------------------------------------------------------------

# Linked-list
-> Linked list is a collection of nodes where each node contain data & pointer to next node.

first or head        D    P          D    P          D    P          D     P
    |200|----->    | 8 | 210| ---> | 3 | 270| ---> | 7 | 300| ---> | 12 | NULL|
    pointer           200          210/11/12/../22    270              300
     100          (address of)  (it contain mem. form)
                  (this node.)  (210-222 but we need )
                                (only first byte.    )

All the nodes are not side by side (see address) {randomly memory allocated nodes} & the continuity is
maintain due to link (pointer).

----------------------------------------------------------------------------------------------------------

struct Node{                <------  Self Referencial structure.
    int data;                    (Having a pointer of its own type)                NODE
    struct Node *next;                                                          |data|next| 
};

----------------------------------------------------------------------------------------------------------
struct node is already define
# Creation a node

struct Node *p;
p = (struct Node *)malloc(sizeof(struct node));
p->data = 10;                                             P            Node
p->next = 0;     // same as NULL                        |500| ----> | 10 | \ |

*/
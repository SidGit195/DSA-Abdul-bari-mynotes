/*

first or head        D    P          D    P          D    P          D     P
    |200|----->    | 8 | 210| ---> | 3 | 270| ---> | 7 | 300| ---> | 12 | NULL|
    pointer           200          210/11/12/../22    270              300
     100          (address of)  (it contain mem. form)
                  (this node.)  (210-222 but we need )
                                (only first byte.    )



----------------------------------------------------------------
// Program of traversal of a linked list

display(struct Node *p){
    while(p != 0){                          // same as -->  p == NULL OR (p)
        printf("%d", p->data);              // simple operation to show linked list
        p = p->next;
    }
}
---------
display(first);             ----> function call

*/
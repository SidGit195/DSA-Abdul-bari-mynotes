/*  # Some Important Conditions
struct Node *p, *q;

1.  p = q;          (p & q denoted same place)
2.  q = p->next;    (q denoated next node of p)
3.  p = p->next;    (**** P moves to next node)

----------------------------------------------------------------------------------------------------------

In C/C++ programming 
Zero (0) means false &
Non-Zero value means true.

# These 3 conditions are quivalent
& used to check that pointer is not pointing any node.

struct Node *p;
                                                                   p
1. if(p == NULL)            ---> Condn 1                      1. | 0 |
2. if(p == 0)               ---> Condn 1
3. if(!p)                   ---> Condn 1                           p          A            B
if pointer is null than all these conditions is true.         2. |200|--->| d1|210|--->| d2|   |
                                                                             200          210
--------------------------------------                                                                                       
--------------------------------------
# Reverse of all this condn
when pointer is pointing some node.
1. if(p != NULL)            ---> Condn 2
2. if(p != 0)               ---> Condn 2
3. if(p)                    ---> Condn 2

------------------------------------------------------------------------------------------

if(p->next == NULL)         ---> Representing Last Node (or true only at last node)
if(p->next != Null)         ---> Representing all Nodes except last Node.

*/
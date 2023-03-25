//Types of Recursion:-
//(1)Tail       (2)Head       (3)Tree       (4)Indirect        (5)Nested
//
//(1)Tail = Tail recursion is defined as a recursive function in which the recursive call is the last statement that is executed by the function.
//So basically nothing is left to execute after the recursion call.
//Nothing execution at the returning time

// Ex:-
// void fun(int n){
//     if(n>0){
//         printf("%d",n);
//         fun(n-1);        //Nothing after this
//     }
// }

// void fun(int n){
//     while(n>0){
//         printf("%d",n);
//         n--;
//     }
// }

//In case of tale recursion , it is better if we use loops
// Reason --> tale recursion --> (1)Time complaxity = O(n)          (2)Space complaxity = O(n)  //4 activation record form in stack
//        --> loops          --> (1)Time complaxity = O(n)          (2)Space complaxity = (1)




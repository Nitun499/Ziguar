#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define vi vector<int>arr
#define vvi vector<vector<int>>arr


//Node that represents individual element of linked list
class Node{
    public:
        int data;
        Node* next;
        Node(int data){
            this->data=data;
            this->next=NULL;
        }
};


/*
    We will take two pointers, we can name them slow and fast pointer. Slow pointer will move one step at a time whereas fast pointer takes two steps
    The whole process will continue until fast not becomes null and next of fast is also not null
    In the end return slow.
*/
Node* MiddleOfLinkedList(Node* head){
   Node* slow=head,*fast=head;
   while(fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;
   }
   return slow;
}

int main(){
    //Problem is to find the middle of linked list
    //If linkedlist is of odd length then we simply returns middle element 
    //if linkedlist is of even length then we have to return element next to middle

    //We are assuming that input linked list is given to us
    return 0;
}
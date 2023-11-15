#include <iostream>
using namespace std;
class node{
    public:
        int info;
        node *next;
        //node *prev;
        node(int val){
            info=val;
            next=NULL;
        }     
};

class LinkedList {
private:
    node* head;

public:
    LinkedList(){
         head=NULL;
    }

    void insert(int val) {
        node* newnode = new node(val);
        if (head == nullptr) {
            head = newnode;
        } else {
            node* current = head;
            while (current->next != nullptr) {
                current = current->next;
            }
            current->next = newnode;
           
        }
    }

    void printList() {
        node* current = head;
        while (current != nullptr) {
            cout << current->info << " ";
            current = current->next;
        }
        cout <<endl;
    }

    node* rearrangeList() {
        if (head == nullptr || head->next == nullptr) {
            return head;
        }
        node* odd = head;
        node* even = head->next;
        node* evenHead = even;

        while (even != nullptr && even->next != nullptr) {
            odd->next = even->next;
            odd = odd->next;
            even->next = odd->next;
            even = even->next;
        }

        odd->next = evenHead;
        return head;
    }
};

int main() {
    LinkedList list;
    list.insert(2);
    list.insert(1);
    list.insert(3);
    list.insert(5);
    list.insert(6);
    list.insert(4);
    list.insert(7);

    cout << "Original list: ";
    list.printList();

    list.rearrangeList();

    cout << "Rearranged list: ";
    list.printList();

    return 0;
}

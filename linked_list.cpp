// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;
typedef struct node
{
  int value;
  struct node  *next;
}nd;

typedef class _linked_list
{
    nd *head;
    public:
    _linked_list()
    {
        printf("break\n");
        this->head = NULL;
    }
    nd *getHead()
    {
        return head;
    }
    nd *search_int(int val);
    void add_int(int val);
    void append_end(int val);
}list;

nd *list::search_int(int val)
{
    nd *tmp = this->head;
    
    while (tmp != 0)
    {
        if (tmp->value == val)
            return (tmp);
        tmp = tmp->next;
    }
    return (0);
}
void list::add_int(int val)
{
    nd *ptr = new nd;
    ptr->value = val;
    ptr->next = this->head;
    this->head = ptr;
}
int main() {
    // Write C code here
    nd *nod = (nd *)malloc(sizeof(nd));
    list *ls = new list;
    ls->add_int(10);
    ls->add_int(11);
    ls->add_int(19);
    nod->value = 80;
    cout<<ls->search_int(10)->value;
    //nod->add_int(80);
    return (0);
}

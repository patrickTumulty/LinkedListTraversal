

#include <iostream>
#include "ll.hpp"

LinkedList::LinkedList(int val)
{
    this->make_head(val);
    
}

LinkedList::LinkedList(int * vals, int length)
{
    this->make_list(vals, length);
}


LinkedList::~LinkedList()
{
    


}

void LinkedList::make_head(int val)
{
    this->head = new Node;
    this->head->data = val;
    this->head->next = NULL;
}



void LinkedList::make_list(int * vals, int length)
{
    this->make_head(vals[0]);
    for (int i = 1; i < length; i++)
    {
        this->append(vals[i]);
    }
}

void LinkedList::append(int val)
{
    Node * new_node = new Node;
    Node * last = this->head;
    new_node->data = val;
    new_node->next = NULL;
    if (this->head->next == NULL)
    {
        this->head->next = new_node;
        return;
    }

    while (last->next != NULL)
    {
        last = last->next;
    }
    last->next = new_node;
}

void LinkedList::print_list()
{
    Node * n = this->head;
    while (true)
    {
        std::cout << n->data << std::endl;
        n = n->next;
        if (n->next == NULL) 
        {
            std::cout << n->data << std::endl;
            n = n->next;
            break; 
        }
    }
}

void LinkedList::print_list_inline()
{
    Node * n = this->head;
    std::string out = "";
    while (true)
    {
        out += std::to_string(n->data) + "->";
        n = n->next;
        if (n->next == NULL) 
        { 
            out += std::to_string(n->data);
            n = n->next;
            break; 
        }
    }
    std::cout << out << std::endl;
}

Node * LinkedList::get_head()
{
    return this->head;
}
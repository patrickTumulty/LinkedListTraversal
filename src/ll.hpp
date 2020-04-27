
#ifndef LL_HPP
#define LL_HPP

#include <iostream>

struct Node
{
    int data;
    Node * next;
};

class LinkedList
{
public:
    LinkedList(int val);
    LinkedList(int * vals, int length);
    ~LinkedList();

    void make_list(int * vals, int length);

    void append(int val);
    void print_list();
    void print_list_inline();
    Node * get_head();

private:
    Node * head;
    void make_head(int val);

};

void new_ll(int * vals);

void print_ll();

#endif
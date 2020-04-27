
#include <iostream>
#include "ll.hpp"


int get_num(LinkedList * list)
{
    int num = 0;
    int multiplier = 1;

    Node * n = list->get_head();
    while (true)
    {
        num += n->data * multiplier;
        multiplier *= 10;
        n = n->next;
        if (n->next == NULL)
        {
            num += n->data * multiplier;
            multiplier *= 10;
            n = n->next;
            break;
        }
    }
    return num;
}

LinkedList * reverse_num(int num)
{
    std::string strNum = std::to_string(num);
    int length = strNum.size();
    int v = (int)strNum[(length - 1)] - 48;
    LinkedList * new_list = new LinkedList(v);
    for (int i = 1; i < length; i++)
    {
        v = (int)strNum[(length - 1) - i] - 48;;
        new_list->append(v);
    }
    return new_list;
}



int main()
{
    // Input 
    int list1 [3] = { 2, 4, 3 };
    int list2 [3] = { 5, 6, 4 };
    LinkedList * ll1 = new LinkedList(list1, 3);
    LinkedList * ll2 = new LinkedList(list2, 3);

    // Print Input 
    ll1->print_list_inline();
    ll2->print_list_inline();
    
    int n1 = get_num(ll1);
    int n2 = get_num(ll2);

    int answer = n1 + n2;
    std::cout << answer << std::endl;

    LinkedList * answer_list = reverse_num(answer);
    answer_list->print_list_inline();
    
 
    
}
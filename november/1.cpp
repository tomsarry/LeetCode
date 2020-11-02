#include <iostream>
#include <string>

using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

int getDecimalValue(ListNode *head)
{
    // list not empty
    int res = head->val;
    while (head->next != nullptr)
    {
        // res = res * 2 + head->next->val;
        res = res << 1 | head->next->val;
        head = head->next;
    }
    return res;
}

int getDecimalValue2(ListNode *head)
{
    string bin = "";
    ListNode *ptr = head;
    while (ptr != nullptr)
    {
        bin.append(to_string(ptr->val));
        ptr = ptr->next;
    }
    return stoi(bin, 0, 2);
}

int main()
{
    ListNode node1 = ListNode(1);
    ListNode node2 = ListNode(0, &node1);
    ListNode node3 = ListNode(0, &node2);
    ListNode node4 = ListNode(0, &node3);
    ListNode node5 = ListNode(1, &node4); // head
    // 10001_2 = 17_10

    ListNode node6 = ListNode();

    cout << getDecimalValue(&node5) << endl;
}
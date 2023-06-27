#include <bits/stdc++.h>
using namespace std;

class List{
    public:
    int data;
    List* next;

    List() {
        this->data = 0;
        this->next = NULL;
    }
};

int main(void) {
    List head;
    List second;
    head.data = 7;
    head.next = &(second);

    cout<<head.next->data;

    return 0;
}

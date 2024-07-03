#include <iostream>
using namespace std;
#include "Queue.h"
#include <cstring>

int main(int argc, char **argv) {
    Queue q;
    int i, x;

    for (i = 1; i < argc; i++) {
        if (strcmp(argv[i], "x") == 0) {
            cout << "Clearing queue (call destructor)" << endl;
            while (!q.isEmpty()) {
                x = q.dequeue();
                if (x != -1) {
                    cout << "Dequeing " << x << endl;
                }
            }
        } else {
            q.enqueue(atoi(argv[i]));
        }
    }

    // Clear the remaining elements in the queue
    cout << "Clearing queue (call destructor)" << endl;
    while (!q.isEmpty()) {
        x = q.dequeue();
        if (x != -1) {
            cout << "Dequeing " << x << endl;
        }
    }

    return 0;
}
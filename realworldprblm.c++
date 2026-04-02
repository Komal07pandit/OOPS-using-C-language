#include <iostream>
#include <string>
using namespace std;

class Stack {
protected:
    string arr[100];
    int top;

public:
    Stack() {
        top = -1;
    }

    void push(string value) {
        if (top == 99) {
            cout << "Stack Overflow\n";
            return;
        }
        arr[++top] = value;
    }

    void pop() {
        if (top == -1) {
            cout << "Stack Underflow\n";
            return;
        }
        cout << "Removed: " << arr[top] << endl;
        top--;
    }

    bool isEmpty() {
        return top == -1;
    }

    string peek() {
        if (top == -1) {
            return "No Pages";
        }
        return arr[top];
    }

    void display() {
        if (top == -1) {
            cout << "No browsing history\n";
            return;
        }

        cout << "\nBrowser History:\n";
        for (int i = top; i >= 0; i--) {
            cout << arr[i] << endl;
        }
    }
};

class BrowserStack : public Stack {
public:
    void visitPage(string url) {
        push(url);
        cout << "Visited: " << url << endl;
    }

    void goBack() {
        if (isEmpty()) {
            cout << "No pages to go back\n";
            return;
        }
        cout << "Going back from: " << peek() << endl;
        pop();
    }

    void currentPage() {
        cout << "Current Page: " << peek() << endl;
    }
};

int main() {
    BrowserStack browser;

    browser.visitPage("google.com");
    browser.visitPage("youtube.com");
    browser.visitPage("github.com");

    browser.currentPage();
    browser.display();

    browser.goBack();
    browser.currentPage();

    browser.display();

    return 0;
}
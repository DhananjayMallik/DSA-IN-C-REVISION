#include <iostream>
#include <stack>
#include <string>
using namespace std;

int prio(char ch) {
    if (ch == '+' || ch == '-') return 1;
    return 2; // * and /
}

int solve(int val1, int val2, char ch) {
    if (ch == '+') return val1 + val2;
    else if (ch == '-') return val1 - val2;
    else if (ch == '*') return val1 * val2;
    else return val1 / val2;
}

int main() {
    string s = "1+(2+6)*4/8-3";
    stack<int> val;
    stack<char> op;

    for (int i = 0; i < s.length(); i++) {

        // If digit, push to val stack
        if (s[i] >= '0' && s[i] <= '9') {
            val.push(s[i] - '0');
        }

        else {
            // Case 1: operator stack empty → push
            if (op.size() == 0) {
                op.push(s[i]);
            }

            // Case 2: opening bracket → always push
            else if (s[i] == '(') {
                op.push(s[i]);
            }

            // Case 3: if top is '(' → push
            else if (op.top() == '(') {
                op.push(s[i]);
            }

            // Case 4: closing bracket → solve until '('
            else if (s[i] == ')') {
                while (op.top() != '(') {

                    char ch = op.top();
                    op.pop();

                    int val2 = val.top(); val.pop();
                    int val1 = val.top(); val.pop();

                    val.push(solve(val1, val2, ch));
                }
                op.pop();  // Pop '('
            }

            // Case 5: higher priority → push
            // If the new operator (s[i]) has HIGHER priority 
            //than the operator on top of the stack (op.top()),
            // then push it onto the operator stack.
            else if (prio(s[i]) > prio(op.top())) {
                op.push(s[i]);
            }

            // Case 6: lower/equal priority → solve first
            else {
                while (op.size() > 0 && prio(s[i]) <= prio(op.top())) {

                    char ch = op.top();
                    op.pop();

                    int val2 = val.top(); val.pop();
                    int val1 = val.top(); val.pop();

                    val.push(solve(val1, val2, ch));
                }
                op.push(s[i]);
            }
        }
    }

    // Solve remaining operators
    while (op.size() > 0) {
        char ch = op.top();
        op.pop();

        int val2 = val.top(); val.pop();
        int val1 = val.top(); val.pop();

        val.push(solve(val1, val2, ch));
    }

    cout << val.top();
    return 0;
}

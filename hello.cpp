#include <iostream>

// reference c++ setup under VS Code

using namespace std;

class Calculator
{
    public:
        int Calculate (int, int, char);
};

int Calculator::Calculate(int term1, int term2, char oper)
{
    switch(oper)
    {
    case '+':
        return term1 + term2;
    case '-':
        return term1 - term2;
    case '*':
        return term1 * term2;
    case '/':
        return term1 / term2;
    default:
        cin >> term1 >> oper >> term2;
        return Calculate(term1, term2, oper);
    }
}



int main()
{
    //cout << "Hello world" << endl;
    cout << "Please enter term1 operator term2" << endl;
    
    int term1, term2;
    char oper;
    cin >> term1 >> oper >> term2;
    Calculator c;
    int result = c.Calculate(term1,term2,oper);
    cout << "Result is " << result << endl;

    cin.ignore();
    cin.get();
    return 0;
}

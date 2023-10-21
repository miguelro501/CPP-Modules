#include "RPN.hpp"

//Functions
int RPN::calculateRPN(const std::string expression)
{
    std::stack<int> stack;
    std::istringstream iss(expression);
    std::string token;

    while (iss >> token)
    {
        char* endptr;
        int num = std::strtol(token.c_str(), &endptr, 10);

        if (*endptr == '\0')
        {
            stack.push(num);
        }
        else if (token.size() == 1 && strchr("+-*/", token[0]))
        {
            if (stack.size() < 2)
            {
                std::cout << "Error: Invalid expression\n";
                return -1;
            }
            int operand2 = stack.top();
            stack.pop();
            int operand1 = stack.top();
            stack.pop();

            switch (token[0])
            {
                case '+': stack.push(operand1 + operand2); break;
                case '-': stack.push(operand1 - operand2); break;
                case '*': stack.push(operand1 * operand2); break;
                case '/':
                    if (operand2 == 0) {
                        std::cout << "Error: Division by zero\n";
                        return -1;
                    }
                    stack.push(operand1 / operand2);
                    break;
                default:
                    std::cout << "Error: Invalid operator\n";
                    return -1;
            }
        }
        else
        {
            std::cout << "Error: Invalid token " << token << "\n";
            return -1;
        }
    }

    if (stack.size() == 1)
        return stack.top();
    else
    {
        std::cout << "Error: Invalid expression\n";
        return -1;
    }
}

//OCF
RPN::RPN() {}

RPN::RPN(const RPN &other)
{
	*this = other;
}	

RPN::~RPN() {}

RPN &RPN::operator=(const RPN &other)
{
	if (this == &other)
		return (*this);
	*this = other;
	return (*this);
}
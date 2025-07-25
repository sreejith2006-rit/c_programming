#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>
#define MAX 100
char stack[MAX];
int eval[MAX];
int top = -1;
int etop=-1;
void pushOp(char el)
{
    stack[++top] = el;
}
char popOp()
{
    return stack[top--];
}
char peekOp()
{
    return stack[top];
}
int precedence(char op)
{
    if (op == '(')
        return 0;
    else if (op == '+' || op == '-')
        return 1;
    else if (op == '*' || op == '/')
    {
        return 2;
    }
    else
    {
        return 3;
    }
}
void pushev(int el)
{
    eval[++etop] = el;
}
int popev()
{
    return eval[etop--];
}
int peekev()
{
    return eval[etop];
}
void convert(char infix[], char postfix[])
{
    int k = 0;

    for (int i = 0; i < strlen(infix); i++)
    {
        char oper = infix[i];
        if (oper == ' ')
            continue;
        if (isalpha(oper) || isdigit(oper))
        {
            while (isdigit(oper))
            {
                postfix[k++] = oper;
                i++;
                oper = infix[i];
            }

            postfix[k++] = ' ';
        }
        else if (oper == '(')
        {
            pushOp(oper);
        }
        else if (oper == ')')
        {
            while (top != -1 && peekOp() != '(')
            {
                char p = popOp();
                postfix[k++] = p;
                postfix[k++] = ' ';
            }
            popOp();
        }
        else
        {
            while (top != -1 && precedence(peekOp()) >= precedence(oper))
            {
                char c = popOp();
                postfix[k++] = c;
                postfix[k++] = ' ';
            }
            pushOp(oper);
        }
    }
    while (top != -1)
    {
        postfix[k++] = popOp();
        postfix[k++] = ' ';
    }
    postfix[k] = '\0';
}
void evaluate(char postfix[])
{
    int len = strlen(postfix);
    int i = 0;
    while (i < len)
    {
        char c = postfix[i];
        if (isdigit(c))
        {
            int num = 0;
            while (isdigit(c))
            {
                num = num * 10 + (c - '0');
                c = postfix[++i];
            }
            pushev(num);
            i++;
        }
        else if (c == '+' || c == '-' || c == '*' || c == '/' || c == '^')
        {
            int op2 = popev();
            int op1 = popev();
            switch (c)
            {
            case '+':
                pushev(op1 + op2);
                break;
            case '-':
                pushev(op1 - op2);
                break;
            case '*':
                pushev(op1 * op2);
                break;
            case '/':
                pushev(op1 / op2);
                break;
            case '^':
                pushev(pow(op1, op2));
                break;
            default:
                break;
            }
            i++;
        }
        else if(c==' '){
            i++;
        }
    }
    printf("%d", popev());
}
int main()
{
    char infix[MAX];
    char postfix[MAX];
    printf("Enter the infix expression :");
    fgets(infix, sizeof(infix), stdin);
    infix[strlen(infix) - 1] = '\0';
    printf("Infix Expression :%s\n", infix);
    convert(infix, postfix);
    printf("Postfix Expression:%s\n", postfix);
    evaluate(postfix);
    return 0;
}
stack<int> a;
stack<int> b;

MinStack()
{

}

void push(int val)
{
    a.push(val);

    if(b.empty())
    {
        b.push(val);
    }
    else if(val <= b.top())
    {
        b.push(val);
    }

}

void pop()
{

    int val = a.top();
    a.pop();

    if(b.top() == val)
    {
        b.pop();
    }

}

int top()
{
    return a.top();
}

int getMin()
{
    return b.top();
}
};

class TwoStackQueue{
public:
    void push(int value)
    {
        InStack.push(value);
    }
    void pop()
    {
        if(InStack.empty()&&OutStack.empty())
        {
            throw;
        }
        else if(OutStack.empty())
        {
            while(!InStack.empty())
            {
                OutStack.push(InStack.pop());
            }
        }
        retrun OutStack.pop();
    }
    void count()//im not considerate,there is a fool mehtod,when you push,++count,and when you pop --count,it's not elegant
    {
        
    }
}

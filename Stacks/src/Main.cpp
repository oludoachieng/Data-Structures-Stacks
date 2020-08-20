#include <iostream>
#include<string>

#define MaxSize  5

template <typename T>
class Stacks
{
private:
	int StackTop;
	T StackArray[MaxSize];
	

public:
	Stacks();
	void ClearStack();
	void Push(const T& var);
	void PrintStack();
	void Pop();
	void Peek() const;

};

template <typename T>
Stacks<T>::Stacks()
{
	StackTop = -1;	//Initial position of the array index
    std::cout << "Stack of size " << MaxSize << " is created " << std::endl << std::endl;
}

template <typename T>
void Stacks<T>::ClearStack()
{
    std::cout << "Stack is cleared" << std::endl;
    StackTop = -1;
}

template <typename T>
void Stacks<T>::Push(const T& var)
{
	if (StackTop == MaxSize - 1)
	{
		std::cout << "Stack is Full" << std::endl;
		return;
	}
	else
		StackTop++;
		StackArray[StackTop] = var;
		
		
}

template <typename T>
void Stacks<T>::PrintStack()
{
	int count = StackTop;
	if (count == -1)
	{
        std::cout << "Stack is Empty" << std::endl;
		return;
	}
	else
	{
        std::cout << "Printing Stack:" << std::endl;
		for(count;count>=0;count--)
			std::cout<< StackArray[count] << std::endl;
	}
}


template <typename T>
void Stacks<T>::Pop()
{
	if (StackTop == -1)
		std::cout << "Stack is Already Empty" << std::endl;
	else
	{
		int TempStackTop = StackTop;
		StackTop--;
		std::cout<<StackArray[TempStackTop]<<" is popped from stack"<<std::endl;
		return;
			
	}
}

template <typename T>
void Stacks<T>::Peek() const
{
	if (StackTop == -1)
		std::cout << "Stack is Empty" << std::endl;
	else
	{
		std::cout<<StackArray[StackTop]<<std::endl;
		return;
	}
}


int main()
{
	Stacks<std::string> example;

    std::cout << "Select 0 to exit program" << std::endl;
    std::cout << "Select 1 to push to stack" << std::endl;
    std::cout << "Select 2 to clear stack" << std::endl;
    std::cout << "Select 3 print stack" << std::endl;
    std::cout << "Select 4 to pop from stack" << std::endl;
    std::cout << "Select 5 to peek into stack" << std::endl << std::endl;

    char input;

    while (true)
    {
        std::cin >> input;


        if (input < '0' || input> '5')
        {
            std::cout << "Select a valid input" << std::endl << std::endl;
        }



        switch (input)
        {
        case '1':
        {

            std::string insert_val;
            std::cout << "What to insert:" << std::endl;
            std::cin >> insert_val;
            example.Push(insert_val);
            std::cout << "Select 0, 1, 2, 3, 4 or 5" << std::endl;
            break;
        }
        case '2':
        {
            example.ClearStack();
            std::cout << "Select 0, 1, 2, 3, 4 or 5" << std::endl;
            break;
        }
        case '3':
        {
            example.PrintStack();
            std::cout << "Select 0, 1, 2, 3, 4 or 5" << std::endl;
            break;
        }
        case '4':
        {
            example.Pop();
            std::cout << "Select 0, 1, 2, 3, 4 or 5" << std::endl;
            break;
        }
        case '5':
        {
            example.Peek();
            std::cout << "Select 0, 1, 2, 3, 4 or 5" << std::endl;
            break;
        }
        case '0':
        {
            return 0;
        }
        }


    }
}

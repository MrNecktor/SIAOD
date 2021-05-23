#include <iostream>

using namespace std;

template <class T>
struct stack
{
    const static int N = 1000;
    T data[N]; //массив данных
    int last; //указатель на конец

    stack() { this->last = 0; }

    bool isEmpty() //проверка дека на пустоту
    {
        if (this->last == 0) return true;
        else
            return false;
    }

    void push_back(T value) //добавление элемента в конец
    {
        if (this->last == N)
        {
            throw 4;
        }
        this->data[this->last++] = value;
    }

    void pop_back() //удаление последнего элемента
    { this->last--; }

    T end() //вывод последнего элемента
    { return this->data[this->last - 1]; }

    int size() //размер дека
    { return this->last; }

    void empty()
    {
        while(!this->isEmpty())
            this->pop_back();
    }
};

template<class T>
struct deque
{
    const static int N = 1000;
    T data[N]; //массив данных
    int last; //указатель на конец

    deque() { this->last = 0; }

    bool isEmpty() //проверка дека на пустоту
    {
        if (this->last == 0) return true;
        else
            return false;
    }

    void push_front(T value) //добавление элемента в начало
    {
        if (this->last == N)
        {
            throw 3;
        }

        for (int i = this->last; i > 0; i--)
            this->data[i] = this->data[i - 1];

        this->data[0] = value;

        this->last++;
    }

    void push_back(T value) //добавление элемента в конец
    {
        if (this->last == N)
        {
            throw 4;
        }
        this->data[this->last++] = value;
    }

    void pop_front() //удаление первого элемента
    {
        for (int i = 0; i < this->last; i++) //смещение элементов
            this->data[i] = this->data[i + 1];
        this->last--;
    }

    void pop_back() //удаление последнего элемента
    { this->last--; }

    T begin() //вывод первого элемента
    { return this->data[0]; }

    T end() //вывод последнего элемента
    { return this->data[this->last - 1]; }

    int size() //размер дека
    { return this->last; }

    void empty()
    {
        while(!this->isEmpty())
            this->pop_back();
    }
};

/**
 * @file Stack.h
 * @author Shengcong Zhou * @Date 2018.Jul.1
 * @version 1.0
 * @section This is the interface for Stack class
 */
// I declare that this assignment is my own work and that I have correctly
// acknowledged the work of others. I acknowledged that I have read and
// followed the Academic Honesty and
// Integrity related policies as outlined in the syllabus. //
// _____ Shengcong Zhou ____ _____2018.Jul.1______________ //
// ____ 301336141 ______ //

#ifndef STACK_H
#define STACK_H

class Stack
{
public:
    Stack();
    Stack(int capacity);
    Stack(const Stack& theObject);
    ~Stack();

    bool canPush();
    void push(char newCharacter);
    char pop();

private:
    int size;
    int numChar;
    char* charStack;
};


int prompt();

#endif //STACK_H

#pragma once
#include<iostream>
#include<string>
using namespace std;

class File
{
    public:
        File();
        File(string names);
        virtual unsigned int size() = 0;
        string getName()const;
        void setName(string name);
        virtual void info()const = 0;
        virtual void contents()const = 0;

    private:
        string name;
};



#pragma once
#include "File.h"
class TextFile : public File
{
    public:
        TextFile();
        TextFile(string cont, string names);
        unsigned int size();
        void info()const;
        void contents()const;
        void setcontent(string cont);
        string getcontent()const;

    private:
        string content;

};



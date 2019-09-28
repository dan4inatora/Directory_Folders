#pragma once
#include "File.h"
#include<vector>

class Directory : public File
{
    public:
        Directory();
        Directory(vector<File*> f, string names);
        unsigned int size();
        void info()const;
        void contents()const;
        void addFile(File * f);


    private:
        vector<File*> files;
};



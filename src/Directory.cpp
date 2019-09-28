#include "Directory.h"

Directory::Directory() : File()
{
    this->files = vector<File*>(0);
}

Directory :: Directory(vector<File*> f, string names) : File(names)
{
    this->files = f;
}

unsigned int Directory :: size(){
    unsigned int sum = 0;
    for(unsigned int i = 0; i < this->files.size(); i++){
        sum += files[i]->size();
    }
    return sum;
}

void Directory :: info()const{
    cout<<this->getName()<<endl;
    for(unsigned int i = 0; i < this->files.size(); i++){
        files[i]->info();
    }
}

void Directory :: contents()const{
    for(unsigned int i = 0; i < this->files.size(); i++){
        files[i]->contents();
    }
}

void Directory :: addFile(File * f){
    files.push_back(f);
}

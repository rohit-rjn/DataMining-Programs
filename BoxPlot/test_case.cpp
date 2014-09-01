#include<iostream>
#include<cstdlib>
#include<fstream>
using namespace std;

int main()
{
    ofstream fout("test5.txt");
    int sets = rand()%17+1;
    fout<<sets<<endl;

    for(int i=0;i<sets;i++)
    {
        int num = rand()%100+1;
        fout<<num<<endl;
        for(int j=0;j<num;j++)
        {
            fout<<rand()%9000+50<<endl;
        }
    }
}

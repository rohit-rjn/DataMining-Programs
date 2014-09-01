#include<iostream>
#include<cstdlib>
#include<fstream>
using namespace std;

string s = "15";//1010101101010100101010101010";
int main()
{
    ofstream fout("trans9.txt");
    fout<<"15 200\n";

    for(int i=0;i<200;i++)
    {
        for(int j=0;j<15;j++)
        {
            fout<<s[rand()%2]<<" ";
        }
        fout<<endl;
    }
}

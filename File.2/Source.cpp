#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin("input.txt");
    ofstream fout("output.txt");
    string a;
    vector<string>x;
    while (getline(fin, a))
    {
        x.push_back(a);
    }
    for (int i = x.size(); i--;)
    {
        fout << x[i] << endl;
    }
    fin.close();
    fout.close();
    system("pause");
    return 0;
}
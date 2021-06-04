#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, const char* argv[]){

    ofstream file_1 ("test_1.txt");
    ofstream file_2 ("test_2.txt");

    for(int i = 0; i < 101; i ++){
        file_1 << i;
        file_2 << i;
    }
    file_1.close();
    file_2.close();

    //--------------------------------------------------------
    ifstream ifile_1 ("test_1.txt");
    ifstream ifile_2 ("test_2.txt");

    ofstream splitFile ("test_1_2.txt");

    ifile_1.seekg(0,ios_base::end);
    ifile_2.seekg(0,ios_base::end);
    int size_1 = ifile_1.tellg();
    int size_2 = ifile_2.tellg();
    char* buf_1 = new char[size_1];
    char* buf_2 = new char[size_2];

    while(ifile_1){
        ifile_1.get(buf_1, size_1);
    }

    while(ifile_2){
        ifile_2.get(buf_2, size_2);
    }

    for(int i = 0; i < size_1; i++){
        splitFile << buf_1[i];
    }
    
    for(int i = 0; i < size_2; i++){
        splitFile << buf_2[i];
    }

    ifile_1.close(); ifile_2.close(); splitFile.close();

    delete [] buf_1; delete [] buf_2;

    return 0;
}
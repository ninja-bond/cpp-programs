#include<iostream>
using namespace std;

void towerOfHanoi(int n , char src, char dest, char helpr){

    if(n == 0){
        return ;
    }

    towerOfHanoi(n-1, src , helpr , dest);
    cout << "move from " << src << " to "<< dest <<endl;
    towerOfHanoi(n-1, helpr , dest , src);
    
}


int main()
{
    towerOfHanoi(3,'A','C','B');
    return 0;
}
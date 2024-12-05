#include<iostream>
using namespace std;

int main()
{
    // int x, y;
    // cin >> x >> y ;
    const int n = 5, m = 3;
    
    int all[n][m] = {{0,1,0},
                     {2,0,0},
                     {3,0,2},
                     {2,1,1},
                     {0,0,2}}, 
                     maxNeed[n][m] = {{7,5,3},
                                      {3,2,2},
                                      {9,0,2},
                                      {2,2,2},
                                      {4,3,3}}, 
                                      need[n][m], 
                                      avaiRes[m] = {3,3,2}, 
                                      maxRes[m] = {10,5,7}, 
                                      giveRes[n], 
                                      finish[n], 
                                      count = 0;
                                      

    // cout << "input for allocation" << endl;
    // for (int i = 0 ; i <= n-1 ; i++)
    // {
    //     for (int j = 0; j <= m-1 ; j++)
    //     {
    //         cin >> all[i][j];
    //     }
        
    // }
    

    // cout << "input for maximum need" << endl;
    // for (int i = 0 ; i <= n-1 ; i++)
    // {
    //     for (int j = 0; j <= m-1 ; j++)
    //     {
    //         cin >> maxNeed[i][j];
    //     }
        
    // }
    // cin.clear;

    // cout << "input for total resources" << endl;
    // for (int i = 0 ; i <= m-1 ; i++){
    //     cin >> maxRes[i];
    // }


    // calc for need of resources
    for (int i = 0 ; i <= n-1 ; i++)
    {
        for (int j = 0; j <= m-1 ; j++)
        {
            need[i][j] = maxNeed[i][j] - all[i][j];
        }
        
    }





    // for (int i = 0 ; i <= n-1 ; i++)
    // {
    //     for (int j = 0; j <= m-1 ; j++)
    //     {
    //         cout << need[i][j];
    //     }cout << endl;
        
    // }








    for (int i = 0 ; i <= n-1 ; i++){
        finish[i] = 0;
    }


    //calc for available resources
    int sumResourcesEngaged[m];
    for (int i = 0 ; i <= m-1 ; i++){
        sumResourcesEngaged[i] = 0;
    }
    
    
    for (int i = 0; i <= m-1 ; i++){
        for(int j = 0; j <= n-1 ; j++){
            sumResourcesEngaged[i] += all[j][i];
        }
    }

    for (int i = 0; i <= m-1; i++){
        avaiRes[i] = maxRes[i] - sumResourcesEngaged[i];
    }
    cout << "Safe State is :"<< endl;
    while (1){
        for(int i = 0 ; i <= n-1 ; i++){
            if(finish[i]==0){
                giveRes[i]=1;
                for(int j = 0 ; j <= m-1 ; j++){
                    if(need[i][j] > avaiRes[j]){
                        giveRes[i] = 0;
                    }
                }

                if(giveRes[i] && !finish[i]){
                    for(int j = 0 ; j <= m-1 ; j++){
                        avaiRes[j] = avaiRes[j] + all[i][j];
                    }
                    finish[i] = 1;
                    cout << "P";
                    cout << i << "-->";
                    count++;
                }
            }
        }
        if (count == n){
        break;  
        }  

    }
    return 0;
}

    

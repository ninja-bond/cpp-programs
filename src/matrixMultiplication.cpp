//for matrix multiplication the no. columns of first matrix must be equal to the no. 
//of rows of the second matrix

// #include<iostream>
// using namespace std;

// int main()
// {
//     int n,m;
//     cin >> n >> m;
//     int a[n][m];

//     for (int i = 0 ; i <= n-1 ; i++){
//         for (int j = 0 ; j <= m-1 ; j++){
//             cin >> a[i][j];
//         }
//     }

//     int o,p;
//     cin >> o >> p;
//     int b[o][p];
//     int row_a = 0 , col_b=0;

//     for (int i = 0 ; i <= o-1 ; i++){
//         for (int j = 0 ; j <= p-1 ; j++){
//             cin >> a[i][j];
//         }
//     }
//     int x = 0,y=0;
//     int c[n][p];
//     for (int i = 0 ; i <= n-1 ; i++){
//         for (int j = 0 ; j <= p-1 ; j++){
//             c[i][j] = 0;
//         }
//     }

//     if(m != o){
//         cout << "no. of cols of first matrix same honi chaiye as no. of row in second matrix for matrix multiplication!!";
//     }
//     else{
//         for (int i = 0; i <= n-1 ; i++)
//         {
//             for (int j = 0; j <= p-1 ; j++)
//             {
//                 c[row_a][col_b] = c[row_a][col_b] + a[row_a][x]*b[y][col_b];
//                 x++;
//             }
//             col_b++;
//             if(x==m){
//                 x=0;
//             }
//             if(col_b == p){
//                 row_a++;
//                 col_b=0;
//             }
            
//         }
//         row_a++;
//         col_b=0;    
//     }

//     for (int i = 0 ; i <= n-1 ; i++){
//         for (int j = 0 ; j <= p-1 ; j++){
//             cout << c[i][j] << " ";
//         }cout << endl;
//     }


    
//     return 0;
// }
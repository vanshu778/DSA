#include <iostream>
using namespace std;

int main() {

  /*
  *****
  *****
  *****
  */
  // for(int i=0;i<3;i++){
  //   for(int j=0;j<5;j++){
  //     cout << "*";
  //   }
  //   cout<<endl;
  // }

  // int n;
  // cin>>n;

  // for(int i=0;i<n;i++){
  //   for(int j=0;j<n;j++){
  //     cout << "*";
  //   }
  //   cout<<endl;
  // }

  /* Hollow Rectangle
   * * * * *
   *       *
   * * * * *
   */

  // int row,column ;
  // cin>>row;
  // cin>>column;
  // for(int i=0;i<row;i++){
  //   for(int j=0;j<column;j++){
  //     if(i == 0 || i == row-1 || j == 0 || j == column-1){
  //       cout<<"*";
  //        }
  //     else{
  //       cout<<" ";
  //     }
  //   }
  //   cout<<endl;
  // }

  /* Half Pyramid
   *
   **
   ***
   ****
   *****
   ******
   */

  // int n;
  // cin>>n;
  // for(int i=0;i<=n;i++){
  //   for(int j=0;j<i;j++){
  //     cout<<"*";
  //   }
  //   cout<<endl;
  // }

  /* Inverted Half Pyramid
  ******
  *****
  ****
  ***
  **
  *
  */

  // int n;
  // cin >> n;
  // for (int i = n; i >= 0; i--) {
  //   for (int j = 0; j < i; j++) {
  //     cout << "*";
  //   }
  //   cout<<endl;
  // }

  /* Numeric Half Pyramid
  1
  1 2
  1 2 3
  1 2 3 4
  1 2 3 4 5
*/
  // int n;
  // cin >> n;
  // for (int i = 0; i < n; i++) {
  //   for (int j = 0; j < i+1; j++) {
  //     cout << j + 1;
  //   }
  //   cout << endl;
  // }

  /* Inverted Half Pyramid
  12345
  1234
  123
  12
  1
*/

  // int n;
  // cin>>n;
  // for(int i=n;i>0;i--){
  //   for(int j=0;j<i;j++){
  //     cout<<j+1;
  //   }
  //   cout<<endl;
  // }

 /* Full Pyramid
     *
    *  *
  *  *  *
*  *  *  *
*/

  // int n;
  // cin>>n;
  // for(int i=0;i<n;i++){
  //   for(int j=0;j<n-i-1;j++){
  //     cout<<" ";
  //   }
  //   for(int k=0;k<i+1;k++){
  //     cout<<"* ";
  //   }
  //   cout<<endl;
  // }

  /* Inverted Full Pyramid
  * * * * * *
   * * * * *
    * * * *
     * * *
      * *
       *
*/

  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    for(int j=0;j<i;j++){
      cout<<" ";
    }
    for(int k=0;k<n-i;k++){
      cout<<"* ";
    }
    cout<<endl;
  }

/* Numeric Full pyramid
        1
      2 3 2
    3 4 5 4 3
  4 5 6 7 6 5 4
5 6 7 8 9 8 7 6 5
*/

  //   int n;
  // cin>>n;
  // for(int i=0;i<n;i++){
  //   for(int j=0;j<n-i-1;j++){
  //     cout<<" ";
  //   }

  //   for(int j=0;j<i+1;j++){
  //     cout<<i+j+1;
  //   }
  // int start = 2*i;
  //   for(int j=0;j<i; j++){
  //     cout<<start;
  //     start--;
  //   }
  //   cout<<endl;
  // }
/*
     *
    * *
   * * *
  * * * *
 * * * * *
 * * * * *
  * * * *
   * * *
    * *
     *
*/
  // int n;
  // cin>>n;
  // for(int i=0;i<n;i++){
  //   for(int j=0;j<n-i-1;j++){
  //     cout<<" ";
  //   }
  //   for(int k=0;k<i+1;k++){
  //     cout<<"* ";
  //   }
  //   cout<<endl;
  // }

  //   for(int i=0;i<n;i++){
  //       for(int j=0;j<i;j++){
  //         cout<<" ";
  //       }
  //       for(int k=0;k<n-i;k++){
  //         cout<<"* ";
  //       }
  //       cout<<endl;
  //   }

/*
     *
    * *
   *   *
  *     *
  *     *
   *   *
    * *
     *
*/

  // int n;
  // cin>>n;
  // for(int i=0;i<n;i++){
  //   for(int j=0;j<n-i-1;j++){
  //     cout<<" ";
  //   }

  //   for(int j=0;j<2*i+1;j++){
  //     if(j == 0){
  //       cout<<"*";
  //     }
  //     else if(j==2*i){
  //       cout<<"*";
  //     }
  //     else{
  //       cout<<" ";
  //     }
  //   }
  //   cout<<endl;
  // }

  // for(int i=0;i<n;i++){
  //   for(int j=0;j<i;j++){
  //     cout<<" ";
  //   }

  //   for(int j=0;j<2*n-2*i-1;j++){
  //     if(j==0||j==2*n-2*i-2){
  //       cout<<"*";
  //     }
  //     else{
  //       cout<<" ";
  //     }
  //   }
  //   cout<<endl;
  // }

  /*Numeric Hollow Pyramid
     1
    1 2
   1   3
  1     4
 1 2 3 4 5
*/

//   int n;
//   cin>>n;
//   for(int i=0;i<n;i++){
//     for(int j=0;j<n-i-1;j++){
//       cout<<" ";
//     }
//     int start=1;
//     for(int j=0;j<2*i+1;j++){
//       if(i==0||i==n-1){
//         if(j%2==0){
//           cout<<start;
//           start++;
//         }
//         else{
//           cout<<" ";
//         }
//       }
//       else{
//         if(j==0){
//           cout<<1;
//         }
//         else if(j==2*i+1-1){
//           cout<<i+1;
//         }
//         else{
//           cout<<" ";
//         }
//       }
//     }
//     cout<<endl;
//   }
// }


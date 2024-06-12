#include <iostream>
using namespace std;

int main() {

  //***** Solid Rectangle patteern
  //*****
  //*****
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

  /* Solid square pattern
  ****
  ****
  ****
  ****
  */

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

  /*Hollow Square pattern
  ****
  *  *
  *  *
  ****
  */
  // int n;
  //   cin>>n;
  //   for(int i=0;i<n;i++){
  //     for(int j=0;j<n;j++){
  //       if(j==0 || j==(n-1) || i==0 || i==(n-1)){
  //         cout<<"*";
  //       }
  //       else{
  //         cout<<" ";
  //       }

  //     }
  //     cout<<endl;
  //   }

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

  /*Flipped simple pyramid
           *
         * *
       * * *
     * * * *
   * * * * *
   */

  // int n;
  // cin >> n;
  // for (int i = 0; i < n; i++) {
  //   for (int j = 0; j < n - i; j++) {
  //     cout << " ";
  //   }
  //   for (int k = 0; k < i + 1; k++) {
  //     cout << "*";
  //   }
  //   cout << endl;
  // }

  /*
  * * * * * 
    * * * * 
      * * * 
        * * 
          * 
  */

  // int n;
  // cin>>n;
  // for(int i=0;i<n;i++){
  //   for(int j=0;j<i;j++){
  //     cout<<" ";
  //   }
    
  //   for(int k=0;k<n-i;k++){
  //     cout<<"*";
  //   }
   
  //   cout<<endl;
  // }

  /*Hollow inverted half pyramid
  ****
  * *
  **
  *
  */

  // int n;
  // cin >> n;
  // for (int i = 0; i < n; i++) {
  //   for (int j = 0; j < n; j++) {
  //     if(i==0 || j==0 ||j==n-i-1){
  //       cout<<"*";
  //     }
  //     else{
  //     cout << " ";
  //     }
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

  /* Full Pyramid
   *
   *   *
   *       *
   * * * * * * *
   */

  // int n;
  // cin>>n;
  // for(int i=0;i<n;i++){
  //   int k=0;
  //   for(int j=0;j<((2*n)-1);j++){
  //     if(j<n-i-1){
  //       cout<<" ";
  //     }
  //     else if(k<2*i+1){
  //       if(k==0  || k==2*i || i==n-1)
  //         cout<<"*";
  //       else
  //         cout<<" ";
  //       k++;
  //   }
  //     else{
  //       cout<<" ";
  //     }
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

  // int n;
  // cin>>n;
  // for(int i=0;i<n;i++){
  //   for(int j=0;j<i;j++){
  //     cout<<" ";
  //   }
  //   for(int k=0;k<n-i;k++){
  //     cout<<"* ";
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

  /* Solid Half cycle
   *
   * *
   * * *
   * * * *
   * * * * *
   * * * *
   * * *
   * *
   *
   */

  // int n;
  // cin>>n;
  // for(int i=0;i<=n;i++){
  //   for(int j=0;j<i;j++){
  //     cout<<"*";
  //   }
  //   cout<<endl;
  // }
  // for (int i = n-1; i >= 0; i--) {
  //     for (int j = 0; j < i; j++) {
  //       cout << "*";
  //     }
  //     cout<<endl;
  //   }

  /*Butterfly pattern
   *                 *
   * *             * *
   * * *         * * *
   * * * *     * * * *
   * * * * * * * * * *
   * * * * * * * * * *
   * * * *     * * * *
   * * *         * * *
   * *             * *
   *                 *
   */
      // int n;
      // cin >> n;

      // // Upper half
      // for (int i = 1; i <= n; i++) {
      //     // Left half
      //     for (int j = 1; j <= i; j++) {
      //         cout << "* ";
      //     }
      //     // Spaces
      //     int space = 2 * (n - i);
      //     for (int j = 1; j <= space; j++) {
      //         cout << "  ";
      //     }
      //     // Right half
      //     for (int j = 1; j <= i; j++) {
      //         cout << "* ";
      //     }
      //     cout << endl;
      // }

      // // Lower half
      // for (int i = n; i >= 1; i--) {
      //     // Left half
      //     for (int j = 1; j <= i; j++) {
      //         cout << "* ";
      //     }
      //     // Spaces
      //     int space = 2 * (n - i);
      //     for (int j = 1; j <= space; j++) {
      //         cout << "  ";
      //     }
      //     // Right half
      //     for (int j = 1; j <= i; j++) {
      //         cout << "* ";
      //     }
      //     cout << endl;
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

  /* Numeric Holloe Half Pyramid
   1
   1 2
   1   3
   1     4
   1 2 3 4 5
  */
  // int n;
  //  cin>>n;
  //  for(int i=0;i<n;i++){
  //    for(int j=0;j<i+1;j++){
  //      if(j==0 || j==i || i==n-1){
  //        cout<<j+1;
  //      }
  //      else{
  //        cout<<" ";
  //      }
  //    }
  //    cout<<endl;
  //  }

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

  /*Numeric Hollow Inverted Half pyramid
  1 2 3 4 5
  2     5
  3   5
  4 5
  5
 */

  // int n;
  // cin>>n;
  // for (int i=0;i<n;i++){
  //   for(int j=i+1;j<=n;j++){
  //     if(j==i+1 || j==n || i==0){
  //     cout<<j;
  //     }
  //     else{
  //       cout<<" ";
  //     }
  //   }
  //   cout<<endl;
  // }

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

  /*Numeric palindrome equilateral pyramid
             1
          1  2  1
       1  2  3  2  1
    1  2  3  4  3  2  1
 1  2  3  4  5  4  3  2  1
  */

  // int n;
  // cin>>n;
  // int k=n;
  // for(int i=0;i<n;i++){
  //   int c=1;
  //   for(int j=0;j<k;j++){
  //     if(j<n-i-1){
  //     cout<<" ";
  //     }
  //     else{
  //       cout<<c;
  //       c++;
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

  /*
  1
  2 3
  4 5 6
  7 8 9 10
  11 12 13 14 15
  16 17 18 19 20 21
  22 23 24 25 26 27 28
  */

  // int n;
  // cin>>n;
  // int c=1;
  // for(int i=0; i<n; i++){
  //   for(int j=0;j<=i;j++){
  //     cout<<c;
  //     c++;
  //   }
  //   cout<<endl;
  // }

  /*  pascal triangle
         1
        1 1
       1 2 1
      1 3 3 1
     1 4 6 4 1
    1 5 10 10 5 1
  1 6 15 20 15 6 1
  */

  // int n;
  // cin>>n;
  // for(int i=1;i<=n;i++){
  //   int C=1;
  //   for(int j=1;j<=i;j++){
  //     cout<<C<<" ";
  //     C=C*(i-j)/j;
  //   }
  //   cout<<endl;
  // }
}

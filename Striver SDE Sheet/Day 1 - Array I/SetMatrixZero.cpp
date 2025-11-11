// better approach than previous Array/Medium/SetMatrix0 problem but time complexity is there
// TC = O(N x M)
// SC = O(N+M)

// void setZeroes(vector<vector<int>>& matrix) {

//         int n = matrix.size();
//         int m = matrix[0].size();

//         vector<int> row(n,0);
//         vector<int> column(m,0);

//         for(int i=0 ; i<n ; i++){
//             for(int j =0 ; j<m ; j++){
//                 if(matrix[i][j]==0){
//                     row[i]=1;
//                     column[j]=1;
//                 }
//             }
//         }

//         for(int i=0 ; i<n ; i++){
//             for(int j =0 ; j<m ;j++){
//                 if(row[i]==1 || column[j]==1){
//                     matrix[i][j]=0;
//                 }
//             }
//         }
//     }

// Optimal Approach

// TC = O(N x M )
// SC = O(1)

// void setZeroes(vector<vector<int>>& matrix) {

//         int n = matrix.size();
//         int m = matrix[0].size();

// // in this instead of taking an seperate arrays to mark rows and columns
// // we simply taken the first row and first column as markers
//         // int row[n]={0}; ===> matrix[...][0]
//         // int col[m]={0}; ===> matrix[0][...]

//         int col0=1; // taken for handling the common row and column intersection
//         for(int i =0 ; i<n ; i++){
//             for(int j =0 ; j<m ;j++){
//                 if(matrix[i][j]==0){
//                     matrix[i][0]=0; // marking the i-th row no as 0
//                     if(j!=0){
//                         matrix[0][j]=0; // marking the j-th col no as 0
//                     }
//                     else {
//                         col0 = 0;
//                     }

//                 }
//             }
//         }

//         // now convert the values into 0 based on the marked rows and columns
//         for(int i =1 ; i <n ;i++){
//             for(int j =1 ; j<m ;j++){
//                 if(matrix[i][j]!=0){
//                     // now check whether the following row or column is marked or not
//                     if(matrix[i][0]==0 || matrix[0][j]==0){
//                         matrix[i][j]=0;
//                     }
//                 }
//             }
//         }

//         // now mark the first row and column

//         if(matrix[0][0]==0){
//             for(int j = 0 ;j<m ;j++){
//                 matrix[0][j]=0;
//             }
//         }

//         if(col0==0){
//             for(int i=0 ;i <n ;i++){
//                 matrix[i][0]=0;
//             }
//         }
//     }
// In this , set each and every row and column as 0 if it contains any 0
/*

1 1 1     =>  1 0 1
1 0 1         0 0 0
1 1 1         1 0 1

or

0 1 1 0     => 0 0 0 0
1 1 1 1        0 1 1 0
1 1 1 1        0 1 1 0
1 1 1 1        0 1 1 0
*/

/*
Brute Force Approach
TC: O((nxm)x(n+m)+(nxm)) =>O(n^3)
SC: O()

 void markRow(int i , int m, vector<vector<int>>& matrix){
        for(int j=0 ;j<m; j++){
            if(matrix[i][j]!=0){
                matrix[i][j]=-1;
            }
        }
    }
     void markCol(int j , int n, vector<vector<int>>& matrix){
        for(int i=0 ;i<n; i++){
            if(matrix[i][j]!=0){
                matrix[i][j]=-1;
            }
        }
    }
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();


        for(int i=0 ; i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    markRow(i,m,matrix);
                    markCol(j,n,matrix);
                }
            }
        }

        for(int i=0 ; i<n ; i++){
            for(int j=0 ;j<m ; j++){
                if(matrix[i][j]==-1){
                    matrix[i][j]=0;
                }
            }
        }

    }


Optimal Approach


*/
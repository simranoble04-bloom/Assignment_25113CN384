#include <bits/stdc++.h>
using namespace std;

void inputMatrix(vector <vector<int>>& mat, int row, int col){
    mat.resize(row, vector<int>(col));

    for(int i=0; i<row; i++){
        cout<<"Enter row "<<i<<" elements: ";
        for(int j=0; j<col; j++){
            cout<<"Enter matrix["<<i<<", "<<j<<"]: ";
            cin>>mat[i][j];
        }
    }
}

void printMatrix(vector <vector<int>> mat){
    int row = mat.size();
    int col = mat[0].size();

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<mat[i][j]<<" ";
        }cout<<"\n";
    }
}

//Q77. Write a program to Multiply matrices.
vector <vector<int>> mtrxMltplctn(vector <vector<int>> mat1, vector <vector<int>> mat2){
    int r1 = mat1.size(), c1 = mat1[0].size();
    int r2 = mat2.size(), c2 = mat2[0].size();

    if(c1 != r2){
        cout<<"\nMultiplication is not possible in this matrix!\n";
        return {};
    }

    vector <vector<int>> ansMat(r1, vector <int> (c2));

    for(int i=0; i<r1; i++){
        for(int j=0; j<c2; j++){
            ansMat[i][j] = 0;
            for(int k=0; k<c1; k++){
                ansMat[i][j] += mat1[i][k]*mat2[k][j];
            }
        }
    }

    return ansMat;
}

//Q78. Write a program to Check symmetric matrix.
vector <vector<int>> transposeMatrix(const vector <vector<int>>& mat){
    int row = mat.size();
    int col = mat[0].size();

    vector <vector<int>> ans(col, vector <int>(row));

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            ans[j][i] = mat[i][j];
        }
    }

    return ans;
}

bool isSymmetric(vector <vector<int>> mat){
    int row = mat.size();
    int col = mat[0].size();

    if(row != col){
        cout<<"\nOnly square matrix acn be symmetric!\nPass a valid matrix...\n";
        return false;
    }

    vector <vector<int>> ans = transposeMatrix(mat);

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(ans[i][j] != mat[i][j]){
                return false;
            }
        }
    }

    return true;
}

//Q79. Write a program to Find row-wise sum.
vector <int> rowSum(const vector <vector<int>>& mat){
    int row = mat.size();
    int col = mat[0].size();

    vector <int> ans_rowSum(row, 0);

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            ans_rowSum[i] += mat[i][j];
        }
    }

    return ans_rowSum;
}

//Q80. Write a program to Find column-wise sum.
vector <int> colSum(const vector <vector<int>>& mat){
    int row = mat.size();
    int col = mat[0].size();

    vector <int> ans_rowSum(col, 0);

    for(int i=0; i<col; i++){
        for(int j=0; j<row; j++){
            ans_rowSum[i] += mat[i][j];
        }
    }

    return ans_rowSum;
}

int main(){

    vector <vector<int>> mat1;
    inputMatrix(mat1, 2, 2);

    vector <vector<int>> mat2;
    inputMatrix(mat2, 2, 2);

    vector <vector<int>> ansMat;

    //Q77.
    ansMat = mtrxMltplctn(mat1, mat2);
    printMatrix(ansMat);

    //Q78.
    cout<<isSymmetric(mat1);

    //Q79.
    vector <int> sumRow = rowSum(mat1);
    for(int val : sumRow){
        int i=0;
        cout<<"Row "<<i<<"sum: "<<val<<" ";
        i++;
    }cout<<"\n";

    //Q80.
    vector <int> sumCol = colSum(mat1);
    for(int val : sumCol){
        int i=0;
        cout<<"Column "<<i<<"sum: "<<val<<" ";
        i++;
    }cout<<"\n";

    return 0;
}

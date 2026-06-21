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

//Q73 Write a program to Add matrices.
vector <vector<int>> addMatrix(const vector <vector<int>>& mat1, int row1, int col1,
                               const vector <vector<int>>& mat2, int row2, int col2)
{  
    if(row1!=row2 || col1!=col2){
        cout<<"\nAddition is possible only on square matrices\n";
        return {};
    }
    
    vector <vector<int>> ans(row1, vector<int>(col1));

    for(int i=0; i<row1; i++){
        for(int j=0; j<col1; j++){
            ans[i][j] = mat1[i][j]+mat2[i][j];
        }
    }

    return ans;
}

//Q74 Write a program to Subtract matrices. 
vector <vector<int>> subtractMatrix(const vector <vector<int>>& mat1, int row1, int col1,
                               const vector <vector<int>>& mat2, int row2, int col2)
{  
    if(row1!=row2 || col1!=col2){
        cout<<"\nSubtraction is possible only on square matrices\n";
        return {};
    }
    
    vector <vector<int>> ans(row1, vector<int>(col1));

    for(int i=0; i<row1; i++){
        for(int j=0; j<col1; j++){
            ans[i][j] = mat1[i][j]-mat2[i][j];
        }
    }

    return ans;
}

//Q75 Write a program to Transpose matrix.
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

//Q76 Write a program to Find diagonal sum.
int diagonalSum(vector <vector<int>> mat){
    int row = mat.size();
    int col = mat[0].size();

    if(row != col){
        cout<<"\nDiagonal is present only in square matrix!\n";
        return;
    }

    int res=0;

    for(int i=0; i<row; i++){
        res+=mat[i][i]; //primary diagonal (i=j)
        if(i!=row-i-1){ //secondary diagonal (j = col-i-1)
            res+=mat[i][row-i-1];
        }
    }

    return res;
}

int main(){

    vector <vector<int>> mat1;
    inputMatrix(mat1, 2, 2);

    vector <vector<int>> mat2;
    inputMatrix(mat2, 2, 2);

    vector <vector<int>> ansMat;

    //Q73.
    ansMat = addMatrix(mat1, 2, 2, mat2, 2, 2);
    printMatrix(ansMat);

    //Q74.
    ansMat = subtractMatrix(mat1, 2, 2, mat2, 2, 2);
    printMatrix(ansMat);

    //Q75. 
    ansMat = transposeMatrix(mat1);
    printMatrix(ansMat);

    //Q76.
    cout<<diagonalSum(mat1)<<endl;
    
    
    return 0;
}

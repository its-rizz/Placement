// Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.

// You must do it in place.

#include<iostream>
using namespace std;


void showMatrix(vector<vector<int>> &matrix)
{
    for(int i=0;i<matrix.size();i++)
    {
        for(int j=0;j<matrix[0].size();j++)
            cout<<matrix[i][j]<<" ";
        cout<<endl;
    }
}

void setZeroes(vector<vector<int>>& matrix)
{

    bool firstRow=false;
    bool firstCol=false;

    //Check if the first row has zero
    for(int i=0;i<matrix[0].size();i++)
        if(matrix[0][i]==0) firstRow=true;
    
    //Check if the first column has zero
    for(int i=0;i<matrix.size();i++)
        if(matrix[i][0]==0) firstCol=true;
    
    //Traverse each element from first row and the first column
    //Mark each row and column as 0
    for(int i=1;i<matrix.size();i++)
    {
        for(int j=0;j<matrix[0].size();j++)
        {
            //Current Element is 0 then mark its row and column
            if(matrix[i][j]==0)
            {
                matrix[i][0]=0; //Row number
                matrix[0][j]=0; //Column Number
            }
        }
    }

    //Resolve column
    for(int i=1;i<matrix[0].size();i++)
    {
        if(matrix[0][i]==0)  //Current column marked 0
        {
            //make the whole column 0
            for(int j=0;j<matrix.size();j++)
                matrix[j][i]=0;

        }
    }

    //Resolve Row
    for(int i=1;i<matrix.size();i++)
    {
        if(matrix[i][0]==0) //Current Row is 0
        {
            //Make the whole row 0
            for(int j=0;j<matrix[0].size();j++)
                matrix[i][j]=0;
        }
    }

    //If the first Row has zero make all zero
    if(firstRow)
    {
        for(int i=0;i<matrix[0].size();i++)
            matrix[0][i]=0;
    }

    //If the first column is 0 make all zero
    if(firstCol)
    {
        for(int i=0;i<matrix.size();i++)
            matrix[i][0]=0;
    }


}

int main()
{
    int m,n; cin>>m>>n;
    vector<vector<int>> matrix;

    for(int i=0;i<m;i++)
    {
        vector<int> temp;
        for(int j=0;j<n;j++)
        {
            int a; cin>>a;
            temp.push_back(a);
        }
        matrix.push_back(temp);
    }

    cout<<matrix.size()<<endl;
    cout<<matrix[0].size()<<endl;

    showMatrix(matrix);
    setZeroes(matrix);
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

 void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        int col=1;
        for(int i=0;i<n;++i){
            if(matrix[i][0]==0){
            col=0;
            break;
            }
        }
        for(int i=1;i<m;++i){
            if(matrix[0][i]==0){
                matrix[0][0]=0;
                break;
            }
        }
        for(int i=1;i<n;++i){
            for(int j=1;j<m;++j){
                if(matrix[i][j]==0){
                    matrix[i][0]=matrix[0][j]=0;
                }
            }
        }
        for(int i=1;i<n;++i){
            for(int j=1;j<m;++j){
                if(matrix[i][0]==0||matrix[0][j]==0)
                matrix[i][j]=0;
            }
        }
        for(int i=1;i<m;++i){
            if(matrix[0][0]==0){
                matrix[0][i]=0;
            }
        }
        for(int i=0;i<n;++i){
            if(col==0){
                matrix[i][0]=0;
            }
        }

        }

    int main(){
        vector<vector<int>> matrix;
        int n,m;
        cin>>n>>m;
        for(int i=0;i<n;++i){
            vector<int> temp;
            for(int j=0;j<m;++j){
                int a;
                cin>>a;
                temp.push_back(a);
            }
            matrix.push_back(temp);
        }
        setZeroes(matrix);
        for(int i=0;i<n;++i){
            for(int j=0;j<m;++i){
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }

        return 0;
    }
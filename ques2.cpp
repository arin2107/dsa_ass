#include<iostream>
#include<vector>
using namespace std;
class sparse_matrix
{
    public:
    vector<int> rows;
    vector<int> columns;
    vector<int> value;
    sparse_matrix()
    {
        rows={};
        columns={};
        value={};
    }
    void add_two_sparse_matrices(sparse_matrix s2)
    {
        int i=0;
        for(int i=0;i<s2.value.size();i++)
        {
            value[i]=value[i]+s2.value[i];
            cout<<value[i]<<endl;
        }
    }
    void transpose_of_a_sparse_matrix()
    {
        vector<int> vec=rows;
        rows=columns;
        columns=vec;
    }
   sparse_matrix multiply(sparse_matrix s2)
   {
    sparse_matrix s3;
    vector<int> new_value(value.size());
    s3.columns=columns;
    s3.rows=rows;
    for(int i=0;i<rows.size();i++)
    {
        if(columns[i]!=0 and s2.rows[i]!=0)
        s3.value[i]=columns[i]*s2.rows[i];
    }
    return s3;
   }

};
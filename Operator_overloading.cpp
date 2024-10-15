#include<iostream>
using namespace std;
class Matrix
{
    int a[3][3];
public:
    void accept()
     {
         cout<<"\n Enter Matrix Element (3x3) : \n";
         for(int i=0;i<3;i++){
         {
             for(int j=0;j<3;j++)
                cin>>a[i][j];
         }
         }
     }

    void display()
    {
         for(int i=0;i<3;i++){
                cout<<"\n";
          for(int j=0;j<3;j++){
            cout<<a[i][j]<<"\t";
             }
    }
    }

  Matrix operator+(Matrix m)
  {
       Matrix temp[3][3];
      for(int i=0;i<3;i++){
            cout<<"\n";
         {
             for(int j=0;j<3;j++)
                temp[i][j] = a[i][j] + m.a[i][j];
         }
      }
      return temp;

  }
    int (const Matrix &m)
    {
        cout<<"copy constructor called"<<endl;
        int  temp;
        temp.a[i][j] = a[i][j] + m.a[i][j];
        return  temp;
    }
    Matrix()
    {
        cout<<"default called"<<endl;
    }


};
int main()
{
    Matrix m1,m2;
    m1.accept();
    m2.accept();
    cout<<"\nFirst Matrix  :\n";
    m1.display();
    cout<<"\n\nSecond Matrix :\n";
    m2.display();
    Matrix m3 = m1+m2;
    cout<<"\n\nAddition of Matrix :\n";
    m3.display();
    return 0;
}



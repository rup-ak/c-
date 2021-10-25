#include <iostream>
#include <stdlib.h>

using namespace std;

double mat1 [10] [10];
double mat2 [10][10];
double add_m[10][10] = {{0}};
double sub_m[10][10] = {{0}};
double mul_m[10][10] = {{0}};

int i,j,k,r1,r2,c1,c2;
double mat1in ();
double mat2in ();
double add (),sub (), mul (), matrix_both();

int main()
{
    int choice;

    cout<< "Enter the dimension of 1st array (r*c) :\n";
    cin>>r1>>c1;
    cout<< "Enter the dimension of 2nd array (r*c) :\n";
    cin>>r2>>c2;

    mat1in();
    mat2in();
    system("cls");
    matrix_both();
    cout<< "What do you want to do?\n 1.Matrix Addition\n 2.Matrix Substructions\n 3.Matrix Multiplication\n>>>>>";
    cin>>choice;

    if(choice==1)
    {

        add();
    }
    else if (choice==2)
    {

        sub();
    }
    else if (choice==3)
    {

        mul();
    }
    else
    {
        cout<< "Invalid";
    }
    return 0;
}

double mat1in()
{
    cout<<"Enter the value of 1st Matrix: \n";
    for (i=0; i<r1; i++)
    {
        for (j=0; j<c1; j++)
        {
            cout<<i+1<<"*"<<j+1<<" = ";
            cin>>mat1[i][j];
        }
    }
    cout<<"output : \n";
    for (i=0; i<r1; i++)
    {
        for (j=0; j<c1; j++)
        {
            cout<<mat1[i][j];
            cout<< "\t";
        }
        cout<< "\n";

    }
    cout<< "\n\n";
    return 0;

}
double mat2in()
{
    cout<<"Enter the value of 2nd matrix: \n";

    for (i=0; i<r2; i++)
    {
        for (j=0; j<c2; j++)
        {
            cout<<i+1<<"*"<<j+1<<" = ";
            cin>>mat2[i][j];
        }
    }
    cout<<"output : \n";
    for (i=0; i<r2; i++)
    {
        for (j=0; j<c2; j++)
        {
            cout<<mat2[i][j];
            cout<< "\t";
        }
        cout<< "\n";

    }
    cout<< "\n\n";
    return 0;

}
double matrix_both (){
    cout<<"The 1st matrix is : \n";
     for (i=0; i<r1; i++)
    {
        for (j=0; j<c1; j++)
        {
            cout<<mat1[i][j];
            cout<< "\t";
        }
        cout<< "\n";

    }
    cout<< "\n\n";

    cout<<"and the 2nd matrix is : \n";
     for (i=0; i<r2; i++)
    {
        for (j=0; j<c2; j++)
        {
            cout<<mat2[i][j];
            cout<< "\t";
        }
        cout<< "\n";

    }
    cout<< "\n\n";
    return 0;
}
double add ()
{

    if((r1==r2)&&(c1==c2))
    {
        for (i=0; i<r1; i++)
        {
            for (j=0; j<c1; j++)
            {
                add_m[i][j]= mat1[i][j] + mat2[i][j];
            }
        }
    }
    else
    {
        cout<<"\n\nThe summation of 1st and 2nd matrix doesn't exist or undefined!\n\n";
        return 0;
    }
    cout<<"The summation result is: \n";
    for (i=0; i<r1; i++)
    {
        for (j=0; j<c1; j++)
        {
            cout<<add_m[i][j];

        }
    }
    return 0;
}

double sub ()
{

    if((r1==r2)&&(c1==c2))
    {
        for (i=0; i<r1; i++)
        {
            for (j=0; j<c1; j++)
            {
                sub_m[i][j]=mat1[i][j]+mat2[i][j];
            }
        }
    }
    else
    {
        cout<<"\n\nThe substruction of 1st and 2nd matrix doesn't exist or undefined!!\n\n";
        return 0;
    }
    cout<<"The substruction result is :\n";
    for (i=0; i<r1; i++)
    {
        for (j=0; j<c1; j++)
        {
            cout<<sub_m[i][j];

        }
    }
    return 0;
}
double mul ()
{

    if((r1==c2)&&(c1==r2))
    {
        for(i=0; i<r1; i++)
        {
            for(j=0; j<c2; j++)
            {

                for(k=0; k<c1; k++)
                {
                    mul_m[i][j]+=mat1[i][k]*mat2[k][j];
                }
            }
        }
    }
    else
    {
        cout<<"\n\nThe Multiplication of 1st and 2nd matrix doesn't exist or undefined!!\n\n";
        return 0;
    }
    cout<<"The Multiplication result is: \n";
    for (i=0; i<r1; i++)
    {
        for (j=0; j<c2; j++)
        {
            cout<<mul_m[i][j]<<"\t";

        }
        cout<<"\n";
    }
    cout<< "\n";
    return 0;
}

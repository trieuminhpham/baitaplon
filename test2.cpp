#include <iostream>
#include <string.h>

struct Product{
    int mssp  ;
    char name[20] ;
};

void _init(Product **&a , int row)
{
    a = new Product *[row] ;

    for(int i=0 ; i<row ; i++)
        a[i] = new Product[2] ;
}

void del(Product **a , int row)
{
    for(int i=0 ; i<row ; i++)
        delete [] a[i] ;

    delete [] a ;
}

void Output(Product **&a , int row)
{
    for(int i=0 ; i<row ; i++)
    {
        for(int j=0 ; j<1 ; j++)
            std::cout<<"The name of product : "<<a[i][j].name<<"MSSP : "<<a[i][j].mssp ;

        std::cout<<"\n" ;
    }
}

void Input(Product **&a , int row)
{
    for(int i=0 ; i<row ; i++)
    {
        for(int j=0 ; j<1 ; j++)
        {
            std::cout<<"Enter the name of product :" ;
            std::cin.ignore() ;
            fgets(a[i][j].name , 20 , stdin) ;
            std::cout<<"Enter the code of product :" ;
            std::cin>>a[i][j].mssp ;
        }
    }
}

int main()
{
    //                   _ooOoo_
    //                  o8888888o
    //                  88" . "88
    //                  (| -_- |)
    //                  O\  =  /O
    //               ____/`---'\____
    //             .'  \\|     |//  `.
    //            /  \\|||  :  |||//  \
    //           /  _||||| -:- |||||-  \
    //           |   | \\\  -  /// |   |
    //           | \_|  ''\---/''  |   |
    //           \  .-\__  `-`  ___/-. /
    //         ___`. .'  /--.--\  `. . __
    //      ."" '<  `.___\_<|>_/___.'  >'"".
    //     | | :  `- \`.;`\ _ /`;.`/ - ` : | |
    //     \  \ `-.   \_ __\ /__ _/   .-` /  /
    //======`-.____`-.___\_____/___.-`____.-'======
    //                   `=---='
    //^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

    int row ;

    std::cout<<"Enter the numrow : " ;
    std::cin>>row ;

    Product **arr = new Product *[row] ;

    _init(arr , row) ;
    Input(arr  , row) ;
    Output(arr , row) ;
    del(arr , row) ;

    return 0;
}

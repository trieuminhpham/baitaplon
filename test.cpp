#include <iostream>

/* Mảng 2 chiều */
// Hàm khởi tạo
void __init(int **&arr , int &row , int &col)
{
    arr = new int *[row] ;

    for(int i=0 ; i<row ; i++)
        arr[i] = new int [col] ;
}

// Hàm thu hồi
void del(int **&arr , int &row , int &col)
{
    for(int i=0 ; i<row ; i++)
        delete[] arr[i] ;

    delete[] arr ;
}

// Hàm hiển thị
void Output(int **&arr , int &row , int &col)
{
    for(int i=0 ; i<row ; i++)
    {
        for(int j=0 ; j<col ; j++)
        {
            printf("%d " , arr[i][j]) ;
        }
        printf("\n") ;
    }
}

// Hàm nhập giá trị
void Input(int **&arr , int &row , int &col)
{
    for(int i=0 ; i<row ; i++)
    {
        for(int j=0 ; j<col ; j++)
            scanf("%d" , &arr[i][j]) ;
    }
}

// Hàm tính tổng các giá trị
int sum(int **&arr , int &row , int &col)
{
    int Sum = 0 ;

    for(int i=0 ; i<row ; i++)
    {
        for(int j=0 ; j<col ; j++)
            Sum += arr[i][j] ;
    }

    return Sum ;
}

// Hàm tính tổng trên hàng chẵn
int sum_even(int **&arr , int &row , int &col)
{
    int Sum_even = 0 ;

    for(int i=0 ; i<row ; i++)
    {
        for(int j=0 ; j<col ; j++)
        {
            if(i%2 == 0)
                Sum_even += arr[i][j] ;
        }
    }

    return Sum_even ;
}

// Hàm tính tổng trên hàng lẻ
int sum_odd(int **&arr , int &row , int &col)
{
    int Sum_odd = 0 ;

    for(int i=0 ; i<row ; i++)
    {
        for(int j=0 ; j<col ; j++)
        {
            if(i%2 != 0)
                Sum_odd += arr[i][j] ;
        }
    }

    return Sum_odd ;
}

// Hàm tìm giá trị lớn nhất
int Max(int **&arr , int &row , int &col)
{
    int _Max = arr[0][0] ;

    for(int i=0 ; i<row ; i++)
    {
        for(int j=0 ; j<col ; j++)
        {
            if(_Max <= arr[i][j])
                _Max = arr[i][j] ;
        }
    }

    return _Max ;
}

// Hàm tìm giá trị nhỏ nhất
int Min(int **&arr , int &row , int &col)
{
    int _Min = arr[0][0] ;

    for(int i=0 ; i<row ; i++)
    {
        for(int j=0 ; j<col ; j++)
        {
            if(_Min >= arr[i][j])
                _Min = arr[i][j] ;
        }
    }

    return _Min ;
}

// Hàm tìm giá trị lớn nhất trên cột thứ c
int Max_in_col_c(int **&arr , int &row , int &col , int &col_c)
{
    int _Max_in_col_c = 0 ;

    for(int i=0 ; i<row ; i++)
    {
        if(_Max_in_col_c <= arr[i][col_c])
            _Max_in_col_c = arr[i][col_c] ;
    }

    return _Max_in_col_c ;
}

/* Con trỏ hàm */
void Swap(int &a , int &b)
{
    int temp = a ;
    a = b ;
    b = temp ;
}

bool Selection_Sort_Acs(int &a , int &b)
{
    return a>b ;
}

bool Selection_Sort_Dcs(int &a , int &b)
{
    return a<b ;
}

typedef bool(*Comparative)(int , int)

void Selection_Sort(int &arr , int n , Comparative compare)
{
    int find_index ;

    for(int i=0 ; i<n-1 ; i++)
    {
        find_index = i ;
        for(int j=i+1 ; j<n ; j++)
        {
            if(compare(arr[find_index],arr[j]))
                find_index = j ;
        }

        Swap(arr[find_index] , arr[i]) ;
    }
}
int main()
{
    /*Mảng 2 chiều */
    /*int row , col , col_c;
    int **arr ;

    printf("Enter the row : ") ;
    scanf("%d" , &row) ;
    printf("Enter the column : ");
    scanf("%d" , &col) ;
    printf("Enter the col_c : ") ;
    scanf("%d" , &col_c) ;

    __init(arr,row,col) ;
    Input(arr,row,col) ;
    Output(arr,row,col) ;

    printf("\n") ;

    printf("Tong cac gia tri cua mang 2 chieu la : %d \n", sum(arr,row,col)) ;
    printf("Tong cac gia tri tren hang chan cua mang 2 chieu la : %d \n", sum_even(arr,row,col)) ;
    printf("Tong cac gia tri tren hang le cua mang 2 chieu la : %d \n", sum_odd(arr,row,col)) ;
    printf("Gia tri lon nhat tren mang 2 chieu la : %d \n", Max(arr,row,col)) ;
    printf("Gia tri nho nhat tren mang 2 chieu la : %d \n", Min(arr,row,col)) ;
    printf("Gia tri lon nhat tren cot %d cua mang 2 chieu la : %d", col_c,Max_in_col_c(arr,row,col,col_c)) ;

    del(arr,row,col) ;*/

    /* Con trỏ hàm */
    int arr[] = {64,25,12,22,11} ;
    int n = sizeof(arr)/sizeof(int) ;

    // Sắp xếp tăng
    Selection_Sort()
    return 0;
}

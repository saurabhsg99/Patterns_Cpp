#include <iostream>
#include <iomanip>
#define N 11
using namespace std;

void butterfly(int n)
{
     for (int i = 1; i <= n; i++)
     {
          for (int j = 1; j <= n; j++)
          {
               if (i <= n / 2)
               {
                    if (j > i && j <= n - i)
                         cout << "  ";
                    else
                         cout << "* ";
               }
               else
               {
                    if (j <= n + 1 - i || j >= i)
                         cout << "* ";
                    else
                         cout << "  ";
               }
          }
          cout << endl;
     }
}

void Pyramid1(int n)
{
     int k;
     for (int i = 1; i <= n; i++)
     {
          k = 1;
          for (int j = 1; j <= 2 * n - 1; j++)
          {
               if (j > n - i && j < n + i)
               {
                    cout << k++ << " ";
               }
               else
                    cout << "  ";
          }
          cout << endl;
     }
}

void Pyramid2(int n)
{
     for (int i = 0; i < n; i++)
     {
          for (int j = 0; j < n - i; j++)
               cout << " ";
          for (int j = 1; j <= i + 1; j++)
               cout << "* ";
          cout << endl;
     }
}
void Pyramid22(int n)
{
     for (int i = 0; i < n; i++)
     {
          for (int j = 0; j < n; j++)
          {
               if (j < n - i - 1)
                    cout << " ";
               else
                    cout << "* ";
          }
          cout << endl;
     }
}

void inverted_Pyramid2(int n)
{
     for (int i = 1; i <= n; i++)
     {
          for (int j = 1; j <= n; j++)
          {
               if (j < i)
                    cout << "  ";
               else
                    cout << "*   ";
          }
          cout << endl;
     }
}

void NumericPyramid(int n)
{
     int k = 0;
     for (int i = 0; i < n; i++)
     {
          for (int j = 1; j <= 2 * n - 1; j++)
          {
               if (j == n - i && i != n - 1)
                    cout << "1 ";
               else if (j == n + i)
                    cout << i + 1;
               else if (i == n - 1)
               {
                    cout << ++k << "   ";
                    j++;
               }
               else
                    cout << "  ";
          }
          cout << endl;
     }
}

void Pallindromic_Pyramid(int n)
{
     for (int i = 1; i <= n; i++)
     {
          int k = 1;
          for (int j = 1; j <= 2 * n - 1; j++)
          {
               if (j > n - i && j < n + i)
               {
                    // cout << k << " ";
                    printf("%3d", k);
                    j >= n ? k-- : k++;
               }
               else
                    cout << "   ";
          }
          cout << endl;
     }
}

void Even0Pyramid(int n)
{
     for (int i = 0; i < n; i++)
     {
          for (int j = 1; j < 5 - i; j++)
               printf("  ");
          for (int j = 0; j <= i; j++)
          {
               if ((i + j) % 2 == 0)
                    cout << "1 ";
               else
                    cout << "0 ";
          }
          cout << endl;
     }
}

void Even0Pyramid2(int n)
{
     for (int i = 0; i < n; i++)
     {
          for (int j = 0; j <= i; j++)
          {
               if ((i + j) % 2 == 0)
                    cout << "1 ";
               else
                    cout << "0 ";
          }
          cout << endl;
     }
}

void Even0Pyramid3(int n)
{
     for (int i = 0; i < n; i++)
     {
          for (int j = 1; j <= 2 * n - 1; j++)
          {
               if (j > n - i - 1 && j < n + 1 + i)
               {
                    if ((i + j) % 2 == 0)
                         cout << "1 ";
                    else
                         cout << "0 ";
               }
               else
                    cout << "  ";
          }
          cout << endl;
     }
}

void Even0Pyramid4(int n)
{
     for (int i = 0; i < n; i++)
     {
          for (int j = 1; j <= 2 * n - 1; j++)
          {
               if (j > n - i - 1 && j < n + 1 + i)
               {
                    if ((i + j) % 2 != 0)
                         cout << "1 ";
                    else
                         cout << "0 ";
               }
               else
                    cout << "  ";
          }
          cout << endl;
     }
}

void arrow(int n)
{
     for (int i = 1; i <= n; i++)
     {
          for (int j = 1; j <= 2 * n + 2; j++)
          {
               if (j < n + 1 - i)
                    cout << "  ";
               else if (j < n + 1)
               {
                    if ((i + j) % 2 == 0)
                         cout << "1 ";
                    else
                         cout << "0 ";
               }
               else if (j > n && j < n + 3)
                    cout << "  ";
               else if (j > n + 2 && j < 2 * n - 3 + i)
               {
                    if ((i + j) % 2 != 0)
                         cout << "1 ";
                    else
                         cout << "0 ";
               }
          }
          cout << endl;
     }
     for (int i = 0; i < n + 1; i++)
     {
          for (int j = 0; j <= 2 * n + 1; j++)
          {
               if (j <= i || j > 2 * n - i)
               {
                    if ((i + j) % 2 == 0)
                         cout << "1 ";
                    else
                         cout << "0 ";
               }
               else
                    cout << "  ";
          }
          cout << endl;
     }
}
void arrow2(int n)
{
     for (int i = 1; i <= n; i++)
     {
          for (int j = 1; j <= 2 * n + 2; j++)
          {
               if (j < n + 1 - i)
                    cout << "  ";
               else if (j < n + 1)
               {
                    if ((i + j) % 2 == 0)
                         cout << "  ";
                    else
                         cout << "  ";
               }
               else if (j > n && j < n + 3)
                    cout << "* ";
               else if (j > n + 2 && j < 2 * n - 3 + i)
               {
                    if ((i + j) % 2 != 0)
                         cout << "  ";
                    else
                         cout << "  ";
               }
          }
          cout << endl;
     }
     for (int i = 0; i < n + 1; i++)
     {
          for (int j = 0; j <= 2 * n + 1; j++)
          {
               if (j <= i || j > 2 * n - i)
               {
                    if ((i + j) % 2 == 0)
                         cout << "  ";
                    else
                         cout << "  ";
               }
               else
                    cout << "* ";
          }
          cout << endl;
     }
}

void starpattern(int n)
{
     int k = 1;
     int m = (n % 2 == 0) ? n / 2 : (n / 2 + 1);
     for (int i = 1; i <= n; i++)
     {

          for (int j = 1; j <= n; j++)
          {
               if ((n % 2 == 0 && i == n / 2) || i == n / 2 + 1 || j == m + 1 - k || j == m || j == m - 1 + k)
               {
                    cout << "# ";
               }
               else
                    cout << "  ";
          }
          cout << endl;
          (i < n / 2 + 1) ? k++ : k--;
     }
}

void inDiamond(int n)
{
     int k = 1;
     for (int i = 1; i <= n; i++)
     {
          if (i == 6)
               k = 5;
          for (int j = 1; j <= n + 1; j++)
          {
               if (j > n / 2 + 1 - k && j < n / 2 + 1 + k)
               {
                    cout << " ";
               }
               else
                    cout << "*";
          }
          i < 5 ? k++ : k--;
          cout << endl;
     }
}

void diamond(int n)
{
     int k = 0;
     for (int i = 1; i <= n; i++)
     {
          for (int j = 1; j <= n; j++)
          {
               if (j < n - 2 * k)
                    cout << " ";
               else
                    cout << "*";
          }
          i < (n / 2 + 1) ? k++ : k--;
          cout << endl;
     }
}

void pattern(int n)
{
     for (int i = 1; i <= n; i++)
     {
          if (i == 1)
               cout << "* * * " << endl;
          else if (i == 5 || i == 6)
          {
               for (int j = 0; j < 6; j++)
                    cout << "* ";
               cout << endl;
          }
          else if (i > 9 && i <= 12)
          {
               for (int j = 0; j < 9; j++)
                    cout << "* ";
               cout << endl;
          }
          else
               cout << "*" << endl;
     }
}

void pattern2(int n)
{
     for (int i = 1; i <= n; i++)
     {
          if (i == 1)
               cout << "* * ";
          else if (i == 5 || i == 6)
          {
               for (int j = 1; j <= 2; j++)
                    cout << "* * ";
          }
          else if (i >= 10 && i <= 12)
          {
               for (int j = 1; j <= 3; j++)
                    cout << "* * ";
          }
          else
               cout << "* ";
          cout << endl;
     }
}

void pattern3(int n)
{
     int k = 1;
     for (int i = 1; i <= n; i++)
     {
          if (i % 2 != 0)
          {
               for (int j = 1; j <= k; j++)
                    cout << "* * * * ";
               k += 1;
          }
          else
          {
               for (int j = 1; j <= k; j++)
                    cout << "* ";
          }
          cout << endl;
     }
}

void pattern4(int n)
{
     for (int i = 1; i <= n; i++)
     {
          for (int j = 1, k = 0; j <= 2 * i - 1; j++)
          {
               printf("%c ", 65 + k);
               j < i ? k++ : k--;
          }
          cout << endl;
     }
}
void narrowButterfly(int n)
{
     for (int i = 1; i <= n; i++)
     {
          for (int j = 1; j <= n; j++)
          {
               if (j == i || j == n + 1 - i)
                    cout << "*";
               else
                    cout << " ";
          }
          cout << "\n";
     }
}

// series
void series_(int n);
void series(int n)
{
     if (n > 0)
     {
          cout << n << " ";
          series_(n - 1);
     }
}
void series_(int n)
{
     if (n > 1)
     {
          cout << n << " ";
          series(n / 2);
     }
}

void solid_rectangle(int r, int c)
{
     for (int i = 1; i <= r; i++)
     {
          for (int j = 1; j <= c; j++)
               cout << "* ";
          cout << endl;
     }
}

void hollow_Diamond(int n)
{
     for (int i = 0, k = 0; i < 2 * n - 1; i++)
     {
          for (int j = 0; j <= 2 * n - 1; j++)
          {

               if (j == n - k || j == n + k)
                    cout << "*";
               else
                    cout << " ";
          }
          cout << endl;
          if (i < n - 1)
               k++;
          else
               --k;
     }
}

void fancy_pattern(int n)
{
     for (int i = 0, k = 1; i < 2 * n; i++)
     {
          for (int j = 0; j < k; j++)
          {
               cout << k;
               if (j != k - 1)
                    cout << "*";
          }
          if (i < n - 1)
               k++;
          else
               --k;
          cout << endl;
     }
}

void NumericFullPyramid(int n)
{
     for (int i = 1; i <= n; i++)
     {
          int k = i;
          for (int j = 1; j <= 2 * n - 1; j++)
          {
               if (j > n - i && j < n + i)
               {
                    cout << k << " ";
                    j < n ? k++ : k--;
               }
               else
                    cout << "  ";
          }
          cout << endl;
     }
}

void design2(int n)
{
     for (int i = 0; i < n; i++)
     {
          for (int j = 0; j <= 2 * n - 1; j++)
          {
               if (j == n - i || j == n + i)
               {
                    cout << "* ";
               }
               else if (j == n - i % 2 || j == n + i % 2)
               {
                    cout << "# ";
               }
               else if (j == n - i % 3 || j == n + i % 3)
               {
                    cout << "$ ";
               }
               else
                    cout << "  ";
          }
          cout << endl;
     }
}

void design(int n)
{
     for (int i = 0; i < n; i++)
     {
          for (int j = 0; j <= 2 * n - 1; j++)
          {
               if (j == n - i % 2 || j == n + i % 2)
               {
                    cout << "* ";
               }
               else
                    cout << "  ";
          }
          cout << endl;
     }
}
void designn(int n)
{
     for (int i = 0; i < n; i++)
     {
          for (int j = 0; j <= 2 * n - 1; j++)
          {
               if (j == n - i / 2 || j == n + i / 2)
               {
                    cout << "* ";
               }
               else
                    cout << "  ";
          }
          cout << endl;
     }
}


void zero1(int n){
     for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if ((i + j) % 2 == 0)
                cout << "1 ";
            else
                cout << "0 ";
        }
        cout << endl;
    }
}
void NumericHollow(int n)
{
     for (int i = 0; i < n; i++)
     {
          for (int j = 0; j <= i; j++)
          {
               if (i == n - 1)
                    cout << j + 1 << " ";
               else if (j == 0 || j == i)
                    cout << j + 1 << " ";
               else
                    cout << "  ";
          }
          cout << endl;
     }
}

void floydTriangle(int n){
     for(int i=0,k=1;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<k++<<" "; 
        }
        cout<<endl;
    }
}


void pascal(int n){
     int arr[50][50];
    int i,j;
//     printf("Enter the number of lines: ");
//     scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - 1 - i; ++j)
            printf(" ");
        for (j = 0; j <= i; ++j)
        {
            if (j == 0 || j == i)
                arr[i][j] = 1;
            else
                arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

void alphabet(int n){
     int ROW = 7,COL = 7+2;
     char arr[ROW][COL];
    int r;
    for (int i = 0; i < ROW; i++)
    {for (int j = 0; j < ROW; j++)
    {arr[i][j] = ' ';
    }
    }
    for (int i = 0; i < ROW; i++)
    {
        arr[i][0] = 3;
        arr[i][i] =3;
        

    for (int j = 1; j <i; j++)
    {
        arr[i][j] = ' ';
    }
    arr[i][6]=3;
    }
    for (int i = 0; i < ROW; i++)
    {
        printf("\n");
        for (int k = 0; k < ROW; k++){
            printf(" %c ", arr[i][k]);
            }
    }
}
int main()
{
    /*  cout << "\n***********  Butterfly Pattern **************\n\n"
          << endl;
     butterfly(N);
     cout << endl;
     cout << endl;

          cout << "\n***********  Pyramid Pattern **************\n\n"
          << endl;

     Pyramid1(5);

     cout << "\n***********  Pallindromic Pattern **************\n\n"
          << endl;

     Pallindromic_Pyramid(5);

     cout << "\n***********  Even0Pyramid **************\n\n"
          << endl;

     Even0Pyramid(5);
     cout << endl;

     Even0Pyramid2(5);
     cout << endl;
     Even0Pyramid3(5);
     cout << endl;
     Even0Pyramid4(5);


     cout << "\n***********  Arrow **************\n\n"<<endl;
         arrow(6);
     cout << endl;
         arrow2(6);


     cout << "\n\n***********  Star Pattern **************\n"<<endl;
     starpattern(9);
     cout << endl;
     cout << "\n\n***********  InDiamond **************\n"<<endl;
     inDiamond(10);
     cout << endl;
     cout << "\n\n***********  Pattern **************\n"<<endl;
     diamond(9);
     cout << endl;
     cout << "\n\n***********  Pattern **************\n"<<endl;

     pattern(12);
     
     cout << endl;
     cout << "\n\n***********  Pattern **************\n"<<endl;

     pattern2(14);
     cout << endl;
     cout << "\n\n***********  Pattern **************\n"<<endl;

     pattern3(7);
     cout << endl;
     cout << "\n\n***********  Narrow Butterfly **************\n"<<endl;

     narrowButterfly(9);
     cout << endl;

     cout << "\n\n***********  Series **************\n"<<endl;

     series(20);
     cout << endl;

     cout << "\n\n***********  SOlid Rectangle **************\n"<<endl;

     solid_rectangle(3, 5);
     cout << endl;
     cout << "\n\n***********  Pyramid **************\n"<<endl;
     Pyramid2(5);
     cout << endl;
     cout << endl;
     cout << "\n\n***********  Pyramid **************\n"<<endl;
     Pyramid22(6);
     cout << endl;
     cout << "\n\n*********** Numeric  Pyramid **************\n"<<endl;
     NumericPyramid(5);
     cout << endl;

     cout << "\n\n*********** Inverted Pyramid **************\n"<<endl;
     inverted_Pyramid2(7);
     cout << endl;

     cout << "\n\n*********** Hollow Diamond **************\n"<<endl;
     hollow_Diamond(6);

     cout << "\n\n*********** Fancy Pattern **************\n"<<endl;

     fancy_pattern(4);

     cout << "\n\n***********  Pattern **************\n"<<endl;

     pattern4(5);
     cout << "\n\n*********** Numeric Pattern **************\n"<<endl;

     NumericPyramid(5);

     cout << "\n\n*********** Numeric Pattern **************\n"<<endl;

     NumericFullPyramid(5);

     cout << "\n\n*********** Design **************\n"<<endl;

     design2(6);
     cout << "\n\n*********** Design **************\n"<<endl;

     design(6);
     cout << "\n\n*********** Design **************\n"<<endl;
     designn(6);

     cout << "\n\n*********** Numeric Hollow **************\n"<<endl;


     NumericHollow(5); */
     zero1(5);
     floydTriangle(5);

     pascal(6);
     alphabet(8);
     return 0;
}

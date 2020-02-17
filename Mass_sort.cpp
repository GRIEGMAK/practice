#include"math.h"
#include"conio.h"
#include"iostream"
#include <stdlib.h>
#include <ctime>

using namespace std;

int random(int M[], int n)
{
    int a = 1, b = 0, i, j = 0;
    setlocale(LC_CTYPE, "Russian");
    srand(time(NULL));
    do
    {i=0;
    if(a > b){
    j++;
    cout << "Попытка №" << j << endl;
    cout << "Введите значения начала и конца выборки из рандомных чисел: ";
    cin >> a >> b;
    }
    else{
        i=1;
    }
    }while( i!=1 );
    for (i = 0; i < n; i++)
    {
        M[i]=rand()%(b-a+1)+a;
    }
    return M[n];
};
int vvod(int M[], int n)
{
    int a = 1, b = 0, i, j = 0;
    setlocale(LC_CTYPE, "Russian");
    cout << "Введите числа для заполнения массива:";
    for (int i = 0; i < n; i++)
    {
        cin >> M[i];
    }
    return M[n];
};
int sort_puz(int M[], int n)
{
    int i, j, b;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n-1; j++)
        {
            if (M[j]>M[j + 1])
            {
                int b = M[j];
                M[j] = M[j + 1];
                M[j + 1] = b;
            }
        }
        for(j = 0; j < n; j++)
        {
            cout << M[j] << " ";
        }
        cout << endl;
    }
    return M[n];
};
int sort_vib(int M[], int n)
{
    int i, j, m, b;
    for(i = 0; i < n; i++)
    {
        m = i;
        b = M[i];
        for(j=i+1; j < n; j++)
        {
                if(M[j]<M[m])
                {
                    m=j;
                }
                if(m!=i)
                {
                    b = M[i];
                    M[i] = M[m];
                    M[m] = b;
                }
        }
        for (j = 0; j < n; j++)
        {
            cout << M[j] << " ";
        }
        cout << endl;
    }
    return(M[n]);
}
int pr_in(int M[], int n, int c)
{
    if(c == 0)
        {
            random(M, n);
        }
    else
    {
        vvod(M, n);
    }
    return M[n];
};
int v_sort(int M[], int n, int c)
{
    if(c == 0)
        {
            sort_puz(M, n);
        }
    else
        {
            sort_vib(M, n);
        }
    return M[n];
};
int main()
{
setlocale(LC_CTYPE, "Russian");
int i, j, n, c;
cout << "Введите количество элементов в массиве: ";
cin >> n;
int M[n];
cout << "Каким способом заполнять массив?\n0 - Случайными числами\nНе 0 - Ввести с клавиатуры: ";
cin >> c;
pr_in(M, n, c);
cout << "Какую сортировку использовать?\n0 - Сортировку пузырьком\nНе 0 - Сортировка выбором: ";
cin >> c;
v_sort(M, n, c);
cout << "Массив в отсортированном виде: ";
for (int i = 0; i < n; i++)
{
cout << M[i] << " ";
}
cout << endl;
system("pause");
return 0;
}

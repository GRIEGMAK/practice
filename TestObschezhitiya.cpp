#include <iostream>
#include <fstream>
#include <cstdlib>
#include <windows.h>
#include <ctime>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    ofstream fout("otvety.txt");
    cout << "Ответьте на вопросы\n";
    system("pause");
    system("cls");
    int w, k = 0, d = 0;
    const int h = 12;
    int a[h];
    srand(time(NULL));
    for(int i=0; i<h; i++)
    {
        a: a[i]=1+rand()%h;
        for (int j=0; j<i; j++)
            if (a[j]==a[i]) goto a;
    }
    for(int i=0; i<h; i++){
    switch (a[i]){
    case 1:
        {cout << "Малышева 140: \nОбщежитие № ";
        cin >> d;
        if (d == 3){
            cout << "+\n";
            fout << "Малышева 140 : Общежитие №" << d <<" + Правильный ответ: 3\n";
            k++;}
        else{cout << "-\n";
            fout << "Малышева 140 : Общежитие №" << d <<" - Правильный ответ: 3\n"  ;}
        break;}
    case 2:
        {cout << "Малышева 144/Комсомольская 66: \nОбщежитие № ";
        cin >> d;
        if (d == 5){
            cout << "+\n";
            fout << "Малышева 144/Комсомольская 66 : Общежитие №" << d <<" + Правильный ответ: 5\n";
            k++;}
        else{cout << "-\n";
            fout << "Малышева 144/Комсомольская 66 : Общежитие №" << d <<" - Правильный ответ: 5\n";}
        break;}
    case 3:
        {cout << "Коминтерна 3/Фонвизина 1: \nОбщежитие № ";
        cin >> d;
        if (d == 7){
            cout << "+\n";
            fout << "Коминтерна 3/Фонвизина 1 : Общежитие №" << d <<" + Правильный ответ: 7\n";
            k++;}
        else{cout << "-\n";
            fout << "Коминтерна 3/Фонвизина 1 : Общежитие №" << d <<" - Правильный ответ: 7\n";}
        break;}
    case 4:
        {cout << "Комсомольская 70/Фонвизина 10: \nОбщежитие № ";
        cin >> d;
        if (d == 8){
            cout << "+\n";
            fout << "Комсомольская 70/Фонвизина 10 : Общежитие №" << d <<" + Правильный ответ: 8\n";
            k++;}
        else{cout << "-\n";
            fout << "Комсомольская 70/Фонвизина 10 : Общежитие №" << d <<" - Правильный ответ: 8\n"  ;}
        break;}
    case 5:
        {cout << "Фонвизина 8: \nОбщежитие № ";
        cin >> d;
        if (d == 9){
            cout << "+\n";
            fout << "Фонвизина 8 : Общежитие №" << d <<" + Правильный ответ: 9\n";
            k++;}
        else{cout << "-\n";
            fout << "Фонвизина 8 : Общежитие №" << d <<" - Правильный ответ: 9\n"  ;}
        break;}
    case 6:
        {cout << "Ленина 66: \nОбщежитие № ";
        cin >> d;
        if (d == 10){
            cout << "+\n";
            fout << "Ленина 66 : Общежитие №" << d <<" + Правильный ответ: 10\n";
            k++;}
        else{cout << "-\n";
            fout << "Ленина 66 : Общежитие №" << d <<" - Правильный ответ: 10\n"  ;}
        break;}
    case 7:
        {cout << "Фонвизина 2/Коминтерна 5: \nОбщежитие № ";
        cin >> d;
        if (d == 11){
            cout << "+\n";
            fout << "Фонвизина 2/Коминтерна 5 : Общежитие №" << d <<" + Правильный ответ: 11\n";
            k++;}
        else{cout << "-\n";
            fout << "Фонвизина 2/Коминтерна 5 : Общежитие №" << d <<" - Правильный ответ: 11\n"  ;}
        break;}
    case 8:
        {cout << "Фонвизина 4: \nОбщежитие № ";
        cin >> d;
        if (d == 12){
            cout << "+\n";
            fout << "Фонвизина 4 : Общежитие №" << d <<" + Правильный ответ: 12\n";
            k++;}
        else{cout << "-\n";
            fout << "Фонвизина 4 : Общежитие №" << d <<" - Правильный ответ: 12\n"  ;}
        break;}
    case 9:
        {cout << "Комсомольская 66А: \nОбщежитие № ";
        cin >> d;
        if (d == 13){
            cout << "+\n";
            fout << "Комсомольская 66А : Общежитие №" << d <<" + Правильный ответ: 13\n";
            k++;}
        else{cout << "-\n";
            fout << "Комсомольская 66А : Общежитие №" << d <<" - Правильный ответ: 13\n"  ;}
        break;}
    case 10:
        {cout << "Коминтерна 1А: \nОбщежитие № ";
        cin >> d;
        if (d == 14){
            cout << "+\n";
            fout << "Коминтерна 1А : Общежитие №" << d <<" + Правильный ответ: 14\n";
            k++;}
        else{cout << "-\n";
            fout << "Коминтерна 1А : Общежитие №" << d <<" - Правильный ответ: 14\n"  ;}
        break;}
    case 11:
        {cout << "Коминтерна 11: \nОбщежитие № ";
        cin >> d;
        if (d == 15){
            cout << "+\n";
            fout << "Коминтерна 11 : Общежитие №" << d <<" + Правильный ответ: 15\n";
            k++;}
        else{cout << "-\n";
            fout << "Коминтерна 11 : Общежитие №" << d <<" - Правильный ответ: 15\n"  ;}
        break;}
    case 12:
        {cout << "Малышева 127: \nОбщежитие № ";
        cin >> d;
        if (d == 16){
            cout << "+\n";
            fout << "Малышева 127 : Общежитие №" << d <<" + Правильный ответ: 16\n";
            k++;}
        else{cout << "-\n";
            fout << "Малышева 127 : Общежитие №" << d <<" - Правильный ответ: 16\n"  ;}
        break;}
        default:
            {cout << "error";
			break;}
    }
        system("cls");
        cin.get();}
        cout << "Правильные ответы вы можете посмотреть в файле \nC://Desctop/Новая папка (13)/obschejitiya/otvety.txt\n";
        fout.close();
        cout << "Количество правильных ответов: " << k << "\n";
        system("pause");
        return 0;
}

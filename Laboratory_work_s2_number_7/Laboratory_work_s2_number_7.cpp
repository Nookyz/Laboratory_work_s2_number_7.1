// Laboratory_work_s2_number_7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>

int main()
{
    HWND hwnd = GetConsoleWindow();
    HDC dc = GetDC(hwnd);
    RECT window = {};
    HBRUSH brush;

    brush = CreateSolidBrush(RGB(0, 210, 226));
    SelectObject(dc, brush);
    RECT WinCoord = {};
    GetWindowRect(hwnd, &WinCoord);
    Rectangle(dc, 0, 0, WinCoord.right, WinCoord.bottom);
    DeleteObject(brush);
    //Черепаха

    // Левая часть панцыря
    brush = CreateSolidBrush(RGB(0, 100, 0));
    SelectObject(dc, brush);
    Ellipse(dc, 150, 300, 300, 430);
    DeleteObject(brush);
    // Правая часть панцыря
    brush = CreateSolidBrush(RGB(0, 100, 0));
    SelectObject(dc, brush);
    Ellipse(dc, 250, 300, 400, 430);
    DeleteObject(brush);
    // Центральная часть панцыря
    brush = CreateSolidBrush(RGB(0, 100, 0));
    SelectObject(dc, brush);
    Ellipse(dc, 150, 300, 400, 430);
    DeleteObject(brush);
    // Верхняя часть панцыря
    brush = CreateSolidBrush(RGB(0, 100, 0));
    SelectObject(dc, brush);
    Ellipse(dc, 170, 270, 380, 400);
    DeleteObject(brush);
    // Пятна на панцыре 1
    brush = CreateSolidBrush(RGB(0, 150, 81));
    SelectObject(dc, brush);
    Ellipse(dc, 170, 330, 240, 380);
    DeleteObject(brush);
    // Пятна на панцыре 2
    brush = CreateSolidBrush(RGB(0, 150, 81));
    SelectObject(dc, brush);
    Ellipse(dc, 310, 330, 380, 380);
    DeleteObject(brush);
    // Пятна на панцыре 3
    brush = CreateSolidBrush(RGB(0, 150, 81));
    SelectObject(dc, brush);
    Ellipse(dc, 260, 350, 300, 400);
    DeleteObject(brush);
    // Пятна на панцыре 4
    brush = CreateSolidBrush(RGB(0, 150, 81));
    SelectObject(dc, brush);
    Ellipse(dc, 220, 290, 320, 320);
    DeleteObject(brush);
    // Пузо черепахи
    brush = CreateSolidBrush(RGB(95, 138, 46));
    SelectObject(dc, brush);
    Rectangle(dc, 150, 395, 410, 430);
    DeleteObject(brush);
    // Левая нога
    brush = CreateSolidBrush(RGB(85, 65, 34));
    SelectObject(dc, brush);
    Rectangle(dc, 150, 430, 200, 465);
    DeleteObject(brush);
    // Правая нога
    brush = CreateSolidBrush(RGB(85, 65, 34));
    SelectObject(dc, brush);
    Rectangle(dc, 350, 430, 400, 465);
    DeleteObject(brush);
    // Хвост
    brush = CreateSolidBrush(RGB(85, 65, 34));
    SelectObject(dc, brush);
    Rectangle(dc, 115, 385, 170, 415);
    DeleteObject(brush);
    // Выход из панцыря горло
    brush = CreateSolidBrush(RGB(85, 65, 34));
    SelectObject(dc, brush);
    Rectangle(dc, 375, 385, 435, 415);
    DeleteObject(brush);
    // Горло
    brush = CreateSolidBrush(RGB(85, 65, 34));
    SelectObject(dc, brush);
    Rectangle(dc, 410, 280, 435, 415);
    DeleteObject(brush);
    // Голова
    brush = CreateSolidBrush(RGB(85, 65, 34));
    SelectObject(dc, brush);
    Rectangle(dc, 410, 280, 460, 330);
    DeleteObject(brush);
    // Язык
    brush = CreateSolidBrush(RGB(210, 50, 34));
    SelectObject(dc, brush);
    Rectangle(dc, 438, 310, 460, 330);
    DeleteObject(brush);
    // Глаз
    brush = CreateSolidBrush(RGB(255, 255, 255));
    SelectObject(dc, brush);
    Ellipse(dc, 424, 286, 444, 306);
    DeleteObject(brush);
    // Глаз зерница
    brush = CreateSolidBrush(RGB(0, 0, 0));
    SelectObject(dc, brush);
    Ellipse(dc, 428, 290, 440, 302);
    DeleteObject(brush);

    // Медуза 

    // Щупальцы 1
    brush = CreateSolidBrush(RGB(156, 86, 165));
    SelectObject(dc, brush);
    Ellipse(dc, 700, 100, 725, 235);
    DeleteObject(brush);
    // Щупальцы 2
    brush = CreateSolidBrush(RGB(156, 86, 165));
    SelectObject(dc, brush);
    Ellipse(dc, 740, 100, 765, 255);
    DeleteObject(brush);
    // Щупальцы 3
    brush = CreateSolidBrush(RGB(156, 86, 165));
    SelectObject(dc, brush);
    Ellipse(dc, 780, 100, 805, 285);
    DeleteObject(brush);
    // Щупальцы 4
    brush = CreateSolidBrush(RGB(156, 86, 165));
    SelectObject(dc, brush);
    Ellipse(dc, 820, 100, 845, 255);
    DeleteObject(brush);
    // Щупальцы 5
    brush = CreateSolidBrush(RGB(156, 86, 165));
    SelectObject(dc, brush);
    Ellipse(dc, 860, 100, 885, 235);
    DeleteObject(brush);
    // Тело медузы
    brush = CreateSolidBrush(RGB(235, 107, 165));
    SelectObject(dc, brush);
    Ellipse(dc, 680, 50, 900, 150);
    DeleteObject(brush);
    // Пятна медузы 1
    brush = CreateSolidBrush(RGB(205, 92, 169));
    SelectObject(dc, brush);
    Ellipse(dc, 700, 80, 740, 120);
    DeleteObject(brush);
    // Пятна медузы 2
    brush = CreateSolidBrush(RGB(205, 92, 169));
    SelectObject(dc, brush);
    Ellipse(dc, 760, 100, 800, 140);
    DeleteObject(brush);
    // Пятна медузы 3
    brush = CreateSolidBrush(RGB(205, 92, 169));
    SelectObject(dc, brush);
    Ellipse(dc, 820, 70, 860, 110);
    DeleteObject(brush);

    // Водоросли

    // Корень 1
    brush = CreateSolidBrush(RGB(254, 84, 110));
    SelectObject(dc, brush);
    Ellipse(dc, 530, 320, 700, 470);
    DeleteObject(brush);
    // Корень 2
    brush = CreateSolidBrush(RGB(212, 45, 61));
    SelectObject(dc, brush);
    Ellipse(dc, 555, 320, 675, 470);
    DeleteObject(brush);
    // Цветок 1
    brush = CreateSolidBrush(RGB(255, 152, 23));
    SelectObject(dc, brush);
    Ellipse(dc, 590, 250, 640, 420);
    DeleteObject(brush);
    // Цветок 2
    brush = CreateSolidBrush(RGB(255, 214, 24));
    SelectObject(dc, brush);
    Ellipse(dc, 530, 310, 700, 350);
    DeleteObject(brush);
    // Цветок Центр
    brush = CreateSolidBrush(RGB(169, 63, 24));
    SelectObject(dc, brush);
    Ellipse(dc, 595, 310, 635, 350);
    DeleteObject(brush);

    
    std::cin.get();
    
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.

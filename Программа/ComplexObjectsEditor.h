#ifndef COMPLEX_OBJECTS_EDITOR_H
#define COMPLEX_OBJECTS_EDITOR_H

#include <string>
#include <vector>

class ComplexObjectsEditor
{
public:
    // Создает новую таблицу с указанным количеством строк и столбцов
    // Вход: количество строк (rows), количество столбцов (columns)
    void createTable(int rows, int columns);

    // Редактирует указанную таблицу
    // Вход: индекс таблицы (index), новые данные (newData)
    void editTable(int index, const std::vector<std::vector<std::string>> &newData);

    // Удаляет указанную таблицу
    // Вход: индекс таблицы (index)
    void deleteTable(int index);

    // Создает новую диаграмму с указанными данными
    // Вход: данные для диаграммы (data)
    void createChart(const std::vector<double> &data);

    // Редактирует указанную диаграмму
    // Вход: индекс диаграммы (index), новые данные (newData)
    void editChart(int index, const std::vector<double> &newData);

    // Удаляет указанную диаграмму
    // Вход: индекс диаграммы (index)
    void deleteChart(int index);

    // Создает новое уравнение
    // Вход: уравнение (equation)
    void createEquation(const std::string &equation);

    // Редактирует указанное уравнение
    // Вход: индекс уравнения (index), новое уравнение (newEquation)
    void editEquation(int index, const std::string &newEquation);

    // Удаляет указанное уравнение
    // Вход: индекс уравнения (index)
    void deleteEquation(int index);

private:
    std::vector<std::vector<std::string>> tables; // Список таблиц
    std::vector<std::vector<double>> charts;      // Список диаграмм
    std::vector<std::string> equations;           // Список уравнений
};

#endif /* COMPLEX_OBJECTS_EDITOR_H */

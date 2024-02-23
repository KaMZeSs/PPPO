#ifndef COMPLEX_OBJECTS_EDITOR_H
#define COMPLEX_OBJECTS_EDITOR_H

#include <string>
#include <vector>

class Table
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

private:
    std::vector<std::vector<std::string>> tables; // Список таблиц
};

#endif /* COMPLEX_OBJECTS_EDITOR_H */

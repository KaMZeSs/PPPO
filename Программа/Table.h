#ifndef COMPLEX_OBJECTS_EDITOR_H
#define COMPLEX_OBJECTS_EDITOR_H

#include <string>
#include <vector>

/// @brief Позволяет пользователю создавать и редактировать таблицы на странице для организации данных в табличной форме
class Table
{
public:
    /// @brief Создает новую таблицу с указанным количеством строк и столбцов
    /// @param rows Количество строк
    /// @param columns Количество столбцов
    void createTable(int rows, int columns);

    /// @brief Редактирует указанную таблицу
    /// @param index Индекс таблицы
    /// @param newData Новые данные
    void editTable(int index, const std::vector<std::vector<std::string>> &newData);

    /// @brief Удаляет указанную таблицу
    /// @param index Индекс таблицы
    void deleteTable(int index);

private:
    /// @brief Список таблиц
    std::vector<std::vector<std::string>> tables;
};

#endif /* COMPLEX_OBJECTS_EDITOR_H */

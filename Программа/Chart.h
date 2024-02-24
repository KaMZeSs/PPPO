#ifndef COMPLEX_OBJECTS_EDITOR_H
#define COMPLEX_OBJECTS_EDITOR_H

#include <string>
#include <vector>

/// @brief Обеспечивает возможность создания и редактирования диаграмм различных типов для визуализации данных на странице
class Chart
{
public:
    /// @brief Создает новую диаграмму с указанными данными
    /// @param data данные для диаграммы
    /// @return Номер диаграммы
    int createChart(const std::vector<double> &data);

    /// @brief Редактирует указанную диаграмму
    /// @param index индекс диаграммы
    /// @param newData Новые данные
    void editChart(int index, const std::vector<double> &newData);

    /// @brief Удаляет указанную диаграмму
    /// @param index индекс диаграммы
    void deleteChart(int index);

private:
    /// @brief Список диаграмм
    std::vector<std::vector<double>> charts;
};

#endif /* COMPLEX_OBJECTS_EDITOR_H */

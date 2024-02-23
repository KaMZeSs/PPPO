#ifndef COMPLEX_OBJECTS_EDITOR_H
#define COMPLEX_OBJECTS_EDITOR_H

#include <string>
#include <vector>

class Chart
{
public:
    // Создает новую диаграмму с указанными данными
    // Вход: данные для диаграммы (data)
    void createChart(const std::vector<double> &data);

    // Редактирует указанную диаграмму
    // Вход: индекс диаграммы (index), новые данные (newData)
    void editChart(int index, const std::vector<double> &newData);

    // Удаляет указанную диаграмму
    // Вход: индекс диаграммы (index)
    void deleteChart(int index);

private:
    std::vector<std::vector<double>> charts;      // Список диаграмм
};

#endif /* COMPLEX_OBJECTS_EDITOR_H */

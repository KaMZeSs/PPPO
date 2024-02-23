#ifndef COMPLEX_OBJECTS_EDITOR_H
#define COMPLEX_OBJECTS_EDITOR_H

#include <string>
#include <vector>

class Link
{
public:
    // Создает новую таблицу с указанным количеством строк и столбцов
    // Вход: количество строк (rows), количество столбцов (columns)
    void addLink(std::string link);

    // Удаляет указанную таблицу
    // Вход: индекс таблицы (index)
    void deleteLink(int index);

private:
    std::vector<Link> links; // Список таблиц
};

#endif /* COMPLEX_OBJECTS_EDITOR_H */

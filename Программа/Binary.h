#ifndef COMPLEX_OBJECTS_EDITOR_H
#define COMPLEX_OBJECTS_EDITOR_H

#include <string>
#include <vector>

class Binary
{
public:
    // Создает новую таблицу с указанным количеством строк и столбцов
    // Вход: количество строк (rows), количество столбцов (columns)
    void addBinary(const std::vector<byte> &data);

    // Удаляет указанную таблицу
    // Вход: индекс таблицы (index)
    void deleteBinary(int index);

    std::vector<byte> exportBinary(int index);

    void viewBinary(int index);

private:
    std::vector<Binary> binaries;                   // Список файлов
};

#endif /* COMPLEX_OBJECTS_EDITOR_H */

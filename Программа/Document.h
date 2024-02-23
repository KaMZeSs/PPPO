#ifndef COMPLEX_OBJECTS_EDITOR_H
#define COMPLEX_OBJECTS_EDITOR_H

#include <string>
#include <vector>

class Document
{
public:
    // Создает новую таблицу с указанным количеством строк и столбцов
    // Вход: количество строк (rows), количество столбцов (columns)
    void addDocument(const std::vector<byte> &data);

    // Удаляет указанную таблицу
    // Вход: индекс таблицы (index)
    void deleteDocument(int index);

    void viewDocument(int index);

private:
    std::vector<Document> documents;      // Список документов
};

#endif /* COMPLEX_OBJECTS_EDITOR_H */

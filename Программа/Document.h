#ifndef COMPLEX_OBJECTS_EDITOR_H
#define COMPLEX_OBJECTS_EDITOR_H

#include <string>
#include <vector>

/// @brief Позволяет пользователю импортировать файлы документов различных форматов (например, DOCX, PDF) на страницу в виде распечаток
class Document
{
public:
    /// @brief Добавляет новый документ
    /// @param data Данные файла
    /// @returns Номер документа
    int addDocument(const std::vector<byte> &data);

    /// @brief Удаляет указанный документ
    /// @param index Номер документа
    void deleteDocument(int index);

    /// @brief Отображает указанный документ в виде распечатки
    /// @param index Номер документа
    void viewDocument(int index);

private:
    /// @brief Список документов
    std::vector<Document> documents;
};

#endif /* COMPLEX_OBJECTS_EDITOR_H */

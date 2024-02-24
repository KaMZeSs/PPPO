#ifndef FILE_CREATION_H
#define FILE_CREATION_H

#include <string>

/// @brief Позволяет создавать новые файлы для хранения заметок
class FileCreation
{
public:
    /// @brief Создает новый файл с указанным именем
    /// @param name имя файла
    /// @return true, если файл успешно создан, иначе false
    bool createFile(const std::string &name);

private:
    /// @brief Имя создаваемого файла
    std::string fileName;
};

#endif /* FILE_CREATION_H */

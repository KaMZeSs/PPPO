#ifndef FILE_OPENING_H
#define FILE_OPENING_H

#include <string>

/// @brief Позволяет пользователям открывать уже существующие файлы с заметками для дальнейшего редактирования
class FileOpening
{
public:
    /// @brief Открывает существующий файл
    /// @param name Имя файла
    /// @return true, если файл успешно открыт, false в противном случае
    bool openFile(const std::string &name);

private:
    /// @brief Имя открываемого файла
    std::string fileName;
};

#endif /* FILE_OPENING_H */

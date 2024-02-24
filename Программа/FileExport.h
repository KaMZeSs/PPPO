#ifndef FILE_EXPORT_H
#define FILE_EXPORT_H

#include <string>

/// @brief Обеспечивает возможность экспорта текущего файла с заметками в различные форматы, такие как PDF, XPS и DOCX, для обмена или публикации
class FileExport
{
public:
    /// @brief Экспортирует текущий файл в указанный формат
    /// @param format Формат экспорта
    /// @return true, если экспорт успешно завершен, false в противном случае
    bool exportFile(const std::string &format);

private:
    /// @brief Формат экспорта файла
    std::string exportFormat;
};

#endif /* FILE_EXPORT_H */

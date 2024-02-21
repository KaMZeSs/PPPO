#ifndef FILE_EXPORT_H
#define FILE_EXPORT_H

#include <string>

class FileExport
{
public:
    // Экспортирует текущий файл в указанный формат
    // Вход: формат экспорта (format)
    // Выход: true, если экспорт успешно завершен, false в противном случае
    bool exportFile(const std::string &format);

private:
    std::string exportFormat; // Формат экспорта файла
};

#endif /* FILE_EXPORT_H */

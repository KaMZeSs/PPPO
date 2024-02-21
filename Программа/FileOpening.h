#ifndef FILE_OPENING_H
#define FILE_OPENING_H

#include <string>

class FileOpening
{
public:
    // Открывает существующий файл
    // Вход: имя файла (name)
    // Выход: true, если файл успешно открыт, false в противном случае
    bool openFile(const std::string &name);

private:
    std::string fileName; // Имя открываемого файла
};

#endif /* FILE_OPENING_H */

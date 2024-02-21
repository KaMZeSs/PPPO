#ifndef FILE_CREATION_H
#define FILE_CREATION_H

#include <string>

class FileCreation
{
public:
    // Создает новый файл с указанным именем
    // Вход: имя файла (name)
    // Выход: true, если файл успешно создан, false в противном случае
    bool createFile(const std::string &name);

private:
    std::string fileName; // Имя создаваемого файла
};

#endif /* FILE_CREATION_H */

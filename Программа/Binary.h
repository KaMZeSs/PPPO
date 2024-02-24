#ifndef COMPLEX_OBJECTS_EDITOR_H
#define COMPLEX_OBJECTS_EDITOR_H

#include <string>
#include <vector>

/// @brief Позволяет добавлять на страницу ссылки на бинарные файлы с возможностью их экспорта и просмотра
class Binary
{
public:
    /// @brief Создает новый бинарный файл
    /// @param data Данные файла
    /// @return Номер файла
    int addBinary(const std::vector<byte> &data);

    /// @brief Удаляет бинарный файл
    /// @param index Номер файла
    void deleteBinary(int index);

    /// @brief Экспорт файла
    /// @param index Номер файла
    /// @return Данные файла
    std::vector<byte> exportBinary(int index);

    /// @brief Отбражение файла
    /// @param index Номер файла
    void viewBinary(int index);

private:
    /// @brief Список файлов
    std::vector<Binary> binaries;
};

#endif /* COMPLEX_OBJECTS_EDITOR_H */

#ifndef COMPLEX_OBJECTS_EDITOR_H
#define COMPLEX_OBJECTS_EDITOR_H

#include <string>
#include <vector>

/// @brief Позволяет пользователю создавать и редактировать ссылки на интернет-источники прямо на странице
class Link
{
public:
    /// @brief Создает новую ссылку
    /// @param link Адрес ссылки
    /// @return Номер ссылки на странице
    int addLink(std::string link);

    /// @brief Удаляет указанную ссылку
    /// @param index Индекс ссылки
    void deleteLink(int index);

private:
    /// @brief Список ссылок
    std::vector<Link> links;
};

#endif /* COMPLEX_OBJECTS_EDITOR_H */

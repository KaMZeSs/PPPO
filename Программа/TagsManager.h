#ifndef TAGS_MANAGER_H
#define TAGS_MANAGER_H

#include <string>
#include <vector>

/// @brief Позволяют классифицировать блоки заметок с помощью тегов для более удобного поиска и организации информации.
class TagsManager
{
public:
    /// @brief Добавляет тег к указанной заметке
    /// @param index Индекс заметки
    /// @param tag Тег
    void addTag(int index, const std::string &tag);

    /// @brief Удаляет тег из указанной заметки
    /// @param index Индекс заметки
    /// @param tag Тег
    void removeTag(int index, const std::string &tag);

    /// @brief Возвращает все теги для указанной заметки
    /// @param index Индекс заметки
    /// @return Вектор строк с тегами
    std::vector<std::string> getTagsForNote(int index);

private:
    /// @brief Теги для каждой заметки
    std::vector<std::vector<std::string>> noteTags;
};

#endif /* TAGS_MANAGER_H */

#ifndef TAGS_MANAGER_H
#define TAGS_MANAGER_H

#include <string>
#include <vector>

class TagsManager
{
public:
    // Добавляет тег к указанной заметке
    // Вход: индекс заметки (index), тег (tag)
    void addTag(int index, const std::string &tag);

    // Удаляет тег из указанной заметки
    // Вход: индекс заметки (index), тег (tag)
    void removeTag(int index, const std::string &tag);

    // Возвращает все теги для указанной заметки
    // Вход: индекс заметки (index)
    // Выход: вектор строк с тегами
    std::vector<std::string> getTagsForNote(int index);

private:
    std::vector<std::vector<std::string>> noteTags; // Теги для каждой заметки
};

#endif /* TAGS_MANAGER_H */

#ifndef JOURNALING_H
#define JOURNALING_H

#include <string>
#include <vector>

class Journaling
{
public:
    // Сохраняет запись об изменении
    // Вход: описание изменения (description)
    void logChange(const std::string &description);

    // Возвращает список всех изменений
    // Выход: вектор строк с описаниями изменений
    std::vector<std::string> getAllChanges();

private:
    std::vector<std::string> changesLog; // Журнал изменений
};

#endif /* JOURNALING_H */

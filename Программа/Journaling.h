#ifndef JOURNALING_H
#define JOURNALING_H

#include <string>
#include <vector>

/// @brief Предоставляет функции для ведения лога всех изменений в книге, поиска изменений по автору и контроля версий
class Journaling
{
public:
    /// @brief Сохраняет запись об изменении
    /// @param description Описание изменения
    void logChange(const std::string &description);

    /// @brief Возвращает список всех изменений
    /// @return Вектор строк с описаниями изменений
    std::vector<std::string> getAllChanges();

private:
    /// @brief Журнал изменений
    std::vector<std::string> changesLog;
};

#endif /* JOURNALING_H */

#ifndef COMPLEX_OBJECTS_EDITOR_H
#define COMPLEX_OBJECTS_EDITOR_H

#include <string>
#include <vector>

/// @brief Позволяет пользователю создавать и редактировать математические уравнения на странице с помощью специального редактора
class Equation
{
public:
    /// @brief Создает новое уравнение
    /// @param equation Строка, представляющая уравнение
    /// @returns Номер уравнения
    int createEquation(const std::string &equation);

    /// @brief Редактирует указанное уравнение
    /// @param index Индекс уравнения
    /// @param newEquation Новое уравнение
    void editEquation(int index, const std::string &newEquation);

    /// @brief Удаляет указанное уравнение
    /// @param index индекс уравнения
    void deleteEquation(int index);

private:
    /// @brief Список уравнений
    std::vector<std::string> equations;
};

#endif /* COMPLEX_OBJECTS_EDITOR_H */

#ifndef COMPLEX_OBJECTS_EDITOR_H
#define COMPLEX_OBJECTS_EDITOR_H

#include <string>
#include <vector>

class Equation
{
public:
    // Создает новое уравнение
    // Вход: уравнение (equation)
    void createEquation(const std::string &equation);

    // Редактирует указанное уравнение
    // Вход: индекс уравнения (index), новое уравнение (newEquation)
    void editEquation(int index, const std::string &newEquation);

    // Удаляет указанное уравнение
    // Вход: индекс уравнения (index)
    void deleteEquation(int index);

private:
    std::vector<std::string> equations;           // Список уравнений
};

#endif /* COMPLEX_OBJECTS_EDITOR_H */

#ifndef WINDOW_CREATION_H
#define WINDOW_CREATION_H

#include <string>

class WindowCreation
{
public:
    // Создает новое окно с указанным названием
    // Вход: название окна (title)
    // Выход: идентификатор созданного окна (windowId)
    int createWindow(const std::string &title);

private:
    int windowIdCounter; // Счетчик для уникальных идентификаторов окон
};

#endif /* WINDOW_CREATION_H */

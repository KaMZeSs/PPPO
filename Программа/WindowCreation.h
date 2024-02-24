#ifndef WINDOW_CREATION_H
#define WINDOW_CREATION_H

#include <string>

/// @brief Позволяет пользователям создавать новые окна для работы с двумя или более страницами одновременно, что повышает производительность и удобство использования приложения
class WindowCreation
{
public:
    /// @brief Создает новое окно с указанным названием
    /// @param title Название окна
    /// @return Идентификатор созданного окна (windowId)
    int createWindow(const std::string &title);

private:
    /// @brief Счетчик созданных окон
    int windowIdCounter;
};

#endif /* WINDOW_CREATION_H */

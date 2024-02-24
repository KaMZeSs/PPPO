#ifndef REVIEWING_H
#define REVIEWING_H

#include <string>

/// @brief Предоставляет инструменты для проверки и редактирования содержимого заметок, включая проверку читаемости, орфографии, перевод текстов и защиту страниц паролем
class Reviewing
{
public:
    /// @brief Проверяет читаемость указанной заметки
    /// @param text Текст заметки
    /// @return Оценка читаемости
    double checkReadability(const std::string &text);

    // Проверяет орфографию в тексте
    // Вход: текст заметки (text)
    // Выход: список ошибок орфографии

    /// @brief Проверяет орфографию в тексте
    /// @param text Текст заметки
    /// @return Список ошибок орфографии
    std::vector<std::string> checkSpelling(const std::string &text);

    /// @brief Переводит текст на указанный язык
    /// @param text Текст заметки
    /// @param language Язык перевода
    /// @return Переведенный текст
    std::string translateText(const std::string &text, const std::string &language);

    /// @brief Устанавливает пароль на указанную страницу
    /// @param pageIndex Индекс страницы
    /// @param password Пароль
    void setPassword(int pageIndex, const std::string &password);

private:
    /// @brief Оценка читаемости текста
    double readabilityScore;
};

#endif /* REVIEWING_H */

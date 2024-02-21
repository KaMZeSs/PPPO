#ifndef REVIEWING_H
#define REVIEWING_H

#include <string>

class Reviewing
{
public:
    // Проверяет читаемость указанной заметки
    // Вход: текст заметки (text)
    // Выход: оценка читаемости (readabilityScore)
    double checkReadability(const std::string &text);

    // Проверяет орфографию в тексте
    // Вход: текст заметки (text)
    // Выход: список ошибок орфографии
    std::vector<std::string> checkSpelling(const std::string &text);

    // Переводит текст на указанный язык
    // Вход: текст заметки (text), язык перевода (language)
    // Выход: переведенный текст
    std::string translateText(const std::string &text, const std::string &language);

    // Устанавливает пароль на указанную страницу
    // Вход: индекс страницы (pageIndex), пароль (password)
    void setPassword(int pageIndex, const std::string &password);

private:
    double readabilityScore; // Оценка читаемости текста
};

#endif /* REVIEWING_H */

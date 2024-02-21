#ifndef SETTINGS_H
#define SETTINGS_H

#include <string>
#include <vector>

class Settings
{
public:
    // Устанавливает новый язык приложения
    // Вход: новый язык (language)
    // Выход: true, если язык успешно изменен, false в противном случае
    bool setLanguage(const std::string &language);

    // Устанавливает размер шрифта по умолчанию
    // Вход: размер шрифта (fontSize)
    // Выход: true, если размер шрифта успешно изменен, false в противном случае
    bool setDefaultFontSize(int fontSize);

    // Устанавливает тему оформления приложения
    // Вход: название темы (themeName)
    // Выход: true, если тема успешно установлена, false в противном случае
    bool setTheme(const std::string &themeName);

    // Добавляет новый путь для сохранения файлов
    // Вход: путь (path)
    // Выход: true, если путь успешно добавлен, false в противном случае
    bool addSavePath(const std::string &path);

    // Удаляет указанный путь для сохранения файлов
    // Вход: путь (path)
    // Выход: true, если путь успешно удален, false в противном случае
    bool removeSavePath(const std::string &path);

    // Возвращает список доступных тем оформления
    // Выход: вектор строк с названиями тем
    std::vector<std::string> getAvailableThemes();

private:
    std::string currentLanguage;        // Текущий язык приложения
    int defaultFontSize;                // Размер шрифта по умолчанию
    std::string currentTheme;           // Текущая тема оформления
    std::vector<std::string> savePaths; // Список путей для сохранения файлов
};

#endif /* SETTINGS_H */

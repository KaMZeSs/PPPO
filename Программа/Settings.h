#ifndef SETTINGS_H
#define SETTINGS_H

#include <string>
#include <vector>

/// @brief Предоставляет пользователю доступ к настройкам приложения, позволяя настраивать его поведение и интерфейс в соответствии с предпочтениями пользователя
class Settings
{
public:
    /// @brief Устанавливает новый язык приложения
    /// @param language Новый язык
    /// @return true, если язык успешно изменен, false в противном случае
    bool setLanguage(const std::string &language);

    /// @brief Устанавливает размер шрифта по умолчанию
    /// @param fontSize Размер шрифта
    /// @return true, если размер шрифта успешно изменен, false в противном случае
    bool setDefaultFontSize(int fontSize);

    /// @brief Устанавливает тему оформления приложения
    /// @param themeName Название темы
    /// @return true, если тема успешно установлена, false в противном случае
    bool setTheme(const std::string &themeName);

    /// @brief Добавляет новый путь для сохранения файлов
    /// @param path Путь к папке
    /// @return true, если путь успешно добавлен, false в противном случае
    bool addSavePath(const std::string &path);

    /// @brief Удаляет указанный путь для сохранения файлов
    /// @param path Путь к папке
    /// @return true, если путь успешно удален, false в противном случае
    bool removeSavePath(const std::string &path);

    /// @brief Возвращает список доступных тем оформления
    /// @return Вектор строк с названиями тем
    std::vector<std::string> getAvailableThemes();

private:
    /// @brief Текущий язык приложения
    std::string currentLanguage;

    /// @brief Размер шрифта по умолчанию
    int defaultFontSize;

    /// @brief Текущая тема оформления
    std::string currentTheme;

    /// @brief Список путей для сохранения файлов
    std::vector<std::string> savePaths;
};

#endif /* SETTINGS_H */

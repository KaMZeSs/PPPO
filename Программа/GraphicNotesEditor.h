#ifndef GRAPHIC_NOTES_H
#define GRAPHIC_NOTES_H

#include <string>
#include <vector>
#include "GraphicNotes.h"

class GraphicNotesEditor
{
public:
    // Редактирует указанную графическую заметку
    // Вход: индекс заметки (index), новый путь к изображению (newImagePath)
    void editImageNote(GraphicNote note, const std::string &newImagePath);
};

#endif /* GRAPHIC_NOTES_H */

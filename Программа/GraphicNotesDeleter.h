#ifndef GRAPHIC_NOTES_H
#define GRAPHIC_NOTES_H

#include <string>
#include <vector>
#include "GraphicNotes.h"

class GraphicNotesDeleter
{
public:
    // Удаляет указанную графическую заметку
    // Вход: индекс заметки (index)
    void deleteImageNote(GraphicNote note);
};

#endif /* GRAPHIC_NOTES_H */

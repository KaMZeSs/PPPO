#include "FileCreation.h"
#include "FileOpening.h"

int main()
{
    FileCreation creation;
    creation.createFile("file");
    FileOpening opening;
    opening.openFile("file");
}
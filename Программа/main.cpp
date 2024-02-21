#include "FileCreation.h"
#include "FileOpening.h"
#include "FileExport.h"

int main()
{
    FileCreation creation;
    creation.createFile("file");

    FileExport exporting;
    exporting.exportFile("new format");
}
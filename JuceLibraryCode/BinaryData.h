/* =========================================================================================

   This is an auto-generated file: Any edits you make may be overwritten!

*/

#ifndef BINARYDATA_H_30357753_INCLUDED
#define BINARYDATA_H_30357753_INCLUDED

namespace BinaryData
{
    extern const char*   appsIcon_svg;
    const int            appsIcon_svgSize = 1205;

    extern const char*   gamesIcon_svg;
    const int            gamesIcon_svgSize = 1206;

    extern const char*   settingsIcon_svg;
    const int            settingsIcon_svgSize = 1479;

    // Points to the start of a list of resource names.
    extern const char* namedResourceList[];

    // Number of elements in the namedResourceList array.
    const int namedResourceListSize = 3;

    // If you provide the name of one of the binary resource variables above, this function will
    // return the corresponding data and its size (or a null pointer if the name isn't found).
    const char* getNamedResource (const char* resourceNameUTF8, int& dataSizeInBytes) throw();
}

#endif
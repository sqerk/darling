project(Carbon)

set(DYLIB_COMPAT_VERSION "2.0.0")
set(DYLIB_CURRENT_VERSION "158.0.0")

add_framework(Carbon
    FAT
    CURRENT_VERSION
    VERSION "A"

    SOURCES
        src/Carbon.c
        src/constants.c
        HIToolbox/Events.cpp
        HIToolbox/MacWindows.cpp
        HIToolbox/TextInputSources.mm

    DEPENDENCIES
    	CoreFoundation
        Foundation
        system
)

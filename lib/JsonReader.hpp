#ifndef __JSONREADER__
    #define __JSONREADER__

    #include "IFormatReader.hpp"
    #include <iostream>
    class JsonReader : public IFormatReader {
        public:
            int *read(std::string &filename);
    };

#endif
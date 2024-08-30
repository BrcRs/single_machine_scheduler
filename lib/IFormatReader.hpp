
#ifndef __IFORMATREADER__
    #define __IFORMATREADER__
    
    #include <string>

    class IFormatReader {

        public:
            virtual int* read(std::string &filename);
            // virtual ~IFormatReader() {}

    };

#endif
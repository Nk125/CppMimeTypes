// Requires: https://github.com/renatoGarcia/icecream-cpp
#include "icecream.hpp"
#include "MimeTypes.hpp"
#include <string>
#include <vector>

int main() {
    std::string buf;
    std::vector<std::string> exts;

    try {
        buf = nk125::MimeTypes::getType(".txt");
        IC(buf);

        buf = nk125::MimeTypes::getType("txt");
        IC(buf);

        buf = nk125::MimeTypes::getType("asdjaksd.txt");
        IC(buf);

        buf = nk125::MimeTypes::getType("\\\\.\\C:\\file.txt");
        IC(buf);

        buf = nk125::MimeTypes::getType("/usr/file.TXt");
        IC(buf);

        exts = nk125::MimeTypes::getExtentions("text/plain");
        IC(exts);
    }
    catch (std::exception& e) {
        std::cerr << e.what();
    }
}

# C++ Mime Type Detector

Header-Only Mimetype Detector

It's based on [this](https://github.com/lasselukkari/MimeTypes), there're pretty the same but the original C source doesn't work, so I made this to solve it.

## Usage

### static std::string getType(std::string extention)

```cpp
std::string mime;

try {
    mime = nk125::MimeTypes::getType(".txt");
    mime = nk125::MimeTypes::getType("txt");
    mime = nk125::MimeTypes::getType("asdjaksd.txt");
    mime = nk125::MimeTypes::getType("\\\\.\\C:\\file.txt");
    mime = nk125::MimeTypes::getType("/usr/file.TXt");
    
    // text/plain
}
catch (std::exception& e) {
    std::cerr << e.what(); // Mimetype not found
}
```

### static std::vector<std::string> getExtentions(std::string mime)

Get a list of extentions related to the mimetype

```cpp
std::vector<std::string> exts;

try {
    exts = nk125::MimeTypes::getExtention("text/plain");
    
    // ["conf", "def", "in", "ini", "list", "log", "text", "txt"]
}
catch (std::exception& e) {
    std::cerr << e.what(); // Extention not found
}
```

Mimetypes DB source (grabbed from the original C project)
[node-mime lite version](https://github.com/broofa/node-mime#lite-version)

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

### static std::string getExtention(std::string mime)

```cpp
std::string ext;

try {
    ext = nk125::MimeTypes::getExtention("text/plain");
    
    // txt
}
catch (std::exception& e) {
    std::cerr << e.what(); // Extention not found
}
```

Mimetypes DB source (grabbed from the original C project)
[node-mime lite version](https://github.com/broofa/node-mime#lite-version)

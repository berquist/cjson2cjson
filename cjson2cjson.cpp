#include <iostream>

#include <avogadro/io/fileformatmanager.h>
#include <avogadro/core/molecule.h>

using namespace Avogadro;

int main() {
    auto &mgr = Io::FileFormatManager::instance();
    Core::Molecule mol;

    std::ostringstream cjson_in;
    std::string line;
    while (getline(std::cin, line)) {
        cjson_in << line;
    }
    mgr.readString(mol, cjson_in.str(), "cjson");
    std::string cjson_out;
    mgr.writeString(mol, cjson_out, "cjson");
    std::cout << cjson_out;

    return 0;
}

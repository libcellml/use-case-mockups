#include <string>
#include <libcellml>

int main(int argc, char* argv[])
{
    libcellml::Model model;
    std::string serialisedModel = model.serialise(libcellml::CELLML_XML);
    // test serialisedModel == "<model/>" with the appropriate namespaces, etc.
    return 0;
}


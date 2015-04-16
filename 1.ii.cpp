#include <string>
#include <libcellml>

int main(int argc, char* argv[])
{
    libcellml::Model model;
    model.setName("model_name");
    // would model.name("model_name"); be better?
    std::string serialisedModel = model.serialise(libcellml::CELLML_XML);
    // test serialisedModel == "<model name='model_name'/>" with the appropriate namespaces, etc.
    return 0;
}



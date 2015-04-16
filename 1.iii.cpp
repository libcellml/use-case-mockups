#include <string>
#include <libcellml>

int main(int argc, char* argv[])
{
    libcellml::Model model;
    /*
     * There is at least two approaches to take here. The first is that we don't care about validity
     * until such time as the model is validated. i.e.,
     */
    model.setName("this is an invalid model name");
    std::string serialisedModel = model.serialise(libcellml::CELLML_XML);
    // test serialisedModel == "<model name='this is an invalid model name'/>" with the appropriate namespaces, etc.
    /*
     * or we restrict the name to be only ever set to valid strings
     */
    try
    {
        model.setName("this is an invalid name");
        std::string serialisedModel = model.serialise(libcellml::CELLML_XML);
        // test serialisedModel == "<model name='this is an invalid model name'/>" with the appropriate namespaces, etc.
    }
    catch (libcellml::Exception& e)
    {
        // e.errorMessage == Invalid name ??
    }
    std::string serialisedModel = model.serialise(libcellml::CELLML_XML);
    // test serialisedModel == "<model/>" with the appropriate namespaces, etc.
    return 0;
}

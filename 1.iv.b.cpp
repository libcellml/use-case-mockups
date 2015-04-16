#include <string>
#include <libcellml>

int main(int argc, char* argv[])
{
    libcellml::Model model;
    model.setName("model_name");
    libcellml::Component component;
    model.addComponent(component);
    component.setName("invalid component name");
    std::string serialisedModel = model.serialise(libcellml::CELLML_XML);
    // test serialisedModel == "<model name='model_name'><component name='invalid component name'/></model>"
    // with the appropriate namespaces, etc.
    return 0;
}


#include <string>
#include <libcellml>

int main(int argc, char* argv[])
{
    libcellml::Model model;
    model.setName("model_name");
    libcellml::Component component;
    model.addComponent(component);
    component.setName("component_name");
    std::string serialisedModel = model.serialise(libcellml::CELLML_XML);
    // test serialisedModel == "<model name='model_name'><component name='component_name'/></model>"
    // with the appropriate namespaces, etc.
    component.setName("updated_component_name");
    serialisedModel = model.serialise(libcellml::CELLML_XML);
    // test serialisedModel == "<model name='model_name'><component name='updated_component_name'/></model>"
    // with the appropriate namespaces, etc.
    return 0;
}


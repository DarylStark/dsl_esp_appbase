#include "dsl_esp_appbase.h"

namespace dsl
{
    namespace esp
    {
        namespace apps
        {
            // Protected methods for AppBase
            void AppBase::_setup()
            {
                for (auto &component : _components)
                    component->setup();
            };

            void AppBase::_loop()
            {
                for (auto &component : _components)
                    component->loop();
            };

            void AppBase::register_component(dsl::esp::components::Component &component)
            {
                _components.push_back(&component);
            }
        };
    };
};

#ifndef __DSL_ESP_APPBASE_H__
#define __DSL_ESP_APPBASE_H__

#include <list>
#include <dsl_esp_component.h>

namespace dsl
{
    namespace esp
    {
        namespace apps
        {
            class AppBase
            {
            public:
            protected:
                std::list<dsl::esp::components::Component *> _components;

                void _setup();
                void _loop();

            public:
                // Methods to manage components
                void register_component(dsl::esp::components::Component &component);

                // Pure virtual methods for subclasses
                virtual void setup() = 0;
                virtual void loop() = 0;
                virtual uint16_t get_status() const = 0;
            };
        };
    }
};

#endif /* __DSL_ESP_APPBASE_H__ */

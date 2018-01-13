
# ArduinoWebTemplate
ArduinoWebTemplate is a simple library to handle Html or text templates with simple variables in the way of mustache or twig {{myvariable}}.

It is usefull in projects using ESP8266 for example when you need to create web pages.

ArduinoWebTemplate can be used only with one-level variables now. So this won't work now: {{object.attribute}}. But could work in the future.

## Getting Started

Download the latest version of the library from github, and place it into your Arduino/librairies folder. Restart your Arduino IDE and voilà!
#### Latest release [![Latest release](https://img.shields.io/github/release/christophejourdan/ArduinoWebTemplate.svg)](https://github.com/christophejourdan/ArduinoWebTemplate/releases/latest/)

## How to use

Start by including the library:

```cpp
#include <ArduinoWebTemplate.h>
```

Then create the set of datas your template will use:

```cpp
ArduinoWebTemplate::Data homeDatas[] = {
    {"title", "Home"},
    {"what", "awesome"}
  };
```

And finally create the template and render it:

```cpp
ArduinoWebTemplate homeTemplate(getHeader(), getHome(), getFooter());
Serial.print(homeTemplate.render(homeDatas));
```

Example of use on a ESP8266 project:
```cpp
HTTP.on("/", HTTP_GET, [](){ 
    // Data set
    Template::Data datas[] = {
      {"lorem", "ipsum"},
      {"dolor", "amet"}
    };
	Template myTemplate(header,body,footer); // header, body and footer are generated somewhere else in the program
	HTTP.send(200, "text/html", myTemplate.render(datas));
});
```
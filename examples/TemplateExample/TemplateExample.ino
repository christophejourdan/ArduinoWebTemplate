#include <ArduinoWebTemplate.h>

void setup() {
  Serial.begin(115200);

  // Home template
  ArduinoWebTemplate::Data homeDatas[] = {
    {"title", "Home"},
    {"what", "awesome"}
  };
  
  ArduinoWebTemplate homeTemplate(getHeader(), getHome(),getFooter());
  Serial.print(homeTemplate.render(homeDatas));

  // ABout template
  ArduinoWebTemplate::Data aboutDatas[] = {
    {"title", "About"},
    {"abouttext", "I'm an awesome template!"}
  };
  
  ArduinoWebTemplate aboutTemplate(getHeader(), getAbout(),getFooter());
  Serial.print(aboutTemplate.render(aboutDatas));
}

void loop() {

}


char* getHeader(){
  return (R"foo(
    <!DOCTYPE HTML>
    <html>
      <head>
        <meta charset="UTF-8">
        <style>
          *{padding:0; margin:0; box-sizing:border-box;}
          html,body{font-size:16px;}
        </style>
      </head>
      <body>
      <header>
      </header>
  )foo");
}

char* getFooter(){
  return (R"foo(
      </body>
    </html>
  )foo");
}

char* getHome(){
  return R"foo(
    <h1>Home</h1>
    <p>This is {{what}}!</p>
  )foo";
}
char* getAbout(){
  return R"foo(
    <h1>Home</h1>
    <p>{{abouttext}}</p>
  )foo";
}
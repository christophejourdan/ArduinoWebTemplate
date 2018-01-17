/*
  ArduinoWebTemplate - Library to handle Html or text templates.
  Created by Christophe Jourdan, January 12, 2018.
  https://github.com/christophejourdan/arduinowebtemplate
  If you like this project, please add a star!
  Version: 0.2
*/


#ifndef ArduinoWebTemplate_h
#define ArduinoWebTemplate_h

#include "Arduino.h"
	
class ArduinoWebTemplate
{
  public:  

    /*
     * Struct to define the data type
     */
    typedef struct {
       String key;
       String value;
    } Data;
    
   ArduinoWebTemplate();
   ArduinoWebTemplate(char* body);
   ArduinoWebTemplate(char* header, char* body, char* footer);
   char* getHeader();
   void setHeader(char* header);
   char* getFooter();
   void setFooter(char* footer);
   char* getBody();
   void setBody(char* body);
   String render();
   template<typename T, size_t n> String render(T (&)[n]);

 private:
  char* header;
  char* footer;
  char* body;
};

#include "ArduinoWebTemplate.hpp"

#endif

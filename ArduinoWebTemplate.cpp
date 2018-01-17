/*
  ArduinoWebTemplate - Library to handle Html or text templates.
  Created by Christophe Jourdan, January 12, 2018.
  https://github.com/christophejourdan/arduinowebtemplate
  If you like this project, please add a star!
  Version: 0.2
*/

#include "Arduino.h"
#include "ArduinoWebTemplate.h"
	
/*
 * Constructor for a template with only a body
 * @param body The body
 */
ArduinoWebTemplate::ArduinoWebTemplate(){
  this->header = "";
  this->body = "";
  this->footer = "";
}

/*
 * Constructor for a template with only a body
 * @param body The body
 */
ArduinoWebTemplate::ArduinoWebTemplate(char* body){
  this->body = body;
  this->header = "";
  this->footer = "";
}

/*
 * Constructor for a template with a header, a body and a footer
 * @param header The header
 * @param body The body
 * @param footer The footer
 */
ArduinoWebTemplate::ArduinoWebTemplate(char* header, char* body,char* footer){
  this->header = header;
  this->body = body;
  this->footer = footer;
}

/*
 * Get the header
 * @return The header
 */
char* ArduinoWebTemplate::getHeader(){
  return this->header;
}

/*
 * Set the header
 * @param header The header
 */
void ArduinoWebTemplate::setHeader(char* header){
  this->header = header;
}

/*
 * Get the footer
 * @return The footer
 */
char* ArduinoWebTemplate::getFooter(){
  return this->footer;
}

/*
 * Set the footer
 * @param footer The footer
 */
void ArduinoWebTemplate::setFooter(char* footer){
  this->footer = footer;
} 

/*
 * Get the body
 * @return The body
 */
char* ArduinoWebTemplate::getBody(){
  return this->body;
}
    
/*
 * Set the body
 * @param body The footer
 */
void ArduinoWebTemplate::setBody(char* body){
  this->body = body;
}

/*
 * Render the template as is
 */
String ArduinoWebTemplate::render()
{
  return String(this->header) + String(this->body) + String(this->footer);
}


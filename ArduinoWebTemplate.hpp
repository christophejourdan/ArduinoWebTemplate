/*
 * Render the template, replace the variables by the values
 * Variables must be like {{variable}}
 * @param values Array of Data (key, value)
 */
template<typename T, size_t n>
String ArduinoWebTemplate::render(T (&values)[n]) {
  String str = String(this->header) + String(this->body) + String(this->footer);
  for (int i=0; i<n; i++)
  {
      str.replace("{{"+(String)values[i].key+"}}", values[i].value);
  }
  return str;
}
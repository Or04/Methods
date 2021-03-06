#pragma
#include "../../Control/Control.h"

class TextBox : public Control
{

  private:
	string value = "";

  public:
	TextBox(int);
	void SetValue(string _value) 	{ this->value = _value; }
	string GetValue() 						{ return this->value; }
	int getWidth() 								{ return this->width; }
	int getHeight() 							{ return this->height; }
	void draw(Graphics, int, int, size_t);
	void keyDown(int, char);
	bool canGetFocus() 						{ return true; }
	void mousePressed(int, int, DWORD);
};

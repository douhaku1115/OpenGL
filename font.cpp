#include "font.h"
#include "glut.h"
#include "glm/glm.hpp"
using namespace glm;

static vec2 position;
static float size = FONT_DEFAULT_SIZE;

void fontBegin() {
	glPushMatrix();
	glPushAttrib(GL_ALL_ATTRIB_BITS);//GLbitfield mask

	glMatrixMode(GL_PROJECTION);//(GLenum mode);
	glLoadIdentity();

	GLint viewport[4];
	glGetIntegerv(GL_VIEWPORT,viewport);//GLenum pname, GLint *params);
	
	gluOrtho2D(
		0,//GLdouble left,
		viewport[2],//GLdouble right,
		viewport[3],	//GLdouble bottom,
		0);	//GLdouble top);
	glMatrixMode(GL_MODELVIEW);//GLenum mode
	glLoadIdentity();
	glDisable(GL_DEPTH_TEST);
	glDisable(GL_LIGHTING);
	glDisable(GL_TEXTURE_2D);
}
void fontEnd() {
	glPopMatrix();
	glPopAttrib();
}

void fontSetPosition(float _x, float _y) {

}
void fontSetSize(float _size) {

}
void fontSetColor(unsigned char _red, unsigned char _green, unsigned char _blue) {

}
void fontDraw(const char _format, ...) {


}

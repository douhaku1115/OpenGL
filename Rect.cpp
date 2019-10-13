
#include  "Rect.h"


Rect::Rect(vec2 const& _position, vec2 const& _size) 
	:m_position(_position)
	,m_size(_size)
{}
void Rect::Draw() {
	glRectf(
		m_position.x, m_position.y,	//(GLfloat x1, GLfloat y1, 
		m_position.x + m_size.x, m_position.y + m_size.y	//GLfloat x2, GLfloat y2);
	);
}
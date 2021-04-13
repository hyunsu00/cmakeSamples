// Rect.cpp
#include "Rect.h"

namespace semtl {

	Rect::Rect(float w, float h)
	: m_W(w), m_H(h)
	{
	}

	float Rect::GetSize() const
	{
		return m_W * m_H;
	}

} // namespace semt

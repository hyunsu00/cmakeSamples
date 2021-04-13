// Rect.h
#pragma once

// TODO: 여기서 프로그램에 필요한 추가 헤더를 참조합니다.
namespace semtl {

	class Rect {
	public:
		Rect(float w, float h);
	public:
		float GetSize() const;
	private:
		float m_W;
		float m_H;
	}; // class Rect

} // namespace semt
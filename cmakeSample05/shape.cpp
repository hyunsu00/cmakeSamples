#include "shape.h"
#include "util.h"
#include <stdio.h>

namespace shape {

	Rectangle::Rectangle(float w, float h) 
    : w_(w), h_(h)
    {
    }

	float Rectangle::GetSize() const 
    { 
        return w_ * h_; 
    }

	void Rectangle::Print() const 
    {
		printf("내 크기는 : %f 입니다. \n", GetSize());
	}

    void Rectangle::Print(const wchar_t* msg) const
    {
        UNREFERENCED_PARAMETER(msg);
        this->Print();
    }

}  // namespace shape
#ifndef __SHAPE_H__
#define __SHAPE_H__

namespace shape {
	class Rectangle 
    {
	public:
		Rectangle(float w, float h);

		float GetSize() const;
		void Print() const;
		void Print(const wchar_t* msg) const;

	private:
		float w_, h_;
	};
}

#endif // __SHAPE_H__

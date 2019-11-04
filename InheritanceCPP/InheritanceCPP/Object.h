#ifndef	_OBJECT_H
#define _OBJECT_H



class Object
{
public:
	Object(int id);
	virtual ~Object();
	
	int GetId() const;
	double GetX() const;
	double GetY() const;
	void SetX(double x);
	void SetY(double y);
	
private:
	int id;
	double x, y;
};
#endif // !_OBJECT_H


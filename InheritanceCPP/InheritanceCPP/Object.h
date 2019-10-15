

class Object
{
public:
	Object(int aId) : id(aId) {};
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


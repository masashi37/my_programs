

class cCharaMove{

private:

	float verocity;

public:

	cCharaMove();

	void move();
	void moveCancel();
	//壁に着く関数
	void wallAdsorb();
};
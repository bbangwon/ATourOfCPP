module;	//모듈을 정의

export module ModuleVector;	//ModuleVector 모듈을 정의

export class ModuleVector {
public:
	ModuleVector(int s);
	double& operator[](int i) const;
	int size() const;
private:
	double* elem;
	int sz;
};

ModuleVector::ModuleVector(int s) : elem{ new double[s] }, sz{ s }
{
}

double& ModuleVector::operator[](int i) const
{
	return elem[i];
}

int ModuleVector::size() const
{
	return sz;
}

export int size(const ModuleVector& v)
{
	return v.size();
}

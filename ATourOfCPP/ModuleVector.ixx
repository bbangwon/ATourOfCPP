module;	//����� ����

export module ModuleVector;	//ModuleVector ����� ����

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

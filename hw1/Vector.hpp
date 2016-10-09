#include <iostream>
using namespace std;

namespace DrDivMonster {

	class Vector {

	public:

		double x, y, z;

		//default constructor
		Vector() {						
			x = y = z = 0;
		}

		//initialization constructor
		Vector(const double x, const double y, const double z) {
			this->x = x;
			this->y = y;
			this->z = z;
		}

		//copy constructor
		Vector(const Vector& v) {	
			x = v.x;
			y = v.y;
			z = v.z;
		}

		//accessor methods: getters
		double getX() const { return x; }	
		double getY() const { return y; }
		double getZ() const { return z; }

		//accessor methods: setters
		void setX(const double x){ this->x = x; }	
		void setY(const double y){ this->y = y; }
		void setZ(const double z){ this->z = z; }

		double magnitude() const {
			return sqrt(x*x + y*y + z*z);
		}

		double dotproduct(const Vector& v1) const {
			return (v1.x * x + v1.y * y + v1.z + z);
		}

	protected:

		friend ostream& operator << (ostream&o, const Vector& v){
			o << '(' << v.x << ',' << v.y << ',' << v.z << ")";
			return o;
		}

		friend Vector operator + (const Vector& v1, const Vector& v2) {
			return Vector(v1.x + v2.x, v1.y + v2.y, v1.z + v2.z);
		}

		friend Vector operator - (const Vector& v1, const Vector& v2) {
			return Vector(v1.x - v2.x, v1.y - v2.y, v1.z - v2.z);
		}

		friend Vector& operator += (Vector& v1, const Vector& v2) {
			v1.x += v2.x;
			v1.y += v2.y;
			v1.z += v2.z;
			return v1;
		}

		friend Vector& operator -= (Vector& v1, const Vector& v2) {
			v1.x -= v2.x;
			v1.y -= v2.y;
			v1.z -= v2.z;
			return v1;
		}

		friend Vector operator * (const Vector& v1, const double& a) {
			return Vector(a * v1.x, a * v1.y, a * v1.z);
		}

		friend Vector operator * (const double& a, const Vector& v1) {
			return v1 * a;
		}

		friend Vector operator / (const Vector& v1, const double& a) {
			return Vector(a / v1.x, a / v1.y, a / v1.z);
		}


	private:

	};

}
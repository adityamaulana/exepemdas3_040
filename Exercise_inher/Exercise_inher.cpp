#include <iostream>

using namespace std;

class bidangDatar
{
	private:
		
		int X;
		int p;
		int j; 

	//variabel untuk menyimpan input dari lingkaran maupun bujursangkar
	
	public:
	bidangDatar() 
		{ //constructor
			X = 0;
			p = 3,14;
			j = 0;
		}

	void setX(int a)
	{
		//fungsi untuk memberi/mengirim nilai pada x 
		this->X = a;
	}

	int getX()
	{
		//fungsi untuk membaca/mengambil nilai dalam x
		return X;
	}

	
	virtual void input() 
	{} 
	
	// fungsi yang menerima input dan mengirim input melalui fungsi setX untuk disimpan di x

	virtual float Luas(int a) 
		{ 
				
			return X = p * j * j; 
	
		} 
	
	//fungsi untuk menghitung luas 

	virtual float Keliling(int a) 
		{ 
		
			return X = 2 * p * j; 
	
		} 
	
	//fungsi untuk menghitung keliling

};


class Lingkaran : bidangDatar
{
};

class Lingkaran :public bidangDatar { /*lengkapi disini*/ };class Bujursangkar :public bidangDatar { /*lengkapi disini*/ };

int main() 

{ 
	
	/*lengkapi disini*/ 

}

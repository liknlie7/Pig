#include <iostream>
#include "Dice.h"
#include <cstdlib>
#include <ctime>
using namespace std;

Dice::Dice(int faces)
{
	m_faces = faces;
	m_result = 0;
}

int Dice::Roll()
{
	srand(static_cast<unsigned int>(time(nullptr)));

	m_result = rand() % m_faces + 1;

	return m_result;
}

void Dice::Show()
{
	if (m_result == 0)
	{
		cout << "0“_" << endl;
	}
	else
	{
		cout << m_result << endl;
	}
}
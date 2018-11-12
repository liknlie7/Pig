#include <iostream>
#include "Pig.h"
using namespace std;

Pig::Pig():m_dice(6)
{
	m_sum = 0;
	m_result = 0;
	m_next = 0;
}

void Pig::Jugdment()
{
	for (;;)
	{
		m_result = m_dice.Roll();

		if (m_result == 1)
		{
			m_dice.Show();

			cout << "Pig!" << endl;
			break;
		}
		
		m_sum += m_result;

		if (m_sum >= 50)
		{
			cout << "0点" << endl;
			break;
		}

		cout << m_sum << endl;

		cout << "続ける？" << endl << "Y...[1],N...[0]" << endl;
		cin >> m_next;

		if (m_next == 0)
		{
			cout << "合計" << m_sum << "点です" << endl;
			break;
		}
	}
}
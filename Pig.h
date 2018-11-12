#include"Dice.h"
#pragma once

class Pig
{
	private:
		int m_sum;
		int m_result;
		bool m_next;
		Dice m_dice;
	public:
		Pig();
		void Jugdment();
};
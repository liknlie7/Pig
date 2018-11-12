#pragma once

class Dice
{
	private:
		int m_faces;
		int m_result;
	public:
		Dice(int faces);

		int Roll();
		void Show();
};
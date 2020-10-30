#pragma once
class Score
{
	public:
		// constructor(s)
		Score();

		// getters
		int GetResult() const;

		// setters
		void UpdateResult(int amount);
	private:
		int result = 0;
};


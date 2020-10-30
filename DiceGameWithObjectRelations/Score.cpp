#include "Score.h"

Score::Score()
{

}

int Score::GetResult() const
{
	return result;
}

void Score::UpdateResult(int amount)
{
	result += amount;
}

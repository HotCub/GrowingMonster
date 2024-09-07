#include "Player.h"
#include <iomanip>

void PlayerStats::setTribe(std::string tribeString)
{
	this->tribe = tribeString;

}

void PlayerStats::setStats(StatType statType, int statPoints)
{
	switch (statType) {
	case E친밀도:
		this->친밀도 += statPoints;
		break;
	case E스트레스:
		this->스트레스 += statPoints;
		break;
	case E도덕성:
		this->도덕성 += statPoints;
		break;
	case E체력:
		this->체력 += statPoints;
		break;
	case E근력:
		this->근력 += statPoints;
		break;
	case E지능:
		this->지능 += statPoints;
		break;
	case E업보:
		this->업보 += statPoints;
		break;
	case E전투기술:
		this->전투기술 += statPoints;
		break;
	case E공격력:
		this->공격력 += statPoints;
		break;
	case E방어력:
		this->방어력 += statPoints;
		break;
	case E마법기술:
		this->마법기술 += statPoints;
		break;
	case E마력:
		this->마력 += statPoints;
		break;
	case E항마력:
		this->항마력 += statPoints;
		break;
	case E전사평가:
		this->전사평가 += statPoints;
		break;
	case E마법평가:
		this->마법평가 += statPoints;
		break;
	case E예의범절:
		this->예의범절 += statPoints;
		break;
	case E예술:
		this->예술 += statPoints;
		break;
	case E화술:
		this->화술 += statPoints;
		break;
	case E성품:
		this->성품 += statPoints;
		break;
	case E질병지수:
		this->질병지수 += statPoints;
		break;
	case E불량화지수:
		this->불량화지수 += statPoints;
		break;
	case E인맥:
		this->인맥 += statPoints;
		break;
	case E몸무게:
		this->몸무게 += statPoints;
		break;
	case MONEY:
		this->money += statPoints;
		break;
	case YEAR:
		this->year += statPoints;
		break;
	case MONTH:
		this->setMonth(statPoints);
		break;
	default:
		std::cout << "잘못된 스탯 번호입니다." << std::endl;
		break;
	}
}

void PlayerStats::setMonth(int num)
{
	this->month += num;
	if (this->month == 12)
	{
		this->month == 0;
		this->year++;
	}
}

void PlayerStats::printStats()
{
	std::cout << "\n===========================================================\n\n";
	std::cout << "\n종족 [ " << tribe << " ]\n";
	std::cout << "생후 " << this->year << "년 " << this->month << "일\n";
	std::cout << "보유 자금 : " << this->money << "골드\n\n";
	std::cout << std::left; //왼쪽정렬
	std::cout << std::setw(15) << "친밀도 "; 그래프(this->친밀도);
	std::cout << std::setw(15) << "스트레스 "; 그래프(this->스트레스);
	std::cout << std::setw(15) << "도덕성 "; 그래프(this->도덕성);
	std::cout << std::setw(15) << "체력 "; 그래프(this->체력);
	std::cout << std::setw(15) << "근력 "; 그래프(this->근력);
	std::cout << std::setw(15) << "지능 "; 그래프(this->지능);
	std::cout << std::setw(15) << "업보 "; 그래프(this->업보);
	std::cout << "\n" << std::setw(15) << "전투기술 "; 그래프(this->전투기술);
	std::cout << std::setw(15) << "공격력 "; 그래프(this->공격력);
	std::cout << std::setw(15) << "방어력 "; 그래프(this->방어력);
	std::cout << std::setw(15) << "마법기술 "; 그래프(this->마법기술);
	std::cout << std::setw(15) << "마력 "; 그래프(this->마력);
	std::cout << std::setw(15) << "항마력 "; 그래프(this->항마력);
	std::cout << "\n" << std::setw(15) << "전사평가 "; 그래프(this->전사평가);
	std::cout << std::setw(15) << "마법평가 "; 그래프(this->마법평가);
	std::cout << "\n" << std::setw(15) << "예의범절 "; 그래프(this->예의범절);
	std::cout << std::setw(15) << "예술 "; 그래프(this->예술);
	std::cout << std::setw(15) << "화술 "; 그래프(this->화술);
	std::cout << std::setw(15) << "성품 "; 그래프(this->성품);
	std::cout << "\n" << std::setw(15) << "질병지수 "; 그래프(this->질병지수);
	std::cout << std::setw(15) << "불량화지수 "; 그래프(this->불량화지수);
	std::cout << "\n" << std::setw(15) << "인맥 "; 그래프(this->인맥);
	std::cout << std::setw(15) << "몸무게 "; 그래프(this->몸무게);
	std::cout << "\n===========================================================\n\n";
}

void 그래프(int stat)
{
	int gauge = 0;
	gauge = stat / 10;
	for (int i = 0; i < 10; ++i)
	{
		if (gauge >= i) std::cout << "ㅁ";
		else std::cout << "#";
	}
	if (stat > 100) std::cout << " ( MAX )";
	else std::cout << " ( " << stat << " )\n";
}
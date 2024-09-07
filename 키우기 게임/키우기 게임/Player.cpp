#include "Player.h"
#include <iomanip>

void PlayerStats::setTribe(std::string tribeString)
{
	this->tribe = tribeString;

}

void PlayerStats::setStats(StatType statType, int statPoints)
{
	switch (statType) {
	case Eģ�е�:
		this->ģ�е� += statPoints;
		break;
	case E��Ʈ����:
		this->��Ʈ���� += statPoints;
		break;
	case E������:
		this->������ += statPoints;
		break;
	case Eü��:
		this->ü�� += statPoints;
		break;
	case E�ٷ�:
		this->�ٷ� += statPoints;
		break;
	case E����:
		this->���� += statPoints;
		break;
	case E����:
		this->���� += statPoints;
		break;
	case E�������:
		this->������� += statPoints;
		break;
	case E���ݷ�:
		this->���ݷ� += statPoints;
		break;
	case E����:
		this->���� += statPoints;
		break;
	case E�������:
		this->������� += statPoints;
		break;
	case E����:
		this->���� += statPoints;
		break;
	case E�׸���:
		this->�׸��� += statPoints;
		break;
	case E������:
		this->������ += statPoints;
		break;
	case E������:
		this->������ += statPoints;
		break;
	case E���ǹ���:
		this->���ǹ��� += statPoints;
		break;
	case E����:
		this->���� += statPoints;
		break;
	case Eȭ��:
		this->ȭ�� += statPoints;
		break;
	case E��ǰ:
		this->��ǰ += statPoints;
		break;
	case E��������:
		this->�������� += statPoints;
		break;
	case E�ҷ�ȭ����:
		this->�ҷ�ȭ���� += statPoints;
		break;
	case E�θ�:
		this->�θ� += statPoints;
		break;
	case E������:
		this->������ += statPoints;
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
		std::cout << "�߸��� ���� ��ȣ�Դϴ�." << std::endl;
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
	std::cout << "\n���� [ " << tribe << " ]\n";
	std::cout << "���� " << this->year << "�� " << this->month << "��\n";
	std::cout << "���� �ڱ� : " << this->money << "���\n\n";
	std::cout << std::left; //��������
	std::cout << std::setw(15) << "ģ�е� "; �׷���(this->ģ�е�);
	std::cout << std::setw(15) << "��Ʈ���� "; �׷���(this->��Ʈ����);
	std::cout << std::setw(15) << "������ "; �׷���(this->������);
	std::cout << std::setw(15) << "ü�� "; �׷���(this->ü��);
	std::cout << std::setw(15) << "�ٷ� "; �׷���(this->�ٷ�);
	std::cout << std::setw(15) << "���� "; �׷���(this->����);
	std::cout << std::setw(15) << "���� "; �׷���(this->����);
	std::cout << "\n" << std::setw(15) << "������� "; �׷���(this->�������);
	std::cout << std::setw(15) << "���ݷ� "; �׷���(this->���ݷ�);
	std::cout << std::setw(15) << "���� "; �׷���(this->����);
	std::cout << std::setw(15) << "������� "; �׷���(this->�������);
	std::cout << std::setw(15) << "���� "; �׷���(this->����);
	std::cout << std::setw(15) << "�׸��� "; �׷���(this->�׸���);
	std::cout << "\n" << std::setw(15) << "������ "; �׷���(this->������);
	std::cout << std::setw(15) << "������ "; �׷���(this->������);
	std::cout << "\n" << std::setw(15) << "���ǹ��� "; �׷���(this->���ǹ���);
	std::cout << std::setw(15) << "���� "; �׷���(this->����);
	std::cout << std::setw(15) << "ȭ�� "; �׷���(this->ȭ��);
	std::cout << std::setw(15) << "��ǰ "; �׷���(this->��ǰ);
	std::cout << "\n" << std::setw(15) << "�������� "; �׷���(this->��������);
	std::cout << std::setw(15) << "�ҷ�ȭ���� "; �׷���(this->�ҷ�ȭ����);
	std::cout << "\n" << std::setw(15) << "�θ� "; �׷���(this->�θ�);
	std::cout << std::setw(15) << "������ "; �׷���(this->������);
	std::cout << "\n===========================================================\n\n";
}

void �׷���(int stat)
{
	int gauge = 0;
	gauge = stat / 10;
	for (int i = 0; i < 10; ++i)
	{
		if (gauge >= i) std::cout << "��";
		else std::cout << "#";
	}
	if (stat > 100) std::cout << " ( MAX )";
	else std::cout << " ( " << stat << " )\n";
}
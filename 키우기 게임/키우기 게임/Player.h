#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <iostream>
#pragma once

enum StatType {
	Eģ�е� = 0,
	E��Ʈ���� = 1,
	E������ = 2,
	Eü�� = 3,
	E�ٷ� = 4,
	E���� = 5,
	E���� = 6,
	E������� = 7,
	E���ݷ� = 8,
	E���� = 9,
	E������� = 10,
	E���� = 11,
	E�׸��� = 12,
	E������ = 13,
	E������ = 14,
	E���ǹ��� = 15,
	E���� = 16,
	Eȭ�� = 17,
	E��ǰ = 18,
	E�������� = 19,
	E�ҷ�ȭ���� = 20,
	E�θ� = 21,
	E������ = 22,
	MONEY = 23,
	MONTH = 24,
	YEAR = 25
};

struct PlayerStats {
	std::string tribe = "";
	int ģ�е� = 0;
	int ��Ʈ���� = 0;
	int ������ = 0;
	int ü�� = 0;
	int �ٷ� = 0;
	int ���� = 0;
	int ���� = 0;
	int ������� = 0;
	int ���ݷ� = 0;
	int ���� = 0;
	int ������� = 0;
	int ���� = 0;
	int �׸��� = 0;
	int ������ = 0;
	int ������ = 0;
	int ���ǹ��� = 0;
	int ���� = 0;
	int ȭ�� = 0;
	int ��ǰ = 0;
	int �������� = 0;
	int �ҷ�ȭ���� = 0;
	int �θ� = 0;
	int ������ = 0;
	int month = 0;
	int year = 0;
	int money = 0;

	void setTribe(std::string tribeString);

	void setStats(StatType statType, int statPoints);

	void printStats();

	void setMonth(int num);
};

#endif // PLAYER_H

void �׷���(int stat);
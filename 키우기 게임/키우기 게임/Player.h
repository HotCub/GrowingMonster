#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <iostream>
#pragma once

enum StatType {
	E친밀도 = 0,
	E스트레스 = 1,
	E도덕성 = 2,
	E체력 = 3,
	E근력 = 4,
	E지능 = 5,
	E업보 = 6,
	E전투기술 = 7,
	E공격력 = 8,
	E방어력 = 9,
	E마법기술 = 10,
	E마력 = 11,
	E항마력 = 12,
	E전사평가 = 13,
	E마법평가 = 14,
	E예의범절 = 15,
	E예술 = 16,
	E화술 = 17,
	E성품 = 18,
	E질병지수 = 19,
	E불량화지수 = 20,
	E인맥 = 21,
	E몸무게 = 22,
	MONEY = 23,
	MONTH = 24,
	YEAR = 25
};

struct PlayerStats {
	std::string tribe = "";
	int 친밀도 = 0;
	int 스트레스 = 0;
	int 도덕성 = 0;
	int 체력 = 0;
	int 근력 = 0;
	int 지능 = 0;
	int 업보 = 0;
	int 전투기술 = 0;
	int 공격력 = 0;
	int 방어력 = 0;
	int 마법기술 = 0;
	int 마력 = 0;
	int 항마력 = 0;
	int 전사평가 = 0;
	int 마법평가 = 0;
	int 예의범절 = 0;
	int 예술 = 0;
	int 화술 = 0;
	int 성품 = 0;
	int 질병지수 = 0;
	int 불량화지수 = 0;
	int 인맥 = 0;
	int 몸무게 = 0;
	int month = 0;
	int year = 0;
	int money = 0;

	void setTribe(std::string tribeString);

	void setStats(StatType statType, int statPoints);

	void printStats();

	void setMonth(int num);
};

#endif // PLAYER_H

void 그래프(int stat);
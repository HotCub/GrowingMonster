#include <cstring>
#include <iostream>
#include <windows.h>
#include <string>
#include "Player.h"
#include "GrowingMonster.h"

int main()
{
	std::string name;
	std::string Char;

	Char = 기본세팅();
	name = 이름();
	system("cls");

	start(Char, name);
	home(Char, name);

}

std::string 기본세팅(void)
{
	std::string Char;
	std::cout << "무슨 동물을 키우시겠습니까?\n";
	std::cout << "===========================================================\n\n";
	std::cout << "1. 소\n2. 호랑이\n3. 곰\n4. 두꺼비\n";
	std::cout << "\n===========================================================\n\n";

	for (int K = 0; K < 10; ++K)
	{
		std::cout << "입력 : ";
		std::cin >> Char;
		std::cin.get();

		if (Char == "소"||Char =="호랑이" || Char == "곰" || Char == "두꺼비")
		{
			std::cout << "\n" << Char << "를 선택하셨습니다.\n";
			break;
		}
		else 
		{
			if (K < 9) std::cout << "다시 입력해주세요.\n";
			else if (K >= 9)
			{
				std::cout << "\n입력 횟수를 모두 소모하였습니다.\n";
				std::cout << "히든 캐릭터 : 상어가 선택되었습니다.\n";
				Char = "상어";
				continue;
			}
		}
	}
	player.setTribe(Char);
	return Char;
}
std::string 이름(void)
{
	std::string name;
	std::cout << "이름은 무엇으로 지을까요?\n입력 : ";
	std::cin >> name;
	std::cin.get();
	std::cout << '\n' << name << "이군요! 멋진 이름입니다!\n";
	std::cout << "그럼 게임을 시작하겠습니다!\n\n";
	Sleep(2000);
	return name;
}

void start(std::string Char, std::string name)
{
	if (Char != "상어")
	{
		std::cout << "[ 프롤로그 ]\n";
		Sleep(2000);
		std::cout << "\n화창한 어느 날\n";
		Sleep(1200);
		std::cout << "나는 하늘에서 찬란한 빛 하나가 뒷산으로 떨어지는 것을 보았다.\n";
		Sleep(1500);
		std::cout << "호기심에 나는 재빠르게 뒷산으로 달려갔고\n";
		Sleep(1500);
		std::cout << "내가 발견한 것은\n";
		Sleep(1300);
		std::cout << "엄청나게 희고 아름다운..\n\n";
		Sleep(1500);
		if (Char == "소")
		{
			std::cout << "송아지였다..\n\n";
		}
		else if (Char == "호랑이")
		{
			std::cout << "호랑이였다..\n\n";
		}
		else if (Char == "곰")
		{
			std::cout << "곰이었다..\n\n";
		}
		else if (Char == "두꺼비")
		{
			std::cout << "올챙이였다..\n\n";
		}
		Sleep(2000);
		std::cout << "나는 " << name << "을(를) 최고의 " << Char << "로 키워내기로 " << name << "을(를) 본 순간 다짐했다.\n";
	}
	else
	{
		std::cout << "[ 프롤로그 ]\n";
		Sleep(2000);
		std::cout << "\n드물게도 폭우가 쏟아지던 어느 날\n";
		Sleep(1200);
		std::cout << "나는 해저에서 푸른, 그리고 동시에 붉은 빛이 솟아오르는 것을 보았다.\n";
		Sleep(1500);
		std::cout << "두려움에 나는 재빠르게 바다를 등지고 내달렸지만\n";
		Sleep(1500);
		std::cout << "결국 바다에 삼켜진 내가 발견한 건\n";
		Sleep(1300);
		std::cout << "한 눈에 봐도 꺼림칙한 분위기가 맴도는\n\n";
		Sleep(1500);
		std::cout << "보라빛의 검은 상어였다.\n";
		Sleep(2000);
		std::cout << "나는 이 괴물의 힘에 매료되어 키워 빼앗기로 하였다.\n";
	}
	Sleep(3000);
}

void home(std::string Char, std::string name)
{
	srand((unsigned)time(NULL));

	while (1)
	{
		if (player.month == 12)
		{
			player.month = 0;
			player.year++;
		}
		system("cls");
		std::cout << "무엇을 하시겠습니까?\n\n";
		std::cout << "===========================================================\n\n";
		std::cout << "1. " << name << "와의 대화\n2. 일정 짜기\n3. 식단 관리\n4. 캐릭터 정보\n5. 게임 종료\n";
		std::cout << "\n===========================================================\n\n";
		std::cout << "입력 : ";
		std::string 할일정하기;
		getline(std::cin, 할일정하기);

		std::string str = "와의 대화";
		std::string temp = name + str;

		if (할일정하기 == temp)
		{
			system("cls");
			std::cout << "어떤 주제로 대화하시겠습니까?\n";
			std::cout << "\n===========================================================\n\n";
			std::cout << "1. 칭찬\n2. 꾸짖기\n3. 잡담\n4. 체벌\n";
			std::cout << "\n===========================================================\n\n";
			std::cout << "입력 : ";
			std::string 대화;
			std::cin >> 대화;

			std::cout << '\n';
			if (대화 == "칭찬")
			{
				player.setStats(E친밀도, 10);
				std::cout << name << "이 좋아하는 것 같다!\n\n";
				Sleep(2000);
				std::cout << "친밀도가 10 올랐다!\n";
			}
			else if (대화 == "꾸짖기")
			{
				player.setStats(E스트레스, 10);
				player.setStats(E도덕성, 5);
				player.setStats(E친밀도, -5);
				std::cout << name << "의 기분이 안 좋아보인다..\n\n";
				Sleep(2000);
				std::cout << "스트레스가 10 올랐다!\n도덕성이 5 올랐다!\n친밀도가 5 떨어졌다!\n";
			}
			else if (대화 == "잡담")
			{
				player.setStats(E친밀도, 5);
				player.setStats(E스트레스, -5);
				int 잡담;
				잡담 = rand() % 5;

				switch (잡담)
				{
				case 0:
					std::cout << "당신의 아재개그에 " << name << "의 손발이 오그라들기 시작했다!\n\n";
					Sleep(2000);
					player.setStats(E항마력, 5);
					player.setStats(E마력, 5);
					std::cout << "항마력이 5 올랐다!\n마력이 5 올랐다!\n";
					break;
				case 1:
					std::cout << "당신의 일상 이야기에 " << name << "은(는) 조용히 경청했다.\n\n";
					Sleep(2000);
					player.setStats(E지능, 5);
					player.setStats(E예의범절, 5);
					player.setStats(E화술, 5);
					player.setStats(E성품, 5);
					player.setStats(E도덕성, 5);
					player.setStats(E불량화지수, -5);
					std::cout << "지능이 5 올랐다!\n예의범절이 5 올랐다!\n화술이 5 올랐다!\n성품이 5 올랐다!\n도덕성이 5 올랐다!\n불량화지수가 5 떨어졌다!\n";
					break;
				case 2:
					std::cout << "당신의 모험담에 " << name << "이(가) 흥미진진해하며 들었다.\n\n";
					Sleep(2000);
					player.setStats(E전투기술, 5);
					player.setStats(E전사평가, 5);
					player.setStats(E마법평가, 5);
					player.setStats(E불량화지수, 5);
					player.setStats(E지능, -1);
					std::cout << "전투기술이 5 올랐다!\n전사평가가 5 올랐다!\n마법평가가 5 올랐다!\n불량화지수가 5 올랐다!\n지능이 1 떨어졌다!\n";
					break;
				case 3:
					std::cout << "당신의 마을 사람들에 대한 이야기에 " << name << "은(는) 집중해서 들었다.\n\n";
					Sleep(2000);
					player.setStats(E도덕성, 5);
					player.setStats(E지능, 5);
					player.setStats(E예의범절, 5);
					player.setStats(E성품, 5);
					player.setStats(E인맥, 5);
					std::cout << "도덕성이 5 올랐다!\n지능이 5 올랐다!\n예의범절이 5 올랐다!\n성품이 5 올랐다!\n인맥이 5 올랐다!\n";
					break;
				case 4:
					std::cout << "당신의 맛집기행담에 " << name << "은(는) 입맛을 다셨다.\n\n";
					Sleep(2000);
					player.setStats(E체력, 5);
					player.setStats(E근력, 5);
					player.setStats(E방어력, 5);
					player.setStats(E몸무게, 5);
					player.setStats(E질병지수, -5);
					std::cout << "체력이 5 올랐다!\n근력이 5 올랐다!\n방어력이 5 올랐다!\n몸무게가 5 올랐다!\n질병지수가 5 떨어졌다!\n";
					break;
				default:
					break;
				}
			}
			else if (대화 == "체벌")
			{
				std::cout << "당신의 체벌에 " << name << "와 사이가 매우 나빠졌다.\n\n";
				Sleep(3000);
				player.setStats(E친밀도, -20);
				player.setStats(E도덕성, -20);
				player.setStats(E예의범절, -20);
				player.setStats(E성품, -20);
				player.setStats(E스트레스, 20);
				player.setStats(E불량화지수, 20);
				std::cout << "스트레스가 20 올랐다!\n불량화지수가 20 올랐다!\n친밀도가 20 떨어졌다!\n도덕성이 20 떨어졌다!\n예의범절이 20 떨어졌다!\n성품이 20 떨어졌다!\n";
			}
			Sleep(2000);
		}

		if (할일정하기 == "일정 짜기")
		{
			std::cout << "무엇을 하시겠습니까?\n";
			player.setStats(MONTH, 1);
		}
		else if (할일정하기 == "식단 관리")
		{
			std::cout << "식단 관리를 어떤 방침으로 정하겠습니까?\n";
		}
		else if (할일정하기 == "캐릭터 정보")
		{
			player.printStats();

			std::string 복귀;
			std::cout << "\n돌아가시길 원하시다면 아무 키를 입력해주세요.\n\n입력 : ";
			std::cin >> 복귀;
		}
		else if (할일정하기 == "게임 종료")
		{
			std::cout << "게임 종료 시 저장이 되지 않습니다.\n그럼에도 종료하시겠습니까?\n예 / 아니오\n\n";
			std::cout << "입력 : ";
			std::string 게임종료;
			std::cin >> 게임종료;
			if (게임종료 == "예")
			{
				std::cout << name << "을(를) 도축합니다.\n";
				Sleep(2000);
				std::cout << "촬영 후 남은 " << name << "은(는) 제작진이 맛있게 먹었답니다 \n♪~ N( > o< )/\n";
				Sleep(2000);
				break;
			}
			else if (게임종료 == "아니오")
			{
				std::cout << "게임으로 돌아갑니다.\n";
				Sleep(2000);
			}
		}
	}
}


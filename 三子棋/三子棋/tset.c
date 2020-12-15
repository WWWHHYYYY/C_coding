#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "game.h"//引自己的头文件用双引号表示

//测试三子棋


void menu()
{
	printf("*************************\n");
	printf("***** 1. play 0.exit*****\n");
	printf("*************************\n");
}
void game()
{
	char ret = 0;
	//创建数组
	char board[ROW][COL] = { 0 };
	//初始化棋盘棋盘时，所有位置用空格表示->数组的坐标为空格
	InitBoard(board,ROW,COL);
	//打印棋盘
	DisplayBoard(board,ROW,COL);
	//开始下棋
	while (1)
	{
		//玩家下棋
		PlayerMove(board,ROW,COL);
		DisplayBoard(board, ROW, COL);
		//判断玩家是否赢
		ret = IsWin(board,ROW,COL);
		if (ret != 'C')
		{
			break;
		}
		//电脑下棋
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断电脑是否赢
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else
	{
		printf("平局\n");
	}
}
void test()
{
	srand(time(0));
	int input = 0;
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
			
	} while (input);
}

int main()
{
	test();
	return 0;
}
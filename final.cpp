#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <conio.h>
#include <locale.h>
#include <time.h>
#include <clocale>
#include <stdlib.h>
#include <limits.h>
#include <ctype.h>

using namespace std;
int i, j, m, n, v;
int** graph;
int counter;
bool sr = false;
int nachalo;
int k, p;
int res;
int reb;
int ch;
int ch1;
int popp, porp = 2;
int** inc;

int main() {
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	FILE *S1;
	S1 = fopen("matrix.txt", "w");
	if (S1 == NULL)
  {
    printf("�� ������� ������� ����");
    getchar();
    return 0;
  }
	fclose(S1);
	while (1) {
		opp:
		system("cls");
		int res;
		S1 = fopen("S1.txt", "w");
		fprintf(S1, "|------------------------|\n");
		fprintf(S1, "| ����� ����������� ����|\n");
		fprintf(S1, "|------------------------|\n");
		fprintf(S1, "| ����                   |\n");
		fprintf(S1, "|------------------------|\n");
		fprintf(S1, "| 1)������� �����        |\n");
		fprintf(S1, "|------------------------|\n");
		fprintf(S1, "| 2)�������� �������     |\n");
		fprintf(S1, "|------------------------|\n");
		fprintf(S1, "| 3)�����                |\n");
		fprintf(S1, "|------------------------|\n");
		fprintf(S1, " �������: ");
		printf("|------------------------|\n");
		printf("| ����� ����������� ����|\n");
		printf("|------------------------|\n");
		printf("| ����                   |\n");
		printf("|------------------------|\n");
		printf("| 1)������� �����        |\n");
		printf("|------------------------|\n");
		printf("| 2)�������� �������     |\n");
		printf("|------------------------|\n");
		printf("| 3)�����                |\n");
		printf("|------------------------|\n");
		printf(" �������: ");
		int s;
		do { //������� ��� ������� ����� ����
			res = scanf("%d", &s);
			while (getchar() != '\n');
			if (res == 1) {
				fprintf(S1, "\n");
				printf("\n");
			}
			else {
				goto opp;
			}

		} while (res != 1);
		switch (s)
		{
		case 1:
			system("cls");
			fprintf(S1, "\t ������������ ����� � ������� ����������� ���������� ���������\n");
			fprintf(S1, "\t\t   ���������� ��������������� �����������\n");
			fprintf(S1, "\t\t     ������� ''�������������� �������''\n\n\n\n\n\n\n");
			fprintf(S1, "\t\t\t      �������� ������\n");
			fprintf(S1, "\t�� �����: ������� � ������ �������������� � ���������� ��������\n");
			fprintf(S1, "       ����: ���������� ��������� ������ ����������� �������� ��� �����\n\n\n\n\n");
			fprintf(S1, "\t\t\t\t\t\t\t       ��������:\n");
			fprintf(S1, "\t\t\t\t\t\t   ������� ������ 22���1\n");
			fprintf(S1, "\t\t\t\t\t\t\t       ����� �.�\n\n\n\n");
			fprintf(S1, "\t\t\t\t\t\t\t         ������:\n");
			fprintf(S1, "\t\t\t\t\t\t\t     ������� �.�\n\n\n\n\n");
			fprintf(S1, "\t\t\t\t  ����� 2023\n\n\n");

			printf("\t ������������ ����� � ������� ����������� ���������� ���������\n");
			printf("\t\t   ���������� ��������������� �����������\n");
			printf("\t\t     ������� ''�������������� �������''\n\n\n\n\n\n\n");
			printf("\t\t\t      �������� ������\n");
			printf("\t�� �����: ������� � ������ �������������� � ���������� ��������\n");
			printf("       ����: ���������� ��������� ������ ����������� �������� ��� �����\n\n\n\n\n");
			printf("\t\t\t\t\t\t\t       ��������:\n");
			printf("\t\t\t\t\t\t   ������� ������ 22���1\n");
			printf("\t\t\t\t\t\t\t       ����� �.�\n\n\n\n");
			printf("\t\t\t\t\t\t\t         ������:\n");
			printf("\t\t\t\t\t\t\t     ������� �.�\n\n\n\n\n");
			printf("\t\t\t\t  ����� 2023\n\n\n");
			system("pause");
			break;
		case 2:
			system("cls");
			fprintf(S1, "�������� ������� ���������\n");
			fprintf(S1, "������� � ���������� �������� ���������� ������ � �������:  ");
			printf("�������� ������� ���������\n");
			printf("������� � ���������� �������� ���������� ������ � �������:  ");


			do { //������� ��� ������� ����� ����
				res = scanf("%d", &m);
				while (getchar() != '\n');
				if (res == 1) {
					fprintf(S1, "\n");
					printf("\n");
				}
				else {
					fprintf(S1, "%s", "������ ������� ���������� ������: ");
					printf("%s", "������ ������� ���������� ������: ");
				}
			} while (res != 1);

			while (m == 0 || m < 0) {
				fprintf(S1, "\n������!!!\n");
				fprintf(S1, "������� � ���������� ���������� ������ � ������� (������ ����):  ");

				printf("\n������!!!\n");
				printf("������� � ���������� ���������� ������ � ������� (������ ����):  ");

				do {
					res = scanf("%d", &m);
					while (getchar() != '\n');
					if (res == 1) {
						fprintf(S1, "\n");
						printf("\n");
					}
					else {
						fprintf(S1, "%s", "������ ������� ���������� ������: ");
						printf("%s", "������ ������� ���������� ������: ");
					}
				} while (res != 1);

			}

			n = m;
			graph = new int* [m];
			for (int i = 0; i < m; i++) {
				graph[i] = new int[m];
			}
			int t;
			fprintf(S1, "�������� ������ �������� ������� ���������:\n");
			fprintf(S1, "1 - �������������� ���������\n2 - ������ ����\n> ");

			printf("�������� ������ �������� ������� ���������:\n");
			printf("1 - �������������� ���������\n2 - ������ ����\n> ");

			do { //������� ��� ������� ����� ����
				res = scanf("%d", &t);
				while (getchar() != '\n');
				if (res == 1) {
					fprintf(S1, "\n");
					printf("\n");
				}
				else {
					fprintf(S1, "%s", "������\n");
					fprintf(S1, "�������� ������ �������� ������� ���������:\n");
					fprintf(S1, "1 - �������������� ���������\n2 - ������ ����\n> ");

					printf("%s", "������\n");
					printf("�������� ������ �������� ������� ���������:\n");
					printf("1 - �������������� ���������\n2 - ������ ����\n> ");
				}

			} while (res != 1);
			while (t != 1 && t != 2) {
				fprintf(S1, "������!!! �������� ������ �������� ������� ���������:\n");
				fprintf(S1, "1 - �������������� ���������\n2 - ������ ����\n> ");

				printf("������!!! �������� ������ �������� ������� ���������:\n");
				printf("1 - �������������� ���������\n2 - ������ ����\n> ");
				do { //������� ��� ������� ����� ����
					res = scanf("%d", &t);

					while (getchar() != '\n');
					if (res == 1) {
						fprintf(S1, "\n");
						printf("\n");
					}
					else {
						fprintf(S1, "%s", "������\n");
						fprintf(S1, "�������� ������ �������� ������� ���������:\n");
						fprintf(S1, "1 - �������������� ���������\n2 - ������ ����\n> ");

						printf("%s", "������\n");
						printf("�������� ������ �������� ������� ���������:\n");
						printf("1 - �������������� ���������\n2 - ������ ����\n> ");
					}

				} while (res != 1);
			}
			if (t == 1) {
				srand(time(NULL));
				for (i = 0; i < m; ++i) {
					for (j = i; j < m; ++j) {
						graph[i][j] = graph[j][i] = rand() % 2;
					}
				
				}
			}
			else {
				if (m == 1){
					fprintf(S1, "a[0][1] = ");
					printf("a[0][1] = ");
					do {
								res = scanf("%d", &popp);
								while (getchar() != '\n');
								if (res == 1) {
									fprintf(S1, "");
									printf("");
								}
								else {
									fprintf(S1, "%s", "����������� ����. ������� ������: ");
									printf("%s", "����������� ����. ������� ������: ");
								}
							} while (res != 1);
					while (popp > 1 || popp < 0) {
								fprintf(S1, "\n������������ ����! ������� ����� a[0][1] = ");
								printf("\n������������ ����! ������� ����� a[0][1] = ");
								do {
								res = scanf("%d", &popp);
								while (getchar() != '\n');
								if (res == 1) {
									fprintf(S1, "");
									printf("");
								}
								else {
									fprintf(S1, "%s", "����������� ����. ������� ����� a[0][1] =  ");
									printf("%s", "����������� ����. ������� ����� a[0][1] =  ");
								}
							} while (res != 1);
								
							}			
					if(popp == 1){
						porp = 1;
					}
					if(popp == 0){
						porp = 0;
					}
					printf("\n");
				}
				if (m != 1){
					fprintf(S1, "������� �������� ������� (0 � 1):\n");
					printf("������� �������� ������� (0 � 1):\n");
					for (i = 0; i < m; ++i) {
						for (j = i; j < m; ++j) {
							if (i != j) {
							ret:
								fprintf(S1, "a[%d][%d] = ", i, j);
								printf("a[%d][%d] = ", i, j);
								do {
									res = scanf("%d", &graph[i][j]);
									while (getchar() != '\n');
									if (res == 1) {
										fprintf(S1, "");
										printf("");
									}
									else {
										fprintf(S1, "%s", "����������� ����. ������� ������: ");
										printf("%s", "����������� ����. ������� ������: ");
									}
								} while (res != 1);
								if (graph[i][j] > 1 || graph[i][j] < 0) {
								fprintf(S1, "\n������������ ����!\n");
								printf("\n������������ ����!\n");
								goto ret;
								}
							}
							graph[i][i] = 0;
						}
					
					}
			}
			for (i = 0; i < n; i++) //�������������� �������
			{
				for (j = 0; j < n; j++)
				{
					graph[j][i] = graph[i][j];
				}
			}
			}


			fprintf(S1, "������� ���������: \n");
			fprintf(S1, "\n     ");
			printf("������� ���������: \n");
			//����������� ��������
			printf("\n     ");
			if (porp == 1 || porp == 0){
				if(porp == 1){
					fprintf(S1, "[1][1] = 1");
					printf("[1][1] = 1");
				}
				if(porp == 0){
					fprintf(S1, "[1][1] = 0");
					printf("[1][1] = 0");
				}
			}
			else{
			for (int i = 0; i < n; i++) {
				fprintf(S1, "[%d] ", i + 1);
				printf("[%d] ", i + 1);
			}

			fprintf(S1, "\n");
			printf("\n");
			if(porp == 1){
			
				printf("");//����������� �����
			}
			else{
			for (i = 0; i < m; ++i)
			{
				fprintf(S1, "[%d] ", i + 1);
				printf("[%d] ", i + 1);
				for (j = 0; j < m; ++j) {
					if ((i + 1) < 10)
					{
						if (j < 10) {
							fprintf(S1, "%3d ", graph[i][j]);
							printf("%3d ", graph[i][j]);
						}
						else {
							fprintf(S1, " %3d ", graph[i][j]);
							printf(" %3d ", graph[i][j]);
						}

					}

					else if ((i + 1) < 100)
					{
						if (j == 0) {
							fprintf(S1, " %d", graph[i][j]);
							printf(" %d", graph[i][j]);
						}
						else if (j < 10) {
							fprintf(S1, "   %d", graph[i][j]);
							printf("   %d", graph[i][j]);
						}
						else {
							fprintf(S1, "    %d", graph[i][j]);
							printf("    %d", graph[i][j]);
						}

					}

				}
				fprintf(S1, "\n");
				printf("\n");
			}
			}
			}

			fprintf(S1, "\n������� �������������: \n");
			printf("\n������� �������������: \n");

			if (porp == 1 || porp == 0){
				if(porp == 1){
					fprintf(S1, "[1][1] = 1");
					printf("[1][1] = 1");
				}
				if(porp == 0){
					fprintf(S1, "[1][1] = 0");
					printf("[1][1] = 0");
				}
			}
			else{
			ch = 0;
			reb = 0;
			inc = (int**)malloc(n * sizeof(int*));
			while (ch != n)
				for (int i = 0; i < n; i++)
				{
					for (int j = 0 + ch; j < n; j++)
						if (graph[i][j] != 0)
							reb++;
					ch++;
				}
			/////

			for (int i = 0; i < n; i++)
				for (int j = i + 1; j < n; j++)
					if (graph[i][j] != 0)
						graph[j][i] = 0;

			
			for (int i = 0; i < n; i++)
			{
				inc[i] = (int*)malloc(reb * sizeof(int));
			}
			for (int i = 0; i < n; i++)
				for (int j = 0; j < reb; j++)
					inc[i][j] = 0;

			ch1 = reb;
			reb = 0;
			for (int i = 0; i < n; i++)				//�������� ������� �������������
			{
				for (int j = 0; j < n; j++)
					if (graph[i][j] != 0)
					{
						inc[i][reb] = 1;				//������
						inc[j][reb] = 1;				//�����
						reb++;
					}
			}
			fprintf(S1, "\n    ");
			printf("\n    ");
			for (int i = 0; i < ch1; i++) {
				fprintf(S1, "[%d] ", i + 1);
				printf("[%d] ", i + 1);
			}
			for (int i = 0; i < n; i++)
			{
				fprintf(S1, "\n[%d]", i + 1);
				printf("\n[%d]", i + 1);

				for (int j = 0; j < reb; j++)
				{
					if ((i + 1) < 10)
					{
						if (j < 10) {
							fprintf(S1, "%3d ", inc[i][j]);
							printf("%3d ", inc[i][j]);
						}
						else {
							fprintf(S1, " %3d ", inc[i][j]);
							printf(" %3d ", inc[i][j]);
						}

					}

					else if ((i + 1) < 100)
					{
						if (j == 0) {
							fprintf(S1, " %d", inc[i][j]);
							printf(" %d", inc[i][j]);
						}
						else if (j < 10) {
							fprintf(S1, "   %d", inc[i][j]);
							printf("   %d", inc[i][j]);
						}
						else {
							fprintf(S1, "    %d", inc[i][j]);
							printf("    %d", inc[i][j]);
						}

					}

				}
			}
			}
			fprintf(S1, "\n");
			fprintf(S1, "����������� ����: ");
			printf("\n");
			printf("����������� ����: ");
			if (porp == 1 || porp == 0){
				if(porp == 1){
					fprintf(S1, " 1 - 1\n");
					printf(" 1 - 1\n");
				}
				if(porp == 0){
					fprintf(S1, " ����� ���� �� ����������� \n");
					printf(" ����� ���� �� ����������� \n");
				}
			}
			else{
			counter = 1;
			for (int i = 0; i < reb; i++) {
				for (int j = i + 1; j < reb; j++) {
					sr = false;

					for (int k = 0; k < n; k++) {
						if (inc[k][i] == 1 && inc[k][j] == 1) {
							sr = true;
						}
					}
					if (sr == false) {
						counter = 0;
						fprintf(S1, "\n%d - %d\n", i + 1, j + 1);
						printf("\n%d - %d\n", i + 1, j + 1);


					}
				}
			}
			if (counter == 1) {
				fprintf(S1, "����� ���� �� �����������\n");
				printf("����� ���� �� �����������\n");
			}
			}

			system("pause");
			break;
		case 3:
			exit(0);

			}
			system("cls");
			fclose(S1);
	}
	getchar();
	return 0;
}
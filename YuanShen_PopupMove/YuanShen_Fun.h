#pragma once

#include <Windows.h>

//��ȡ�����ԭ�񴰿ھ��
HWND getYuanShenHandle();

//��ȡԭ�񴰿�λ�úʹ�С
bool getYuanShenRect(HWND giHandle, RECT &giRect);

//���������ö�
void setThisTop(HWND thisHandle);

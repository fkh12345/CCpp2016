#pragma once
#include<iostream>
using namespace std;
class Button
{
public:
	virtual void on() = 0;
	virtual void off() = 0;
};
class Fan :public Button
{
public:
	Fan(){}
	void on() 
	{
		cout << "�򿪵���" << endl; 
	}
	void off() 
	{
		cout << "�رյ���" << endl; 
	}
};
class Door :public Button
{
public:
	virtual void on() 
	{
		cout << "����" << endl; 
	}
	virtual void off() 
	{
		cout << "����" << endl; 
	}
};
class Light :public Button
{
public:
	virtual void on() 
	{ 
		cout << "�򿪵��" << endl; 
	}
	virtual void off() 
	{ 
		cout << "�رյ��" << endl; 
	}
};
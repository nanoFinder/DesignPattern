#pragma once
// ��������
class HeadTeacher
{
public:
	~HeadTeacher();

	// ����Ψһʵ���Ľӿ�
	static HeadTeacher* getInstance();

private:
	HeadTeacher();     // ���캯��˽�л�����ֹ�ⲿ����

private:
	static HeadTeacher* instance;  // ����Ψһʵ��
};


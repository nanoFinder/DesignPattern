#pragma once
// 班主任类
class HeadTeacher
{
public:
	~HeadTeacher();

	// 访问唯一实例的接口
	static HeadTeacher* getInstance();

private:
	HeadTeacher();     // 构造函数私有化，禁止外部调用

private:
	static HeadTeacher* instance;  // 保存唯一实例
};


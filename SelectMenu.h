#pragma once

class SelectMenu
{
public:
	SelectMenu();
	virtual ~SelectMenu();

	// �������A�I������
	void init();
	void end();

	// �X�V
	void update();

	// �`��
	void draw();

private:
	class Item
	{
	public:
		Item();
		virtual ~Item();

		// �\�����镶�����ݒ�
		void setText(const char* text);

	private:
		// �\�����镶����
		const char* m_text;

	};



private:

};

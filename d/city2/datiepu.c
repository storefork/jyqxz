
inherit ROOM;

void create()
{
	set("short", "������");
	set("long", @LONG
����һ�Ҽ�ª�Ĵ����̣����İ���һ����¯��¯��������յ�һƬͨ�죬
��һ�߽�ȥ�͸е��������ȡ�ǽ�Ƕ��������깤��δ�깤�Ĳ˵�����������
����ذ�ס����׵��һλ������ͷ�󺹻�����������ר����־���ڴ�����
LONG
	);

	set("exits", ([
		"north" : __DIR__"dongcha2",
	]));
        set("objects", ([
                 "/d/city2/npc/smith": 1,]));

	setup();
	replace_program(ROOM);
}

/*Game Message*/

#include "headgr.h"

extern BOOL isRun;
extern BOOL backStageRun;
extern BOOL anyPosition;
extern BOOL isLittle; 

/*���˵�*/
void menu(void){
	setColor(15);
	printf("\n����������������������������������������\n");
	printf("��ֲ���ս��ʬ�� C�����޸���\n\n");
	printf("O�����´�/��������\n");
	if(isRun){
		#if DEBUG
			printf("T�����Դ��루Debug��\n");
		#endif
		printf("\na�������޸ģ�\n");
		printf("1���޸�����\n");
		printf("2���޸Ľ�Ǯ\n");
		printf("3������ȫ������ȴʱ��\n");
		printf("4��������̨���У��ٿ�һ��ȡ����\n");
		printf("5���޸Ŀ��۸���\n");
		printf("6���Զ��ռ���Դ\n");

		printf("\nb���ؿ��޸ģ�\n");
		printf("1��ð��ģʽ����\n");
		printf("2��С��Ϸ���أ����ҹؿ���\n");

		printf("\nc��ֲ���޸ģ�\n");
		printf("1�������ص����ã��ٿ�һ��ȡ����\n");
		printf("2���Ͽ���ֲ������\n");

		printf("\nd����ʬ�޸ģ�\n");
		printf("1����ɱ�������н�ʬ\n");
		printf("2��С��ʬ��Ч���ٿ�һ�λָ�������С��\n");

		printf("\ne����԰�޸ģ�\n");
		printf("1���޸��ǻ����߶�\n");
		printf("2���ɿ��������޸�\n");

		printf("\nf�������޸ģ�\n");
		printf("1����ƿ͸��\n");
		printf("2����ʾ����С��Ϸ\n");
	}
	printf("\n���⹦�ܣ�\n");
	printf("~���鿴�޸������¹���\n");
	printf("!���鿴����С��Ϸ������ģʽ������ģʽ�ؿ�����\n");
	printf("@���鿴PVZС���루�ʵ�����ȫ\n");
	printf("#���鿴Ŀǰ�Ѿ�������Ч��\n");
	printf("A�����ڱ��޸�����Ϣ\n");
	printf("\nE���˳��޸���");
	printf("\n����������������������������������������\n");
}

/*������Ϣ*/
void upData(void){
	setColor(9);
	printf("\n���¹���\n\n");
	printf("v0.1 [2019.03.04] �����������ʮ�����ܣ�1~0��\n");
	
	printf("v0.2 [2019.03.13] �������¹��ܣ�\n");
	printf("\t(1)�Զ��ռ���Դ\n\t(2)��ʾ����С��Ϸ\n\t(3)�ص�����\n\t(4)�ɿ����޸�\n\t(5)С��ʬ��Ч\n\t(6)�Ͽ���ֲ������\n");
	printf("�޸�/��ǿ�����¹��ܣ�\n");
	printf("\t(1)��ƿ͸�Ӳ��ȶ����޸�\n\t(2)��ɱ��ʬ���ȶ����޸�\n");
	
	printf("v0.21 [2019.07.28] �Ż��ڴ��д����\n");
	
	printf("v0.22 [2019.09.16] �Ż��ļ��ṹ\n");
	
	pause();
}

/*С����*/
void cheatCode(void){
	setColor(5);
	printf("\nPVZС�����ȫ�������ǻ�����һ���߶��ǻ����������ģ�\n\n");
	printf("future ------ ��ʬ����ʱ��̫���۾�\n");
	printf("mustache ---- ��ʬ������Ʋ����\n");
	printf("trickedout -- ���ݻ�ͳһ��ɻ������ݻ�\n");
	printf("daisies ----- ����ʬ��ɱ�����һЩ���գ���Ҫ�ǻ����ﵽ100�ף�\n");
	printf("dance ------- �ý�ʬ�ڶ��������裨���δ�� ���δ�Σ�����Ҫ�ǻ����ﵽ500�ף�\n");
	printf("sukhbir ----- �л���ʬ��������ʱ�Ľ�����(>��<*) \n");
	printf("pinata ------ ��ʬ����ɢ��һ�ص��ǹ�����Ҫ�ǻ����ﵽ1000�ף�\n");
	
	pause();
}

/*��ʾ������Ϸ�б�*/
void showMiniGameList(void){
	setColor(11);
	
	printf("\nС��Ϸ���루��ɫ�ӡ�*����־�Ĺؿ���������/���ң�����ɱ����˳���\n\n");
	const char *MiniGame[]={"����ģʽ������","����ģʽ����ҹ","����ģʽ��Ӿ��","����ģʽ��Ũ��","����ģʽ���ݶ�",
							"����ģʽ�����죨���ѣ�","����ģʽ����ҹ�����ѣ�","����ģʽ��Ӿ�أ����ѣ�","����ģʽ��Ũ�������ѣ�","����ģʽ���ݶ������ѣ�",
							"����ģʽ�����죨�޾���","����ģʽ����ҹ���޾���","����ģʽ��Ӿ�أ��޾���","����ģʽ��Ũ�����޾���","����ģʽ���ݶ����޾���",
							"ֲ�ｩʬ","���������ģʽ","�ϻ���","������ֲ��","��ʯ����",
							"����ʳ����","������","��ʬˮ���","��ʯ����תת��","С��ʬ���鷳",
							"����������","�㿴������������һ��","ѩ����","��ʬ����","����ʬ",
							"˭Ц�����","ֲ�ｩʬ2","���������2","�������","������ʿ�ĸ���",
							"�������������������","����","�޲�Ƥ֮�أ�����������ԭ����2����Ƥ��","��Ҫʱ��","��ս��̫����������",
							"��Ϯ","�����ؿ�","������԰������������","����Ѱ���ĵ�������","��Ĺģʽ",
							"���ܰ����ڳ�����","�ڰ��ı�����ҹ","�ļ�����ս","����","�ǻ���������������",
							"�ƹ���","ȫ������","����������","������Ӧ","M����˼�ǽ���",
							"���ӵ����չ�","��Ϸ��","��һ��������Ӧ","��������","�޾�������",
							"���ǽ�ʬ","��Ҳ�ǽ�ʬ","���ܲ�����ô","��ȫɵ��","������ͧ",
							"������","��ʬҡ��","������","������д��Զ��������ҵ�","���ǽ�ʬ�޾���"
	};
	
	int i;
	int gameLength=sizeof(MiniGame)/sizeof(MiniGame[0]);
	for(i=0;i<gameLength;i++){
		if(i==37||i==42||i==49){
			setColor(12);
			printf("*");
		}else{
			setColor(11);
		}
		printf("%d.%s\n",i+1,MiniGame[i]);
	}
	
	pause();
}

/*��ͣ*/
void pause(void){
	setColor(14);
	printf("\n���������������\n");
	
	getch();
}

/*�Ҳ�������*/
void noOperation(void){
	setColor(14);
	printf("\n�Ҳ�����ز������������������������\n");
	
	pause();
}

/*������Ϣ*/
void about(void){
	printf("\n���ڣ���������ֲ���ս��ʬ��Plants vs. Zombies�����޸�����ʹ�á�Dev-C++����������");
	printf("\n�޸������ߣ���ˮ������\n��л��ҵ�ʹ�ã����κ����ʺ�bug���Է�������\n\n");
	
	pause();
}

/*��ʾ�޸���ʾ��Ϣ*/
void cheatMsg(BOOL isSuccess,const char msg[]){
	if(isSuccess){
		setColor(10);
		printf("\n�޸ġ�%s���ɹ���\n",msg);
	}else{
		setColor(12);
		printf("\n�޸ġ�%s��ʧ�ܣ�\n",msg);
	}
	
	pause();
}

/*��ʾ�������޸���Ŀ*/
void showOpenCheat(void){
	setColor(11);
	printf("\n��ǰ�������޸���Ŀ\n\n");
	
	setColor(13);
	
	BOOL sign=FALSE;
	if(backStageRun){
		printf("ȡ����̨����������\n");
		sign=TRUE;
	}
	if(anyPosition){
		printf("�ص����ù���������\n");
		sign=TRUE;
	}
	if(isLittle){
		printf("С��ʬ��Ч������\n");
		sign=TRUE;
	}
	
	if(!sign)printf("Ŀǰû���޸���Ŀ��������\n");
	
	pause();
}

/*��ʾ��������*/
void showProcessName(const char msg1[],const char msg2[]){
	printf("%s",msg1);
	printf(PROCESS_NAME);
	printf("%s",msg2);
}
 
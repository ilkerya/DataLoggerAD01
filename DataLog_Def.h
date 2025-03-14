


#define DEBUG_KEY
#define LED_GREEN 3 // GREEN
#define LED_RED 4 //RED


#define ON 1 //
#define OFF 0 //
#define KEY_LEFT 6 // ok
#define KEY_MID 5 //
#define KEY_RIGHT 2 //


#define MENU_NULL 0
#define MENU1   32
#define MENU2   64
#define MENU3   96


#define MENU_MAINMIN  32
#define MENU_MAINMAX  96

#define MENU_MAIN11 32  // +=32
#define MENU_MAIN11 64
#define MENU_MAIN11 96




#define MENU1MIN  36
#define MENU1MAX  40

#define MENU1_SUB1 36 // +=4
#define MENU1_SUB2 40



#define MENU2MIN  68
#define MENU2MAX  92

#define MENU2_SUB1  68  // +=4
#define MENU2_SUB2  72
#define MENU2_SUB3  76
#define MENU2_SUB4  80
#define MENU2_SUB5  84
#define MENU2_SUB6  88
#define MENU2_SUB7  92
//#define MENU2_SUB8  96



#define MENU3MIN  100
#define MENU3MAX  104


#define MENU3_SUB1  100 // +=4
#define MENU3_SUB2  104

#define KEYDISP_TIMER 20


void EscMenuKey(void);
void EnterMenuKey(void);
void DownMenuKey(void);
void UpMenuKey(void);
void SetSampling(unsigned int Time);
void DispEnable(bool Enable);
void LogEnable(bool Enable);
void  DispExtTimeout(void);
void   DisplayMenu(void);
void KeyTimeOutCheck(void);
void SD_CardLogTask(void);
void SD_Log_File(void);
void SD_Info_Only(void);


/*
First Time
git init
git add README.md


GitHub Bash Commands
Adding new file
https://help.github.com/articles/adding-a-file-to-a-repository-using-the-command-line/#platform-windows

git add .

git commit -m "Add existing file"

// For Common git
git push https://github.com/ilkerya/Phoenix master

// For Electrolux git
git push  http://git.int.electrolux.com/ilkerya/Phoenix_OpenAir.git master


https://help.github.com/articles/fetching-a-remote/


http://git.int.electrolux.com/ilkerya/Phoenix_Mobile.git


In case in the first push gives error use below command

git remote add origin remote repository URL
git push origin master

git push https://github.com/ilkerya/Phoenix master --force
*/

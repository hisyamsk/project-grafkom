Enemy enemy;
Spider spider;

class Page3{
    public:
    void menupage(void){
        glPushMatrix();
        background.bg_1();
        glPopMatrix();
        glPushMatrix();
        glColor3f(0.0f,0.0f,1.0f);
        glTranslatef(15,25,0);
        spider.Drawspider();
        printer.drawText(0,0,"Click to Start Game");
        glPopMatrix();
        glFlush();
    }
};


#include <allegro.h>

int back_px, back_py;
int px = 30*14, py = 30*17;
static int dir = 4;

BITMAP *buffer;
BITMAP *rock;
BITMAP *rock_2;
BITMAP *dish1;
BITMAP *dish2;
BITMAP *dish3;
BITMAP *dish4;
BITMAP *dish5;

BITMAP *enem1;
BITMAP *enemy1;
BITMAP *enem2;
BITMAP *enemy2;
BITMAP *enem3;
BITMAP *enemy3;
BITMAP *enem4;
BITMAP *enemy4;

BITMAP *pac;
BITMAP *pacman;
BITMAP *die;
BITMAP *portada;
BITMAP *fondo;
BITMAP *life;
BITMAP *restart;

SAMPLE *eat;
SAMPLE *start;
SAMPLE *music;
SAMPLE *yaper;

void print_pacman(){
    blit(pac, pacman, dir*33, 0, 0, 0, 33, 33);
    draw_sprite(buffer, pacman, px, py);
}

void cargar_bitmap(){
    start = load_wav("asd/pacman_beginning.wav");
    yaper = load_wav("asd/yaper.wav");
    eat = load_wav("asd/comiendo.wav");
    music = load_wav("asd/fondo.wav");

    enem1 = load_bitmap("asd/enemigo.bmp", NULL);
    enemy1 = create_bitmap(30,30);
    enem2 = load_bitmap("asd/enemigo.bmp", NULL);
    enemy2 = create_bitmap(30,30);
    enem3 = load_bitmap("asd/enemigo.bmp", NULL);
    enemy3 = create_bitmap(30,30);
    enem4 = load_bitmap("asd/enemigo.bmp", NULL);
    enemy4 = create_bitmap(30,30);

    buffer = create_bitmap(880, 600);
    rock = load_bitmap("asd/roca.bmp", NULL);
    rock_2 = load_bitmap("asd/diome.bmp", NULL);

    dish1 = load_bitmap("asd/comida1.bmp", NULL);
    dish2 = load_bitmap("asd/comida2.bmp", NULL);
    dish3 = load_bitmap("asd/comida3.bmp", NULL);
    dish4 = load_bitmap("asd/comida4.bmp", NULL);
    dish5 = load_bitmap("asd/comida5.bmp", NULL);

    pac = load_bitmap("asd/pacman.bmp", NULL);
    pacman = create_bitmap(33,33);

    portada = load_bitmap("asd/portada_2.bmp", NULL);
    fondo = load_bitmap("asd/fondo.bmp", NULL);
    life = load_bitmap("asd/live.bmp", NULL);
    restart = load_bitmap("asd/restart.bmp", NULL);
    die = load_bitmap("asd/muerte.bmp", NULL);
}

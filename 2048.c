#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int up (int tablero[4][4],int *score){
  int i, j, k, t, invalido;
  invalido=0;
  int nuevo[4][4]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
  int test[4][4]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

  for(j=0;j<4;j++){
    for(i=0;i<4;i++){
        test[i][j]=tablero[i][j];
    }
  }

  for(j=0;j<4;j++){
    k=0;
    for(i=0;i<4;i++){
      if (tablero[i][j]!=0){
        nuevo[k][j]=tablero[i][j];
        k+=1;
      }
    }
  }

  for(j=0;j<4;j++){
    for(i=0;i<3;i++){
      if (nuevo[i][j]==nuevo[i+1][j]){
        nuevo[i][j]=nuevo[i][j]*2;
        nuevo[i+1][j]=0;
        *score+=nuevo[i][j];
      }
    }
  }

  for(i=0;i<4;i++){
    for(j=0;j<4;j++){
      tablero[i][j]=0;
    }
  }

  for(j=0;j<4;j++){
    k=0;
    for(i=0;i<4;i++){
      if (nuevo[i][j]!=0){
        tablero[k][j]=nuevo[i][j];
        k+=1;
      }
    }
  }

  t=0;
  for(j=0;j<4;j++){
    for(i=0;i<4;i++){
      if(test[i][j]!=tablero[i][j]){
        t=1;
      }
    }
  }
  if (t==0){
    printf("\a\x1B[31m            wrong move, try again \x1B[0m\n\n\n");
    invalido=1;
  }
  return invalido;
}
int down (int tablero[4][4],int *score){
  int i, j, k, t, invalido;
  invalido=0;
  int nuevo[4][4]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
  int test[4][4]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

  for(j=0;j<4;j++){
    for(i=0;i<4;i++){
        test[i][j]=tablero[i][j];
    }
  }

  for(j=0;j<4;j++){
    k=3;
    for(i=3;i>=0;i--){
      if (tablero[i][j]!=0){
        nuevo[k][j]=tablero[i][j];
        k-=1;
      }
    }
  }

  for(j=0;j<4;j++){
    for(i=3;i>0;i--){
      if (nuevo[i][j]==nuevo[i-1][j]){
        nuevo[i][j]=nuevo[i][j]*2;
        nuevo[i-1][j]=0;
        *score+=nuevo[i][j];
      }
    }
  }

  for(i=0;i<4;i++){
    for(j=0;j<4;j++){
      tablero[i][j]=0;
    }
  }

  for(j=0;j<4;j++){
    k=3;
    for(i=3;i>=0;i--){
      if (nuevo[i][j]!=0){
        tablero[k][j]=nuevo[i][j];
        k-=1;
      }
    }
  }

  t=0;
  for(j=0;j<4;j++){
    for(i=0;i<4;i++){
      if(test[i][j]!=tablero[i][j]){
        t=1;
      }
    }
  }
  if (t==0){
    printf("\a\x1B[31m            wrong move, try again \x1B[0m\n\n\n");
    invalido=1;
  }
  return invalido;
}
int left (int tablero[4][4],int *score){
  int i, j, k, t, invalido;
  invalido=0;
  int nuevo[4][4]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
  int test[4][4]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

  for(j=0;j<4;j++){
    for(i=0;i<4;i++){
        test[i][j]=tablero[i][j];
    }
  }

  for(i=0;i<4;i++){
    k=0;
    for(j=0;j<4;j++){
      if (tablero[i][j]!=0){
        nuevo[i][k]=tablero[i][j];
        k+=1;
      }
    }
  }

  for(i=0;i<4;i++){
    for(j=0;j<3;j++){
      if (nuevo[i][j]==nuevo[i][j+1]){
        nuevo[i][j]=nuevo[i][j]*2;
        nuevo[i][j+1]=0;
        *score+=nuevo[i][j];
      }
    }
  }

  for(i=0;i<4;i++){
    for(j=0;j<4;j++){
      tablero[i][j]=0;
    }
  }

  for(i=0;i<4;i++){
    k=0;
    for(j=0;j<4;j++){
      if (nuevo[i][j]!=0){
        tablero[i][k]=nuevo[i][j];
        k+=1;
      }
    }
  }

  t=0;
  for(j=0;j<4;j++){
    for(i=0;i<4;i++){
      if(test[i][j]!=tablero[i][j]){
        t=1;
      }
    }
  }
  if (t==0){
    printf("\a\x1B[31m            wrong move, try again \x1B[0m\n\n\n");
    invalido=1;
  }
  return invalido;
}
int right (int tablero[4][4],int *score){
  int i, j, k, t, invalido;
  invalido=0;
  int nuevo[4][4]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
  int test[4][4]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

  for(j=0;j<4;j++){
    for(i=0;i<4;i++){
        test[i][j]=tablero[i][j];
    }
  }

  for(i=0;i<4;i++){
    k=3;
    for(j=3;j>=0;j--){
      if (tablero[i][j]!=0){
        nuevo[i][k]=tablero[i][j];
        k-=1;
      }
    }
  }

  for(i=0;i<4;i++){
    for(j=3;j>0;j--){
      if (nuevo[i][j]==nuevo[i][j-1]){
        nuevo[i][j]=nuevo[i][j]*2;
        nuevo[i][j-1]=0;
        *score+=nuevo[i][j];
      }
    }
  }

  for(i=0;i<4;i++){
    for(j=0;j<4;j++){
      tablero[i][j]=0;
    }
  }

  for(i=0;i<4;i++){
    k=3;
    for(j=3;j>=0;j--){
      if (nuevo[i][j]!=0){
        tablero[i][k]=nuevo[i][j];
        k-=1;
      }
    }
  }

  t=0;
  for(j=0;j<4;j++){
    for(i=0;i<4;i++){
      if(test[i][j]!=tablero[i][j]){
        t=1;
      }
    }
  }
  if (t==0){
    printf("\a\x1B[31m            wrong move, try again \x1B[0m\n\n\n");
    invalido=1;
  }
  return invalido;
}
void print (int tablero[4][4], int score, int tile){
  int i, j;
  for(i=0;i<4;i++){
    for(j=0;j<4;j++){

      if (tablero[i][j]==0){
        printf("\x1B[37m     %d     \x1B[0m", tablero[i][j]);
      }
      if (tablero[i][j]==2){
        printf("\x1B[36m     %d     \x1B[0m", tablero[i][j]);
      }
      if (tablero[i][j]==4){
        printf("\x1B[34m     %d     \x1B[0m", tablero[i][j]);
      }
      if (tablero[i][j]==8){
        printf("\x1B[32m     %d     \x1B[0m", tablero[i][j]);
      }

      if (tablero[i][j]==16){
        printf("\x1B[33m    %d     \x1B[0m", tablero[i][j]);
      }
      if (tablero[i][j]==32){
        printf("\x1B[35m    %d     \x1B[0m", tablero[i][j]);
      }
      if (tablero[i][j]==64){
        printf("\x1B[31m    %d     \x1B[0m", tablero[i][j]);
      }

      if (tablero[i][j]==128){
        printf("\x1B[36m   %d     \x1B[0m", tablero[i][j]);
      }
      if (tablero[i][j]==256){
        printf("\x1B[34m   %d     \x1B[0m", tablero[i][j]);
      }
      if (tablero[i][j]==512){
        printf("\x1B[32m   %d     \x1B[0m", tablero[i][j]);
      }

      if (tablero[i][j]==1024){
        printf("\x1B[33m  %d     \x1B[0m", tablero[i][j]);
      }
      if (tablero[i][j]==2048){
        printf("\x1B[31m  %d     \x1B[0m", tablero[i][j]);
      }
      if (tablero[i][j]==4096){
        printf("\x1B[35m  %d     \x1B[0m", tablero[i][j]);
      }
      if (tablero[i][j]==8192){
        printf("\x1B[37m  %d     \x1B[0m", tablero[i][j]);
      }

      if (tablero[i][j]==16384){
        printf("\x1B[36m %d     \x1B[0m", tablero[i][j]);
      }

      if (i==0&&j==3){
        printf("\x1B[33m     score:\n\n\x1B[0m");
      }
      if (i==1&&j==3){
        printf("\x1B[31m     %d\n\n\x1B[0m", score);
      }
      if (i==2&&j==3){
        printf("\x1B[33m     highest tile:\n\n\x1B[0m");
      }
      if (i==3&&j==3){
        printf("\x1B[31m     %d\n\n\x1B[0m", tile);
      }
    }
  }
}
void help(){
  printf("\x1B[33m\n\n");
  printf("\n\n         swipe to move all the tiles\n");
  printf("\n\n");
  printf("     0          0          0          0\n");
  printf("\n\n");
  printf("     0<---------0----------0----------2\n");
  printf("\n\n");
  printf("     0<---------0----------4          0\n");
  printf("\n\n");
  printf("     0<---------0----------0----------2\n");
  printf("\n\n");

  printf("\n\n            when 2 tiles with the same\n");
  printf("      number touch, they merge into one\n");
  printf("\n\n");
  printf("     0          0          0          0\n");
  printf("\n\n");
  printf("     0          2     +    2     =    4\n");
  printf("\n\n");
  printf("     0          0          0          0\n");
  printf("\n\n");
  printf("     0          0     +    8     =   16\n");
  printf("\n\n");
  printf("      it's over when the board fills up\n");
  printf("\n\n");

  printf("\n\n            join all the numbers\n");
  printf("       and get at least to the 2048 tile\n");
  printf("\n\n");
  printf("     0       2048          4          0\n");
  printf("\n\n");
  printf("     8          2         32          4\n");
  printf("\n\n");
  printf("     4        128          0          0\n");
  printf("\n\n");
  printf("    16         64          8         16\n");
  printf("\n\n");
  printf("                  good luck!\n");
  printf("\n\n");

  printf("\n\n\x1B[0m");


}
int htile (int tablero[4][4]){
  int i, j, tile;
  tile=0;
  for(i=0;i<4;i++){
    for(j=0;j<4;j++){
      if (tablero[i][j]>tile){
      tile=(tablero[i][j]);
      }
    }
  }
  return tile;
}



int main(void){
  int e,randrow,randcol,randnum,game,game0,score,tile,i,j;
  char key;
  printf("\n\x1B[33m            welcome to 2048\n\x1B[0m");
  printf("\x1B[33m            press w,a,s,d to move\n\x1B[0m");
  printf("\x1B[33m            for help press h\n\x1B[0m");
  printf("\n\n\n");
  game0=1;
  score=0;
  while(game0==1){
    int board[4][4]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    srand(time(NULL));
    randrow=(rand()%4);
    randcol=(rand()%4);
    randnum=2;
    if(board[randrow][randcol]==0){
      board[randrow][randcol]=randnum;
    }
    game=1;
    while(game==1){
      e=0;
      tile=htile(board);
      print(board, score, tile);
      printf("\n                     ");
      scanf("%s", &key);
      printf("\n\n");
      switch(key){
        case 'w':
        e=up(board,&score);
        break;

        case 's':
        e=down(board,&score);
        break;

        case 'a':
        e=left(board,&score);
        break;

        case 'd':
        e=right(board,&score);
        break;

        case 'h':
        help();
        e=1;
        break;

        default:
        printf("\a\x1B[31m            wrong move, try again \x1B[0m\n\n\n");
        e=1;
        break;
      }

      if (e==0){
        randrow=(rand()%4);
        randcol=(rand()%4);
        randnum=(rand()%10);
        if (randnum!=4){
          randnum=2;
        }
        while(board[randrow][randcol]!=0){
          randrow=(rand()%4);
          randcol=(rand()%4);
        }
        board[randrow][randcol]=randnum;
        game=0;
        for(i=0;i<4;i++){
          for(j=0;j<4;j++){
            if (board[i][j]==0){
              game=1;
            }
          }
        }
        if(game==0){
          tile=htile(board);
          print(board, score, tile);
          printf("you lose\a\n");
          printf("want to play again? press 1\n");
          game0=0;
          scanf("%d", &game0);
          printf("\n\n");
        }
      }
    }
  }
}

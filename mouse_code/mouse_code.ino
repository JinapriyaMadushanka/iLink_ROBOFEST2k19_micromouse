void createMaze(){
  char maze[14][14] =
     { {'#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#', '#' , '#' , '#'}
     , {'#' , '#' , '#' , '#' , ' ' , '#' , '#' , '#' , '#' , '#' , '#', '#' , '#' , '#'}
     , {'#' , '#' , ' ' , '#' , ' ' , '#' , ' ' , ' ' , ' ' , ' ' , ' ', ' ' , ' ' , '#'}
     , {'#' , '#' , ' ' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#', '#' , ' ' , '#'}
     , {'#' , ' ' , ' ' , '#' , ' ' , ' ' , '#' , '#' , ' ' , ' ' , ' ', '#' , ' ' , '#'}
     , {'#' , '#' , ' ' , ' ' , ' ' , '#' , '#' , '#' , ' ' , '#' , ' ', '#' , ' ' , '#'}
     , {'#' , '#' , '#' , '#' , '#' , ' ' , 'X' , '#' , '#' , '#' , ' ', '#' , '#' , '#'}
     , {'#' , '#' , ' ' , '#' , ' ' , '#' , ' ' , ' ' , ' ' , ' ' , ' ', '#' , '#' , '#'}
     , {'#' , '#' , ' ' , '#' , ' ' , '#' , '#' , '#' , '#' , ' ' , '#', '#' , '#' , '#'}
     , {'#' , '#' , ' ' , '#' , ' ' , '#' , '#' , '#' , '#' , ' ' , '#', '#' , ' ' , '#'}
     , {'#' , '#' , ' ' , '#' , '#' , '#' , '#' , '#' , '#' , ' ' , '#', '#' , '#' , '#'}
     , {'#' , '#' , ' ' , '#' , ' ' , ' ' , ' ' , ' ' , '#' , ' ' , ' ', '#' , '#' , '#'}
     , {'#' , '#' , ' ' , '#' , ' ' , '#' , '#' , '#' , '#' , '#' , ' ', ' ' , 'X' , '#'}
     , {'#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#', '#' , '#' , '#'}};

  for(int i=0;i<14;i++){
    for(int j=0;j<14;j++){
      Serial.print(maze[i][j]);  
    }
    Serial.println("");
  }
  return maze;
}

void printMaze(maze,path=""){
  
}
void setup() {
  Serial.begin(9600);
  createMaze();
}
void loop() {
}

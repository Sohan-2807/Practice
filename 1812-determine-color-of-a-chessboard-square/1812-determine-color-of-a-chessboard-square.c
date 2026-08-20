bool squareIsWhite(char* coordinates) {
    char a = coordinates[0];
    char b = coordinates[1] - '0';
    
    if ((a+b) % 2 == 0){
        return false;
    }
    return true;
    
}
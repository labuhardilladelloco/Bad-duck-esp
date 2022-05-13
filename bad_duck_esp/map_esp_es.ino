

byte excep(byte in){
  //Serial.println(in); // -->  Descomentar para visualizar la posición en el array del _Asciimap
  switch(in){
    case 177: // ñ
      in=164;
      break;
    case 145: // Ñ
      in=165;
      break;
    case 191: // ¿
      in=168;
      break;    
    case 161: // ¡
      in=173;
      break;
  } 
  return in;
}

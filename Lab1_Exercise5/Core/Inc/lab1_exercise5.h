
#include "main.h"
#ifndef INC_LAB1_EXERCISE5_H_
#define INC_LAB1_EXERCISE5_H_



#endif /* INC_LAB1_EXERCISE5_H_ */
const uint8_t segment_p[10] = {
    0b00111111, // 0
    0b00000110, // 1
    0b01011011, // 2
    0b01001111, // 3
    0b01100110, // 4
    0b01101101, // 5
    0b01111101, // 6
    0b00000111, // 7
    0b01111111, // 8
    0b01101111  // 9
};

void display7SEG5(int num) { //Ex5
    if (num < 0 || num > 9) return;
    uint8_t p = segment_p[num];

    //Check từng bit trong segment_p
    HAL_GPIO_WritePin(Seg1_GPIO_Port, Seg1_Pin, (p & 0x01) ? RESET : SET);
    HAL_GPIO_WritePin(Seg2_GPIO_Port, Seg2_Pin, (p & 0x02) ? RESET : SET);
    HAL_GPIO_WritePin(Seg3_GPIO_Port, Seg3_Pin, (p & 0x04) ? RESET : SET);
    HAL_GPIO_WritePin(Seg4_GPIO_Port, Seg4_Pin, (p & 0x08) ? RESET : SET);
    HAL_GPIO_WritePin(Seg5_GPIO_Port, Seg5_Pin, (p & 0x10) ? RESET : SET);
    HAL_GPIO_WritePin(Seg6_GPIO_Port, Seg6_Pin, (p & 0x20) ? RESET : SET);
    HAL_GPIO_WritePin(Seg7_GPIO_Port, Seg7_Pin, (p & 0x40) ? RESET : SET);
}
void display7SEG(int num) { //Ex5
    if (num < 0 || num > 9) return;
    uint8_t p = segment_p[num];

    //Check từng bit trong segment_p
    HAL_GPIO_WritePin(Seg71_GPIO_Port, Seg71_Pin, (p & 0x01) ? RESET : SET);
    HAL_GPIO_WritePin(Seg72_GPIO_Port, Seg72_Pin, (p & 0x02) ? RESET : SET);
    HAL_GPIO_WritePin(Seg73_GPIO_Port, Seg73_Pin, (p & 0x04) ? RESET : SET);
    HAL_GPIO_WritePin(Seg74_GPIO_Port, Seg74_Pin, (p & 0x08) ? RESET : SET);
    HAL_GPIO_WritePin(Seg75_GPIO_Port, Seg75_Pin, (p & 0x10) ? RESET : SET);
    HAL_GPIO_WritePin(Seg76_GPIO_Port, Seg76_Pin, (p & 0x20) ? RESET : SET);
    HAL_GPIO_WritePin(Seg77_GPIO_Port, Seg77_Pin, (p & 0x40) ? RESET : SET);
}

void Ex5(int num){
	if (num < 5){
		display7SEG5 (4 - num);
	}
	else if(num >= 5 && num < 8){
		display7SEG5 (7 - num);
	}
	else {
		display7SEG5 (9 - num);
	}
}
void Ex51(int num){
	if (num < 3){
		display7SEG (2 - num);
	}
	else if(num >= 3 && num < 5){
		display7SEG (4 - num);
	}
	else {
		display7SEG (9 - num);
	}
}

void Ex3(int counter) {
    int state;
    if (counter < 3) {
        state = 0;
    } else if (counter < 5 && counter >= 3) {
        state = 1;
    } else if(counter >=5 && counter < 8){
        state = 2;
    }
    else state = 3;
//0-3: Hai bên đỏ, 2 bên xanh.
//3-5: Hai bên đỏ, 2 bên vàng.
//5-8: Hai bên xanh, 2 bên đỏ.
//8-10: Hai bên vàng,  2 bên đỏ.
    switch (state) {
        case 0: // 0-3s
            HAL_GPIO_WritePin(Led1_GPIO_Port, Led1_Pin, SET);
            HAL_GPIO_WritePin(Led2_GPIO_Port, Led2_Pin, RESET);
            HAL_GPIO_WritePin(Led3_GPIO_Port, Led3_Pin, RESET);

            HAL_GPIO_WritePin(Led4_GPIO_Port, Led4_Pin, RESET);
            HAL_GPIO_WritePin(Led5_GPIO_Port, Led5_Pin, SET);
            HAL_GPIO_WritePin(Led6_GPIO_Port, Led6_Pin, RESET);

            HAL_GPIO_WritePin(Led7_GPIO_Port, Led7_Pin, SET);
            HAL_GPIO_WritePin(Led8_GPIO_Port, Led8_Pin, RESET);
            HAL_GPIO_WritePin(Led9_GPIO_Port, Led9_Pin, RESET);

            HAL_GPIO_WritePin(Led10_GPIO_Port, Led10_Pin, RESET);
            HAL_GPIO_WritePin(Led11_GPIO_Port, Led11_Pin, SET);
            HAL_GPIO_WritePin(Led12_GPIO_Port, Led12_Pin, RESET);
            break;

        case 1: // 3-5s
        	 HAL_GPIO_WritePin(Led1_GPIO_Port, Led1_Pin, SET);
        	 HAL_GPIO_WritePin(Led2_GPIO_Port, Led2_Pin, RESET);
        	 HAL_GPIO_WritePin(Led3_GPIO_Port, Led3_Pin, RESET);

        	 HAL_GPIO_WritePin(Led4_GPIO_Port, Led4_Pin, RESET);
        	 HAL_GPIO_WritePin(Led5_GPIO_Port, Led5_Pin, RESET);
        	 HAL_GPIO_WritePin(Led6_GPIO_Port, Led6_Pin, SET);

        	 HAL_GPIO_WritePin(Led7_GPIO_Port, Led7_Pin, SET);
        	 HAL_GPIO_WritePin(Led8_GPIO_Port, Led8_Pin, RESET);
        	 HAL_GPIO_WritePin(Led9_GPIO_Port, Led9_Pin, RESET);

             HAL_GPIO_WritePin(Led10_GPIO_Port, Led10_Pin, RESET);
        	 HAL_GPIO_WritePin(Led11_GPIO_Port, Led11_Pin, RESET);
             HAL_GPIO_WritePin(Led12_GPIO_Port, Led12_Pin, SET);
        	 break;

        case 2: // 5-8s
        	 HAL_GPIO_WritePin(Led1_GPIO_Port, Led1_Pin, RESET);
        	 HAL_GPIO_WritePin(Led2_GPIO_Port, Led2_Pin, SET);
        	 HAL_GPIO_WritePin(Led3_GPIO_Port, Led3_Pin, RESET);

        	  HAL_GPIO_WritePin(Led4_GPIO_Port, Led4_Pin, SET);
        	  HAL_GPIO_WritePin(Led5_GPIO_Port, Led5_Pin, RESET);
        	  HAL_GPIO_WritePin(Led6_GPIO_Port, Led6_Pin, RESET);

        	  HAL_GPIO_WritePin(Led7_GPIO_Port, Led7_Pin, RESET);
        	  HAL_GPIO_WritePin(Led8_GPIO_Port, Led8_Pin, SET);
        	  HAL_GPIO_WritePin(Led9_GPIO_Port, Led9_Pin, RESET);

        	  HAL_GPIO_WritePin(Led10_GPIO_Port, Led10_Pin, SET);
        	  HAL_GPIO_WritePin(Led11_GPIO_Port, Led11_Pin, RESET);
        	  HAL_GPIO_WritePin(Led12_GPIO_Port, Led12_Pin, RESET);
        	  break;

		case 3: //8-10s
			  HAL_GPIO_WritePin(Led1_GPIO_Port, Led1_Pin, RESET);
			  HAL_GPIO_WritePin(Led2_GPIO_Port, Led2_Pin, RESET);
			  HAL_GPIO_WritePin(Led3_GPIO_Port, Led3_Pin, SET);

			  HAL_GPIO_WritePin(Led4_GPIO_Port, Led4_Pin, SET);
			  HAL_GPIO_WritePin(Led5_GPIO_Port, Led5_Pin, RESET);
			  HAL_GPIO_WritePin(Led6_GPIO_Port, Led6_Pin, RESET);

			  HAL_GPIO_WritePin(Led7_GPIO_Port, Led7_Pin, RESET);
			  HAL_GPIO_WritePin(Led8_GPIO_Port, Led8_Pin, RESET);
			  HAL_GPIO_WritePin(Led9_GPIO_Port, Led9_Pin, SET);

			  HAL_GPIO_WritePin(Led10_GPIO_Port, Led10_Pin, SET);
			  HAL_GPIO_WritePin(Led11_GPIO_Port, Led11_Pin, RESET);
			  HAL_GPIO_WritePin(Led12_GPIO_Port, Led12_Pin, RESET);
			  break;

        default:
        	 HAL_GPIO_WritePin(Led1_GPIO_Port, Led1_Pin, RESET);
        	 HAL_GPIO_WritePin(Led2_GPIO_Port, Led2_Pin, RESET);
        	 HAL_GPIO_WritePin(Led3_GPIO_Port, Led3_Pin, RESET);

        	 HAL_GPIO_WritePin(Led4_GPIO_Port, Led4_Pin, RESET);
        	 HAL_GPIO_WritePin(Led5_GPIO_Port, Led5_Pin, RESET);
        	 HAL_GPIO_WritePin(Led6_GPIO_Port, Led6_Pin, RESET);

        	 HAL_GPIO_WritePin(Led7_GPIO_Port, Led7_Pin, RESET);
        	 HAL_GPIO_WritePin(Led8_GPIO_Port, Led8_Pin, RESET);
        	 HAL_GPIO_WritePin(Led9_GPIO_Port, Led9_Pin, RESET);

        	 HAL_GPIO_WritePin(Led10_GPIO_Port, Led10_Pin, RESET);
        	 HAL_GPIO_WritePin(Led11_GPIO_Port, Led11_Pin, RESET);
        	 HAL_GPIO_WritePin(Led12_GPIO_Port, Led12_Pin, RESET);
            break;
    }
}

class Solution {
public:
    string intToRoman(int num) {
        string r="";

        while(num!=0){
            if(num>=1000){
                r+="M";
                num-=1000;
            }
            else if(num>=900){
                r+="CM";
                num-=900;
            }
            else if(num>=500){
                r+="D";
                num-=500;
            }
            else if(num>=400){
                r+="CD";
                num-=400;
            }
            else if(num>=100){
                r+="C";
                num-=100;
            }
            else if(num>=90){
                r+="XC";
                num-=90;
            }
            else if(num>=50){
                r+="L";
                num-=50;
            }
            else if(num>=40){
                r+="XL";
                num-=40;
            }
            else if(num>=10){
                r+="X";
                num-=10;
            }
            else if(num>=9){
                r+="IX";
                num-=9;
            }
            else if(num>=5){
                r+="V";
                num-=5;
            }
            else if(num>=4){
                r+="IV";
                num-=4;
            }
            else{
                r+="I";
                num-=1;
            }
        }
        return r;
    }
};
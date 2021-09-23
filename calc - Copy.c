#include<stdio.h>
#include "calc.h"
#include "stack for char.h"
#include "x.h"


extern node_char *top_char;
extern int size_of_stack;
extern  struct node_int *top_int;

 char peru(char x){
    int val=0;
    if (x=='*'||x=='/') {
        val=2;
    }else
        val=1;
    return val;
}
void calc(char x[],int size){
    for (int i=0; i<size; i++) {
        static int temp=0;
        static int re=0;
        if (x[i]!='*'&&x[i]!='+'&&x[i]!='-'&&x[i]!='/') {
            if (re!=0) {
                temp*=10;
                temp+=(int)x[i]-48;
            }else{
                temp+=(int)x[i]-48;
                re++;
            }
            if ((i+1==size)) {
                add_node_int(temp);
                while (size_of_stack !=1) {
                    
                    if (top_char->letter=='+') {
                        top_int->pre->value+=top_int->value;
                        remove_node_int();
                        remove_node_char();
                    }else if(top_char->letter=='-'){
                        top_int->pre->value-=top_int->value;
                        remove_node_int();
                        remove_node_char();
                    }else if(top_char->letter=='*'){
                        top_int->pre->value*=top_int->value;
                        remove_node_int();
                        remove_node_char();
                    }else{
                        top_int->pre->value/=top_int->value;
                        remove_node_int();
                        remove_node_char();
                    }
                }
            }
        }else{
            re=0;
            add_node_int(temp);
            temp=0;
            if (!is_empty()&&top_char->per<peru(x[i])) {
                add_node_char(x[i]);
            }else if((!is_empty()&&top_char->per>=peru(x[i]))){
                
                while (size_of_stack !=1) {
                    
                    if (top_char->letter=='+') {
                        top_int->pre->value+=top_int->value;
                        remove_node_int();
                        remove_node_char();
                    }else if(top_char->letter=='-'){
                        top_int->pre->value-=top_int->value;
                        remove_node_int();
                        remove_node_char();
                    }else if(top_char->letter=='*'){
                        top_int->pre->value*=top_int->value;
                        remove_node_int();
                        remove_node_char();
                    }else{
                        top_int->pre->value/=top_int->value;
                        remove_node_int();
                        remove_node_char();
                    }
                }
                add_node_char(x[i]);
            }else
                add_node_char(x[i]);
            
        }
    }
    
}
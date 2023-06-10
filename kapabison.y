%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "kapabison.tab.h"
#define MAX_STR_CONST 1025

extern FILE *yyin;
extern int yylex();
extern char* yytext;
extern int yyparse();
extern int line_num;
extern char str_buf[MAX_STR_CONST];    
extern char*str_buf_ptr;
int line=1;
int error_count=0; 
int flag_err_type=0; // 0: Token Error (YYTEXT) || 1: String Error (STRBUF)
int scope=0;
extern int yylex(void);
void yyerror(const char* message);
extern char *yytext;
extern void yyterminate();


%}

%define parse.error verbose

%union{
	int intval;
	float floatval;
	char charval;
	char* strval;
	
	
}

%token COLON  "colon (:)"
%token OBRACKETS "obrackets ({)"
%token CBRACKETS "cbrackets (})"
%token OBRACES "obraces ([)"
%token CBRACES "cbraces (])"
%token COMMA "comma (,)"
%token last	"last"
%token gameId	"gemId"
%token drawId	"drawId"
%token drawTime	"drawTime"	
%token status	"status"
%token drawBreak	"drawBreak"
%token visualDraw	"visualDraw"
%token pricePoints 	"pricePoints"
%token winningNumbers	"winningNumbers"
%token prizeCategories	"prizeCategories"
%token wagerStatistics	"wagerStatistics"
%token list	"list"
%token bonus	"bonus"
%token active	"active"
%token id	"id"
%token divident	"divident"
%token winners	"winners"
%token distributed	"distributed"
%token jackpot	"jackpot"
%token fixed	"fixed"
%token categoryType	"categoryType"
%token gameType	"gameType"
%token minimumDistributed	"minimumDistributed"
%token columns	"columns"
%token addOn	"addOn"
%token drawId_at	"drawId_at"
%token gameId_at	"gameId_at"
%token amount	"amount"
%token wagers	"wagers"
%token content	"content"
%token totalPages "totalPages"
%token totalElements "totalElements"
%token numberOfElements "numberOfElements"
%token sort "sort"
%token direction "direction"
%token property "property"
%token ignoreCase "ignoreCase"
%token nullHandling "nullHandling" 
%token descending "descending"
%token ascending "ascending"
%token first	"first"
%token size	"size"
%token number	"number"
%token INT	"INT"
%token STRING	"STRING"
%token FLOAT	"FLOAT"
%token BOOLEAN "BOOLEAN"
%type <intval> INT	
%type <floatval> FLOAT	
%type <strval> STRING	
%start JSON	

%%

JSON:   OBRACKETS {printf("{\n");} rulePROGRAM CBRACKETS {printf("\n}");};

rulePROGRAM:	ruleLAST ruleACTIVE | ruleFOTIA ;
        	
        	
ruleFOTIA:	content {printf("\t\"content\"");} COLON {printf(":");} OBRACES {printf("[\n");} ruleCONTENT COMMA {printf(",\n");} ruleCONTENT COMMA {printf(",\n");} ruleCONTENT COMMA {printf(",\n");} ruleCONTENT CBRACES {printf("\n]");} COMMA {printf(",\n");} ruleTOTALPAGES ruleTOTALELEMENTS ruleLASTRANGE ruleNUMBEROFELEMENTS ruleSORT ruleFIRST ruleSIZE ruleNUMBER ;


ruleCONTENT:	OBRACKETS{printf("\t\t{\n");} {printf("\t");} ruleGAMEID {printf("\t");} ruleDRAWID {printf("\t");} ruleDRAWTIME {printf("\t");} ruleSTATUS {printf("\t");} ruleDRAWBREAK {printf("\t");} ruleVISUALDRAW {printf("\t");} rulePRICEPOINTS {printf("\t");} ruleWINNINGNUMBERSRANGE {printf("\t");} rulePRIZECATEGORIESID {printf("\t");} rulePRIZECATEGORIES {printf("\t");} ruleWAGERSTATISTICS CBRACKETS{printf("\n\t}");}; 


ruleTOTALPAGES:   totalPages {printf("\t\"totalPages\"");} COLON {printf(":");} INT {printf("%s",yytext);} COMMA {printf(",\n");};


ruleTOTALELEMENTS: totalElements {printf("\t\"totalElements\"");} COLON {printf(":");} INT {printf("%s",yytext);} COMMA {printf(",\n");};


ruleLASTRANGE: last {printf("\t\"last\"");} COLON {printf(":");} BOOLEAN {printf("\%s",yytext);} COMMA {printf(",\n");};


ruleNUMBEROFELEMENTS: numberOfElements {printf("\t\"numberOfElements\"");} COLON {printf(":");} INT {printf("\%s",yytext);} COMMA {printf(",\n");};


ruleSORT: sort {printf("\t\"sort\"");} COLON {printf(":");} OBRACES {printf("[\n");} OBRACKETS {printf("{\n");}  ruleDIRECTION rulePROPERTY ruleIGNORECASE ruleNULLHANDLING ruleDESCENDING ruleASCENDING CBRACKETS {printf("\n}");} CBRACES {printf("\n]");} COMMA {printf(",\n");};


ruleDIRECTION: direction {printf("\t\t\"direction\"");} COLON {printf(":");} STRING {printf("\%s",yytext);} COMMA {printf(",\n");};


rulePROPERTY: property {printf("\t\t\"property\"");} COLON {printf(":");} STRING {printf("\%s",yytext);} COMMA {printf(",\n");};


 ruleIGNORECASE: ignoreCase {printf("\t\t\"ignoreCase\"");} COLON {printf(":");} BOOLEAN {printf("\%s",yytext);} COMMA {printf(",\n");};
 
 
ruleNULLHANDLING: nullHandling {printf("\t\t\"nullHandling\"");} COLON {printf(":");} STRING {printf("\%s",yytext);} COMMA {printf(",\n");};
 
    
ruleDESCENDING: descending {printf("\t\t\"descending\"");} COLON {printf(":");} BOOLEAN {printf("\%s",yytext);} COMMA {printf(",\n");};


ruleASCENDING: ascending {printf("\t\t\"ascending\"");} COLON {printf(":");} BOOLEAN {printf("\%s",yytext);};   


ruleFIRST: first {printf("\t\"first\"");} COLON {printf(":");} BOOLEAN {printf("\%s",yytext);} COMMA {printf(",\n");};   


ruleSIZE: size {printf("\t\"size\"");} COLON {printf(":");} INT {printf("\%s",yytext);} COMMA {printf(",\n");};


ruleNUMBER: number {printf("\t\"number\"");} COLON {printf(":");} INT {printf("\%s",yytext);};
 
    	
ruleWINNINGNUMBERSRANGE: winningNumbers {printf("\t\"winningNumbers\"");} COLON {printf(":");} OBRACKETS {printf(" {");} ruleLISTR ruleBONUSR CBRACKETS {printf("\n\t\t}");} COMMA {printf(",\n");};	

ruleLISTR: list {printf("\n\t\t\t\"list\"");} COLON {printf(":");} OBRACES {printf("[");} INT {printf("\%s",yytext);} COMMA {printf(",");} INT {printf("\%s",yytext);} COMMA {printf(",");} INT {printf("\%s",yytext);} COMMA {printf(",");} INT {printf("\%s",yytext);} COMMA {printf(",");} INT {printf("\%s",yytext);}  CBRACES {printf("]");} COMMA {printf(",\n");};


ruleBONUSR :	bonus {printf("\t\t\t\"bonus\"");} COLON {printf(": ");} OBRACES {printf("[");} INT {printf("\%s",yytext);} CBRACES {printf("]\n");};


ruleLAST: 	last {printf("\t\"last\"");} COLON {printf(":");} 	OBRACKETS{printf("{\n");} ruleGAMEID ruleDRAWID ruleDRAWTIME ruleSTATUS ruleDRAWBREAK ruleVISUALDRAW rulePRICEPOINTS ruleWINNINGNUMBERS rulePRIZECATEGORIESID rulePRIZECATEGORIES ruleWAGERSTATISTICS CBRACKETS{printf("\n\t}");} COMMA {printf(",\n");};


ruleACTIVE:	active {printf("\t\"active\"");} COLON {printf(":");} OBRACKETS {printf("{\n");} ruleGAMEID ruleDRAWID ruleDRAWTIME ruleSTATUSA ruleDRAWBREAK ruleVISUALDRAW rulePRICEPOINTS rulePRIZECATEGORIESID rulePRIZECATEGORIES ruleWAGERSTATISTICS CBRACKETS{printf("\n\t}");};


ruleGAMEID:	gameId {printf("\t\"gameId\"");} COLON {printf(":");} INT {printf("\%s",yytext);} COMMA {printf(",\n");} ;
 
 	
ruleDRAWID:	drawId {printf("\t\"drawId\"");} COLON {printf(":");} INT {printf("\%s",yytext);} COMMA {printf(",\n");};


ruleDRAWTIME:	drawTime {printf("\t\"drawTime\"");} COLON {printf(":");} INT {printf("\%s",yytext);} COMMA {printf(",\n");};

ruleSTATUS:	status {printf("\t\"status\"");} COLON {printf(":");} STRING {printf("\%s",yytext);} COMMA {printf(",\n");};

ruleSTATUSA:	status {printf("\t\"status\"");} COLON {printf(":");} active {printf("\%s",yytext);} COMMA {printf(",\n");};


ruleDRAWBREAK:	drawBreak {printf("\t\"drawBreak\"");} COLON {printf(":");}
INT {printf("\%s",yytext);} COMMA {printf(",\n");};


ruleVISUALDRAW:	visualDraw {printf("\t\"visualDraw\"");} COLON {printf(":");} INT {printf("\%s",yytext);} COMMA {printf(",\n");};


rulePRICEPOINTS: 	pricePoints {printf("\t\"pricePoints\"");} COLON {printf(":");} OBRACKETS {printf("{");}  ruleAMOUNT CBRACKETS {printf("\t\t }");} COMMA {printf(",\n");};


ruleAMOUNT:	amount {printf("\n\t\t\t\"amount\"");} COLON {printf(":");} FLOAT {printf("\%s\n",yytext);};


ruleWINNINGNUMBERS:	winningNumbers {printf("\t\"winningNumbers\"");} COLON {printf(":");} OBRACKETS {printf(" {");} ruleLIST ruleBONUS CBRACKETS {printf("\n\t\t} ");} COMMA {printf(",\n");};


ruleLIST: list {printf("\n\t\t\"list\"");} COLON {printf(":");} OBRACES {printf("[");} INT {printf("\n\t\t\t\t\%s",yytext);} COMMA {printf(",");} INT {printf("\n\t\t\t\t\%s",yytext);} COMMA {printf(",");} INT {printf("\n\t\t\t\t\%s",yytext);} COMMA {printf(",");} INT {printf("\n\t\t\t\t\%s",yytext);} COMMA {printf(",");} INT {printf("\n\t\t\t\t\%s",yytext);}  CBRACES {printf("\n\t\t\t]");} COMMA {printf(",\n");};


ruleBONUS :	bonus {printf("\t\t \"bonus\"");} COLON {printf(": ");} OBRACES {printf("[\n");} INT {printf("\t\t\%s \n",yytext);} CBRACES {printf("\t\t]\n");};


rulePRIZECATEGORIESID: prizeCategories {printf("\t\"prizeCategories\"");} COLON {printf(":");} OBRACES {printf("[\n");} OBRACKETS {printf("\t\t{ \n");} ruleID ruleDIVIDENT ruleWINNERS ruleDISTRIBUTED ruleJACKPOT ruleFIXED ruleCATEGORYTYPE gameType {printf("\t\t\"gameType\"");} COLON {printf(":");} STRING {printf("\%s",yytext);} COMMA {printf(",\n");} ruleMINIMUMDISTRIBUTED CBRACKETS {printf("\n\t\t\t}");} COMMA {printf(",\n");};



rulePRIZECATEGORIES: 	   ruleNERO COMMA {printf(",\n");} ruleNERO COMMA {printf("\n");} ruleNERO COMMA {printf(",\n");} ruleNERO COMMA {printf(",\n");} ruleNERO COMMA {printf(",\n");} ruleNERO COMMA {printf(",\n");} ruleNERO CBRACES {printf("\n\t\t]");} COMMA {printf(",\n");};


ruleNERO:		OBRACKETS {printf("\t\t{ \n");} ruleID ruleDIVIDENT ruleWINNERS ruleDISTRIBUTED ruleJACKPOT ruleFIXED ruleCATEGORYTYPE ruleGAMETYPE CBRACKETS {printf("\n\t\t\t}");};


ruleID:	id {printf("\t\t\"id\"");} COLON {printf(":");} INT {printf("\%s",yytext);} COMMA {printf(",\n");};


ruleDIVIDENT:	divident {printf("\t\t\"divident\"");} COLON {printf(":");} FLOAT {printf("\%s",yytext);} COMMA {printf(",\n");};


ruleWINNERS: 	winners {printf("\t\t\"winners\"");} COLON {printf(":");} INT {printf("\%s",yytext);} COMMA {printf(",\n");};


ruleDISTRIBUTED:	distributed {printf("\t\t\"distributed\"");} COLON {printf(":");} FLOAT {printf("\%s",yytext);} COMMA {printf(",\n");};



ruleJACKPOT:	jackpot {printf("\t\t\"jackpot\"");} COLON {printf(":");} FLOAT {printf("\%s",yytext);} COMMA {printf(",\n");};


ruleFIXED:	fixed {printf("\t\t\"fixed\"");} COLON {printf(":");} FLOAT {printf("%s",yytext);} COMMA {printf(",\n");};


ruleCATEGORYTYPE:	categoryType {printf("\t\t\"categoryType\"");} COLON {printf(":");} INT {printf("\%s",yytext);} COMMA {printf(",\n");};


ruleGAMETYPE:	gameType {printf("\t\t\"gameType\"");} COLON {printf(":");} STRING {printf("\%s",yytext);};



ruleMINIMUMDISTRIBUTED:	minimumDistributed {printf("\t\t\"minimumDistributed\"");} COLON {printf(":");} FLOAT {printf("\%s",yytext);};


ruleWAGERSTATISTICS:	wagerStatistics {printf("\t\"wagerStatistics\"");} COLON {printf(":");} OBRACKETS {printf("{ \n");}  ruleCOLUMNS ruleWAGERS ruleADDON CBRACKETS{printf("\t}");};


ruleCOLUMNS:	columns {printf("\t\t\"columns\"");} COLON {printf(":");} INT {printf("%s",yytext);} COMMA {printf(",\n");};


ruleWAGERS:	wagers {printf("\t\t\"wagers\"");} COLON {printf(":");} INT {printf("%s",yytext);} COMMA {printf(",\n");};


ruleADDON:	addOn {printf("\t\t\"addOn\"");} COLON {printf(":");}   OBRACES {printf("[");} CBRACES {printf("]\n");};



%%


int main(int argc, char *argv[]) {if(argc > 1){
        yyin = fopen(argv[1], "r");
        if (yyin == NULL){
            perror ("Error opening file"); return -1;} } 
			  yyparse();
	if(error_count > 0){
        printf("Syntax Analysis failed due to %d errors\n", error_count);
    }else{
        printf("Syntax Analysis completed successfully.\n");
    }
    return 0;
}


void yyerror(const char* message)
{
	error_count++;
	if(flag_err_type == 0)
	{printf("\n Error sto line %d pou prokaleitai apo %s : %s\n", line_num ,yytext,message);
	}
	else if(flag_err_type == 1){*str_buf_ptr = '\0';
	printf(" error sto  line %d konta se \"%s\": %s\n", line_num, str_buf, message);}
}
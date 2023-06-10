%{
#include <stdio.h>
#include <stdlib.h>
#include "kapabison.tab.h"
#include <string.h>
#include <unistd.h>
#define MAX_STR_CONST 1025
int line_num=1;
int line_init=-1;
char*str_buf[MAX_STR_CONST];    
char*str_buf_ptr;
%}


INT     [1-9][0-9]*|0
FLOAT   [0-9]*\.?[0-9]*
STRING  (\\.|[^\"])*
BOOLEAN ("true"|"false")
whitespace [\t\n\r]

%%
 

:       {return COLON;}                     
,	{return COMMA;}
\{      {return OBRACKETS;}
\}      {return CBRACKETS;}
\[      {return OBRACES;}
\]      {return CBRACES;}
\"last\"    {return last;}
\"gameId\"  {return gameId;}
\"drawId\"  {return drawId;}
\"drawTime\"    {return drawTime;}
\"status\"      {return status;}
\"visualDraw\"  {return visualDraw;}
\"drawBreak\"	 {return drawBreak;}
\"pricePoints\" {return pricePoints;}
\"amount\"      {return amount;}
\"winningNumbers\"  {return winningNumbers;}
\"list\"        {return list;}
\"bonus\"       {return bonus;}
\"prizeCategories\" {return prizeCategories;}
\"id\"          {return id;}
\"divident\"    {return divident;}
\"winners\"     {return winners;}
\"distributed\" {return distributed;}
\"jackpot\"     {return jackpot;}
\"fixed\"       {return fixed;}
\"categoryType\"    {return categoryType;}
\"gameType\"        {return gameType;}
\"minimumDistributed\"   {return minimumDistributed;}
\"wagerStatistics\"     {return wagerStatistics;}
\"columns\"     {return columns;}
\"wagers\"      {return wagers;}
\"content\"	{return content;}
\"addOn\"       {return addOn;}
\"active\"      {return active;}
\"totalPages\"	 {return totalPages;}
\"totalElements\" {return totalElements;}
\"numberOfElements\" {return numberOfElements;}
\"sort\"	{return sort;}
\"direction\"	{return direction;}
\"property\"	{return property;}
\"ignoreCase\"	{return ignoreCase;}
\"nullHandling\"	{return nullHandling;}
\"descending\"	{return descending;}
\"ascending\"	{return ascending;}
\"first\"	{return first;}
\"size\"	{return size;}
\"number\"	{return number;}
\"{STRING}\"    {return STRING;}
{INT}	{return INT;}
{FLOAT} {return FLOAT;}
{BOOLEAN} {return BOOLEAN;}



\n              {++line_num;}
{whitespace}            {;}

%%


int yywrap(void)
{
  return 1;
  }
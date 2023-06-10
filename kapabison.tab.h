/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_KAPABISON_TAB_H_INCLUDED
# define YY_YY_KAPABISON_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    COLON = 258,
    OBRACKETS = 259,
    CBRACKETS = 260,
    OBRACES = 261,
    CBRACES = 262,
    COMMA = 263,
    last = 264,
    gameId = 265,
    drawId = 266,
    drawTime = 267,
    status = 268,
    drawBreak = 269,
    visualDraw = 270,
    pricePoints = 271,
    winningNumbers = 272,
    prizeCategories = 273,
    wagerStatistics = 274,
    list = 275,
    bonus = 276,
    active = 277,
    id = 278,
    divident = 279,
    winners = 280,
    distributed = 281,
    jackpot = 282,
    fixed = 283,
    categoryType = 284,
    gameType = 285,
    minimumDistributed = 286,
    columns = 287,
    addOn = 288,
    drawId_at = 289,
    gameId_at = 290,
    amount = 291,
    wagers = 292,
    content = 293,
    totalPages = 294,
    totalElements = 295,
    numberOfElements = 296,
    sort = 297,
    direction = 298,
    property = 299,
    ignoreCase = 300,
    nullHandling = 301,
    descending = 302,
    ascending = 303,
    first = 304,
    size = 305,
    number = 306,
    INT = 307,
    STRING = 308,
    FLOAT = 309,
    BOOLEAN = 310
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 29 "kapabison.y"

	int intval;
	float floatval;
	char charval;
	char* strval;
	
	

#line 122 "kapabison.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_KAPABISON_TAB_H_INCLUDED  */

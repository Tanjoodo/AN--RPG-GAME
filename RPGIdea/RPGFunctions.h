#pragma once
#ifndef RPGFUNCTIONS_H
#define RPGFUNCTIONS_H

namespace map_grids { // namespace maps

	char entrance[20][21] =
	{ { '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?'}
	, { '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' }
	, { '?' , '?' , '?' , '?' , '?' , '?' , '?' , 'T' , 'R' , 'A' , 'P' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' }
	, { '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , 'H' , 'o' , 'u' , 's' , 'e' , '?' , '?' , '?' , '?' , '@' , '@' , '?' , '?' }
	, { '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '/' , '#' , '?' , '?' , '?' , '?' , '?' , '?' , ' ' , ' ' , '?' , '?' }
	, { '?' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' }
	, { '?' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' }
	, { '?' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , ' ' , ' ' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '?' }
	, { '?' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , ' ' , ' ' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '?' }
	, { '?' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , ' ' , ' ' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '?' }
	, { '?' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , ' ' , ' ' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '?' }
	, { '?' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , ' ' , ' ' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '?' }
	, { '?' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , ' ' , ' ' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '?' }
	, { '?' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , ' ' , ' ' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '?' }
	, { '?' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , ' ' , ' ' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '?' }
	, { '?' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , ' ' , ' ' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '?' }
	, { '?' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , ' ' , ' ' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '?' }
	, { '?' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , ' ' , ' ' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '?' }
	, { '?' , '~' , '~' , '~' , '~' , '~' , '~' , '~' , ' ' , ' ' , '~' , '~' , '~' , '~' , '~' , '~' , '~' , '~' , '~' , '~' , '?' }
	, { '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' }};

	
	char livingroom[20][21] =
	{ {'?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?'}
	, { '?' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' , '?' , '?' , '?' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' }
	, { '?' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' , ' ' , ' ' , '/' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' }
	, { '?' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' , ' ' , ' ' , '?' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' }
	, { '?' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' , ' ' , ' ' , '?' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' }
	, { '?' , ' ' , 'B' , 'a' , 't' , 'h' , ' ' , ' ' , '/' , ' ' , ' ' , '?' , ' ' , 'K' , 'i' , 't' , 'c' , 'h' , 'e' , 'n' , '?' }
	, { '?' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' , ' ' , ' ' , '?' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' }
	, { '?' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' , ' ' , ' ' , '?' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' }
	, { '?' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' , ' ' , ' ' , '?' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' }
	, { '?' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' , ' ' , ' ' , '?' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' }
	, { '?' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' , ' ' , ' ' , '?' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' }
	, { '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , ' ' , ' ' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' }
	, { '?' , '?' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' , '?' }
	, { '?' , '?' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' , '?' }
	, { '?' , '?' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' , '?' }
	, { '?' , '?' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' , '?' }
	, { '?' , '?' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' , '?' }
	, { '?' , '?' , '?' , '?' , '?' , '?' , '\\' , '?' , '?' , '?' , '?' , '?' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' , '?' }
	, { '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' }
	, { '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' }};


	char bathroom [20][21]
	{ {'?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?'}
	, { '?' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' }
		, { '?' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' }
		, { '?' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' }
		, { '?' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' }
		, { '?' , ' ' , ' ' , ' ' , ' ' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' }
		, { '?' , ' ' , ' ' , ' ' , ' ' , '#' , '>' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '#' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' }
		, { '?' , ' ' , ' ' , ' ' , ' ' , '#' , '>' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '\\' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' }
		, { '?' , ' ' , ' ' , ' ' , ' ' , '#' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '#' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' }
		, { '?' , ' ' , ' ' , ' ' , ' ' , '#' , '?' , '?' , ' ' , ' ' , ' ' , ' ' , ' ' , '#' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' }
		, { '?' , ' ' , ' ' , ' ' , ' ' , '#' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '#' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' }
		, { '?' , ' ' , ' ' , ' ' , ' ' , '#' , '#' , '#' , '?' , '?' , '?' , '#' , '#' , '#' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' }
		, { '?' , ' ' , ' ' , ' ' , ' ' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' }
		, { '?' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' }
		, { '?' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' }
		, { '?' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' }
		, { '?' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' }
		, { '?' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' }
		, { '?' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' }
	, { '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' }};


	char kitchen [20][21] =
	{ {'?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?'}
		, { '?' , ' ' , ' ' , ' ' , '#' , '/' , '#' , '#' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' }
		, { '?' , ' ' , ' ' , ' ' , '#' , ' ' , ' ' , '#' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' }
		, { '?' , ' ' , ' ' , ' ' , '#' , ' ' , ' ' , '#' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' }
		, { '?' , ' ' , ' ' , ' ' , '/' , ' ' , ' ' , '/' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' }
		, { '?' , ' ' , ' ' , ' ' , '#' , ' ' , ' ' , '#' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' }
		, { '?' , ' ' , ' ' , ' ' , '#' , ' ' , ' ' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , ' ' , ' ' , ' ' , '?' }
		, { '?' , ' ' , ' ' , ' ' , '#' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '#' , ' ' , ' ' , ' ' , '?' }
		, { '?' , ' ' , ' ' , ' ' , '\\' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '#' , ' ' , ' ' , ' ' , '?' }
		, { '?' , ' ' , ' ' , ' ' , '#' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '#' , ' ' , ' ' , ' ' , '?' }
		, { '?' , ' ' , ' ' , ' ' , '#' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '#' , ' ' , ' ' , ' ' , '?' }
		, { '?' , ' ' , ' ' , ' ' , '#' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '#' , ' ' , ' ' , ' ' , '?' }
		, { '?' , ' ' , ' ' , ' ' , '#' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '#' , ' ' , ' ' , ' ' , '?' }
		, { '?' , ' ' , ' ' , ' ' , '#' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '#' , ' ' , ' ' , ' ' , '?' }
		, { '?' , ' ' , ' ' , ' ' , '#' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '#' , ' ' , ' ' , ' ' , '?' }
		, { '?' , ' ' , ' ' , ' ' , '#' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '#' , ' ' , ' ' , ' ' , '?' }
		, { '?' , ' ' , ' ' , ' ' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , ' ' , ' ' , ' ' , '?' }
		, { '?' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' }
		, { '?' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' }
	, { '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' }};


	char bossroom[20][21]=

	{ {'?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?'}
	, { '?' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' }
		, { '?' , ' ' , ' ' , ' ' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '?' }
		, { '?' , ' ' , ' ' , ' ' , '#' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '#' , '?' }
		, { '?' , ' ' , ' ' , ' ' , '#' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '#' , '?' }
		, { '?' , ' ' , ' ' , ' ' , '#' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '#' , '?' }
		, { '?' , ' ' , ' ' , ' ' , '#' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '#' , '?' }
		, { '?' , ' ' , ' ' , ' ' , '#' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '#' , '?' }
		, { '?' , ' ' , ' ' , ' ' , '#' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '#' , '?' }
		, { '?' , ' ' , ' ' , ' ' , '#' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '#' , '?' }
		, { '?' , ' ' , ' ' , ' ' , '\\' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '#' , '?' }
		, { '?' , ' ' , ' ' , ' ' , '#' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '#' , '?' }
		, { '?' , ' ' , ' ' , ' ' , '#' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '#' , '?' }
		, { '?' , ' ' , ' ' , ' ' , '#' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '#' , '?' }
		, { '?' , ' ' , ' ' , ' ' , '#' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '#' , '?' }
		, { '?' , ' ' , ' ' , ' ' , '#' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '#' , '?' }
		, { '?' , ' ' , ' ' , ' ' , '#' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '#' , '?' }
		, { '?' , ' ' , ' ' , ' ' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '?' }
		, { '?' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' }
	, { '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' }};


	char rightroom[20][21]
	{ {'?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?'}
	, { '?' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' }
		, { '?' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' }
		, { '?' , ' ' , ' ' , ' ' , ' ' , ' ' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '?' }
		, { '?' , ' ' , ' ' , ' ' , ' ' , ' ' , '#' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '#' , '?' }
		, { '?' , ' ' , ' ' , ' ' , ' ' , ' ' , '#' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '#' , '?' }
		, { '?' , ' ' , ' ' , ' ' , ' ' , ' ' , '#' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '#' , '?' }
		, { '?' , ' ' , ' ' , ' ' , ' ' , ' ' , '#' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '#' , '?' }
		, { '?' , ' ' , ' ' , ' ' , ' ' , ' ' , '#' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '\\' , '?' }
		, { '?' , ' ' , ' ' , ' ' , ' ' , ' ' , '#' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '#' , '?' }
		, { '?' , ' ' , ' ' , ' ' , ' ' , ' ' , '#' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '#' , '?' }
		, { '?' , ' ' , ' ' , ' ' , ' ' , ' ' , '#' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '#' , '?' }
		, { '?' , ' ' , ' ' , ' ' , ' ' , ' ' , '#' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '#' , '?' }
		, { '?' , ' ' , ' ' , ' ' , ' ' , ' ' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '?' }
		, { '?' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' }
		, { '?' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' }
		, { '?' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' }
		, { '?' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' }
		, { '?' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' }
	, { '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' }};



	enum Mapsnum
	{
		ENTRANCE, LIVING_ROOM, BATHROOM, KITCHEN, RIGHTROOM, LEFTROOM
	};
}

void printTitle();

#endif // !1

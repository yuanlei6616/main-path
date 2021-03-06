//
// countries.h
//
// This file contains basic data for countries and US states
//
// 2016/12/28 Separated from the file countries.cpp
//

// Country table for WOS data, last update 2013/07/20
// codes for the following table are defined by Mei Ho
// they are: area, subarea, island
#define NLOCS 146
struct LOCATION location[NLOCS] = { 
L"[-Vague]", 99, 99, 99,				// VAGUE means cannot find correspondence between addresses and authors
L"[Unknown country]", 99, 99, 99,	// unknown country name in the address
L"afghanistan",	2,	22, 0,
L"albania", 99, 99, 99,
L"algeria", 5, 50, 0,
L"angola",	5,	50, 0,
L"argentina", 1, 12, 0,
L"armenia", 2, 22, 0,
L"australia",	4,	40, 1,
L"austria",	3,	31, 0,
L"bahrain", 2, 22, 1,
L"bangladesh", 2, 22, 0,
L"belgium",	3,	31, 0,
L"bolivia", 1, 12, 0,
L"bosnia & herceg", 99, 99, 99,
L"botswana", 5, 50, 0,
L"brazil",	1,	12, 0,
L"brunei",	2,	23, 0,
L"bulgaria", 3, 33, 0,
L"burkina faso", 5,	50, 0,
L"byelarus", 3, 33, 0,
L"cambodia", 2, 23, 0,
L"cameroon", 5, 50, 0,
L"canada",	1,	11, 0,
L"chile",	1,	12, 0,
L"colombia", 1, 12, 0,
L"congo",	5,	50, 0,
L"costa rica", 1, 12, 0,
L"cote ivoire", 99, 99, 99,
L"croatia",	3,	33, 1,
L"cuba", 1, 12, 1,
L"cyprus", 3, 33, 1,
L"czech republic",	3,	33, 0,
L"denmark",	3,	32, 0,
L"dominican rep", 1, 12, 1,
L"ecuador", 1, 12, 0,
L"egypt", 5, 50, 0,
L"el salvador", 1, 12, 0,
L"england",	3,	31, 1,
L"estonia", 3, 33, 0,
L"ethiopia", 5, 50, 0,
L"fiji", 4, 40, 1,
L"finland",	3,	32, 0,
L"france",	3,	31, 0,
L"gambia", 5, 50, 0,
L"ger dem rep", 99, 99, 99,
L"germany",	3,	31, 0,
L"ghana", 5, 50, 0,
L"greece",	3,	31, 0,
L"grenada",	1,	12, 1,
L"guatemala", 1, 12, 0,
L"honduras", 1, 12, 0,
L"hong kong",	2,	23, 0,
L"hungary", 3, 33, 0,
L"iceland",	3,	32, 1,
L"india",	2,	22, 0,
L"indonesia",	2,	23, 1,
L"iran",	2,	22, 0,
L"iraq",	2,	22, 0,
L"ireland", 3, 31, 1,
L"israel",	2,	22, 0,
L"italy",	3,	31, 0,
L"jamaica", 1, 12, 1,
L"japan",	2,	21, 1,
L"jordan", 2, 22, 0,
L"kazakhstan", 2, 22, 0,
L"kenya", 5, 50, 0,
L"kuwait", 2, 22, 0,
L"kyrgyzstan", 2, 22, 0,
L"laos", 2, 23, 0,
L"latvia", 3, 33, 0,
L"lebanon", 2, 22, 0,
L"libya", 5, 50, 0,
L"liechtenstein", 3, 31, 0,
L"lithuania", 3, 33, 0,
L"luxembourg", 3, 31, 0,
L"macedonia", 99, 99, 99,
L"madagascar", 5, 50, 1,
L"malawi", 5, 50, 1,
L"malaysia",	2,	23, 0,
L"mali", 99, 99, 99,
L"mauritania", 5, 50, 0,
L"mauritius", 5, 50, 1,
L"mexico",	1,	11, 0,
L"moldova", 3, 33, 0,
L"montenegro", 99, 99, 99,
L"morocco", 5, 50, 0,
L"myanmar", 2, 23, 0,
L"namibia", 5, 50, 0,
L"nepal", 2, 22, 0,
L"neth antilles", 1, 12, 1,			// 荷屬安地列斯
L"netherlands",	3,	31, 0,
L"netherlands antilles", 1, 12, 1,	// 荷屬安地列斯
L"new zealand",	4,	40, 1,
L"nigeria", 5, 50, 0,
L"north ireland", 3, 31, 1,
L"norway",	3,	32, 0,
L"oman",	2,	22, 0,
L"pakistan", 2, 22, 0,
L"panama", 1, 12, 0,
L"peoples r china",	2,	22, 0,
L"peru",	1,	12, 0,
L"philippines",	2,	23, 1,
L"poland",	3,	33, 0,
L"portugal",	3,	31, 0,
L"qatar", 2, 22, 0,
L"rep of georgia", 2, 22, 0,
L"romania", 3, 33, 0,
L"russia",	3,	33, 0,
L"saudi arabia", 2, 22, 0,
L"scotland",	3,	31, 1,
L"senegal", 5, 50, 0,
L"serbia",	3,	33, 0,
L"serbia monteneg", 99, 99, 99,
L"sierra leone", 5, 50, 0,
L"singapore",	2,	23, 0,
L"slovakia",	3,	33, 0,
L"slovenia", 3, 33, 0,
L"solomon islands", 4, 40, 1,
L"south africa",	5,	50, 0,
L"south korea",	2,	21, 0,
L"spain",	3,	31, 0,
L"sri lanka", 2, 23, 1,
L"sweden",	3,	32, 0,
L"switzerland",	3,	31, 0,
L"syria", 2, 22, 0,
L"taiwan",	2,	23, 1,
L"tanzania", 5, 50, 0,
L"thailand",	2,	23, 0,
L"trinid & tobago",	1,	12, 1,
L"trinid and tobago",	1,	12, 1,
L"tunisia",	5,	50, 0,
L"turkey",	2,	22, 0,
L"u arab emirates",	2,	22, 0,
L"uganda", 5, 50, 0,
L"ukraine",	3,	33, 0,
L"uruguay", 1, 12, 0,
L"usa",	1,	11, 0,
L"ussr", 2, 22, 0,
L"venezuela", 1, 12, 0,
L"vietnam", 2, 23, 0,
L"wales",	3,	31, 1,
L"yugoslavia",	3,	33, 0,
L"zimbabwe", 5, 50, 0,
};

// Country table for Scopus data, last update 2017/02/26
// codes for the following table are defined by Mei Ho
// they are: area, subarea, island
#define NLOCS3 147
struct LOCATION location3[NLOCS] = { 
L"[-Vague]", 99, 99, 99,				// VAGUE means cannot find correspondence between addresses and authors
L"[Unknown country]", 99, 99, 99,	// unknown country name in the address
L"afghanistan",	2,	22, 0,
L"albania", 99, 99, 99,
L"algeria", 5, 50, 0,
L"angola",	5,	50, 0,
L"argentina", 1, 12, 0,
L"armenia", 2, 22, 0,
L"australia",	4,	40, 1,
L"austria",	3,	31, 0,
L"bahrain", 2, 22, 1,
L"bangladesh", 2, 22, 0,
L"belarus",	3,	33, 0,
L"belgium",	3,	31, 0,
L"bolivia", 1, 12, 0,
L"bosnia & herceg", 99, 99, 99,
L"botswana", 5, 50, 0,
L"brazil",	1,	12, 0,
L"brunei",	2,	23, 0,
L"bulgaria", 3, 33, 0,
L"burkina faso", 5,	50, 0,
L"byelarus", 3, 33, 0,
L"cambodia", 2, 23, 0,
L"cameroon", 5, 50, 0,
L"canada",	1,	11, 0,
L"chile",	1,	12, 0,
L"china",	2,	22, 0,
L"colombia", 1, 12, 0,
L"congo",	5,	50, 0,
L"costa rica", 1, 12, 0,
L"cote ivoire", 99, 99, 99,
L"croatia",	3,	33, 1,
L"cuba", 1, 12, 1,
L"cyprus", 3, 33, 1,
L"czech republic",	3,	33, 0,
L"denmark",	3,	32, 0,
L"dominican rep", 1, 12, 1,
L"ecuador", 1, 12, 0,
L"egypt", 5, 50, 0,
L"el salvador", 1, 12, 0,
L"estonia", 3, 33, 0,
L"ethiopia", 5, 50, 0,
L"fiji", 4, 40, 1,
L"finland",	3,	32, 0,
L"france",	3,	31, 0,
L"gambia", 5, 50, 0,
L"ger dem rep", 99, 99, 99,
L"germany",	3,	31, 0,
L"ghana", 5, 50, 0,
L"greece",	3,	31, 0,
L"grenada",	1,	12, 1,
L"guatemala", 1, 12, 0,
L"honduras", 1, 12, 0,
L"hong kong",	2,	23, 0,
L"hungary", 3, 33, 0,
L"iceland",	3,	32, 1,
L"india",	2,	22, 0,
L"indonesia",	2,	23, 1,
L"iran",	2,	22, 0,
L"iraq",	2,	22, 0,
L"ireland", 3, 31, 1,
L"israel",	2,	22, 0,
L"italy",	3,	31, 0,
L"jamaica", 1, 12, 1,
L"japan",	2,	21, 1,
L"jordan", 2, 22, 0,
L"kazakhstan", 2, 22, 0,
L"kenya", 5, 50, 0,
L"kuwait", 2, 22, 0,
L"kyrgyzstan", 2, 22, 0,
L"laos", 2, 23, 0,
L"latvia", 3, 33, 0,
L"lebanon", 2, 22, 0,
L"libya", 5, 50, 0,
L"liechtenstein", 3, 31, 0,
L"lithuania", 3, 33, 0,
L"luxembourg", 3, 31, 0,
L"macedonia", 99, 99, 99,
L"madagascar", 5, 50, 1,
L"malawi", 5, 50, 1,
L"malaysia",	2,	23, 0,
L"mali", 99, 99, 99,
L"mauritania", 5, 50, 0,
L"mauritius", 5, 50, 1,
L"mexico",	1,	11, 0,
L"moldova", 3, 33, 0,
L"montenegro", 99, 99, 99,
L"morocco", 5, 50, 0,
L"myanmar", 2, 23, 0,
L"namibia", 5, 50, 0,
L"nepal", 2, 22, 0,
L"neth antilles", 1, 12, 1,			// 荷屬安地列斯
L"netherlands",	3,	31, 0,
L"netherlands antilles", 1, 12, 1,	// 荷屬安地列斯
L"new zealand",	4,	40, 1,
L"nigeria", 5, 50, 0,
L"north ireland", 3, 31, 1,
L"norway",	3,	32, 0,
L"oman",	2,	22, 0,
L"pakistan", 2, 22, 0,
L"panama", 1, 12, 0,
L"peru",	1,	12, 0,
L"philippines",	2,	23, 1,
L"poland",	3,	33, 0,
L"portugal",	3,	31, 0,
L"qatar", 2, 22, 0,
L"rep of georgia", 2, 22, 0,
L"romania", 3, 33, 0,
L"russia",	3,	33, 0,
L"saudi arabia", 2, 22, 0,
L"scotland",	3,	31, 1,
L"senegal", 5, 50, 0,
L"serbia",	3,	33, 0,
L"serbia monteneg", 99, 99, 99,
L"sierra leone", 5, 50, 0,
L"singapore",	2,	23, 0,
L"slovakia",	3,	33, 0,
L"slovenia", 3, 33, 0,
L"solomon islands", 4, 40, 1,
L"south africa",	5,	50, 0,
L"south korea",	2,	21, 0,
L"spain",	3,	31, 0,
L"sri lanka", 2, 23, 1,
L"sweden",	3,	32, 0,
L"switzerland",	3,	31, 0,
L"syria", 2, 22, 0,
L"taiwan",	2,	23, 1,
L"tanzania", 5, 50, 0,
L"thailand",	2,	23, 0,
L"trinid & tobago",	1,	12, 1,
L"trinid and tobago",	1,	12, 1,
L"tunisia",	5,	50, 0,
L"turkey",	2,	22, 0,
L"u arab emirates",	2,	22, 0,
L"uganda", 5, 50, 0,
L"ukraine",	3,	33, 0,
L"united kingdom",	3,	31, 1,
L"united states",	1,	11, 0,
L"uruguay", 1, 12, 0,
L"ussr", 2, 22, 0,
L"venezuela", 1, 12, 0,
L"vietnam", 2, 23, 0,
L"wales",	3,	31, 1,
L"yugoslavia",	3,	33, 0,
L"zimbabwe", 5, 50, 0,
};

// Country table for patent data, added 2013/07/19
// codes for the following table are defined by Mei Ho 
// they are: area, subarea, island 
#define NLOCS2 121
struct LOCATION location2[NLOCS2] = { 
L"-Vague", 99, 99, 99,
L"AE",	2,	22, 0,
L"AM", 99, 99, 99,
L"AO",	5,	50, 0,
L"AR", 1, 12, 0,
L"AT",	3,	31, 0,
L"AU",	4,	40, 1,
L"BD", 2, 22, 0,
L"BE",	3,	31, 0,
L"BG", 3, 33, 0,
L"BH", 99, 99, 99,
L"BO", 1, 12, 0,
L"BR",	1,	12, 0,
L"BW", 5, 50, 0,
L"CA",	1,	11, 0,
L"CD",	5,	50, 0,
L"CH",	3,	31, 0,
L"CL",	1,	12, 0,
L"CM", 5, 50, 0,
L"CN",	2,	22, 0,
L"CO", 1, 12, 0,
L"CR", 1, 12, 0,
L"CU", 1, 12, 1,
L"CY", 3, 33, 1,
L"CZ",	3,	33, 0,
L"DE",	3,	31, 0,
L"DK",	3,	32, 0,
L"DO", 1, 12, 1,
L"DZ", 5, 50, 0,
L"EC", 1, 12, 0,
L"EE", 3, 33, 0,
L"EG", 5, 50, 0,
L"ES",	3,	31, 0,
L"ET", 5, 50, 0,
L"FI",	3,	32, 0,
L"FJ", 4, 40, 1,
L"FR",	3,	31, 0,
L"GB",	3,	31, 1,
L"GE", 2, 22, 0,
L"GH", 5, 50, 0,
L"GM", 5, 50, 0,
L"GR",	3,	31, 0,
L"GT", 1, 12, 0,
L"HK",	2,	23, 0,
L"HR",	3,	33, 1,
L"HU", 3, 33, 0,
L"ID",	2,	23, 1,
L"IE", 3, 31, 1,
L"IL",	2,	22, 0,
L"IN",	2,	22, 0,
L"IR",	2,	22, 0,
L"IS",	3,	32, 1,
L"IT",	3,	31, 0,
L"JM", 1, 12, 1,
L"JO", 2, 22, 0,
L"JP",	2,	21, 1,
L"KE", 5, 50, 0,
L"KG", 2, 22, 0,
L"KH", 2, 23, 0,
L"KR",	2,	21, 0,
L"KW", 2, 22, 0,
L"KZ", 2,	22, 0,
L"LA", 2, 23, 0,
L"LB", 2, 22, 0,
L"LK", 2, 23, 1,
L"LT", 3, 33, 0,
L"LU", 3, 31, 0,
L"LV", 3, 33, 0,
L"LY", 5, 50, 0,
L"MA", 5, 50, 0,
L"MD", 3, 33, 0,
L"MG", 5, 50, 1,
L"MM", 2, 23, 0,
L"MR", 5, 50, 0,
L"MU", 5, 50, 1,
L"MW", 5, 50, 0,
L"MX",	1,	11, 0,
L"MY",	2,	23, 0,
L"NA", 5, 50, 0,
L"NE", 5, 50, 0,
L"NF", 3, 31, 1,
L"NG", 5, 50, 0,
L"NL",	3,	31, 0,
L"NO",	3,	32, 0,
L"NP", 2, 22, 0,
L"NZ",	4,	40, 1,
L"OM",	2,	22, 0,
L"PE",	1,	12, 0,
L"PH",	2,	23, 1,
L"PK", 2, 22, 0,
L"PO",	3,	33, 0,
L"PT",	3,	31, 0,
L"QA", 2, 22, 0,
L"RO", 3, 33, 0,
L"RU",	3,	33, 0,
L"SA", 2, 22, 0,
L"SB", 4, 40, 1,
L"SE",	3,	32, 0,
L"SG",	2,	23, 0,
L"SI", 3, 33, 0,
L"SK",	3,	33, 0,
L"SL", 5, 50, 0,
L"SN", 5, 50, 0,
L"SU", 2, 22, 0,
L"SV", 1, 12, 0,
L"SY", 2, 22, 0,
L"TH",	2,	23, 0,
L"TN",	5,	50, 0,
L"TR",	2,	22, 0,
L"TW",	2,	23, 1,
L"TZ", 5, 50, 0,
L"UA",	3,	33, 0,
L"UG", 5, 50, 0,
L"US",	1,	11, 0,
L"UY", 1, 12, 0,
L"VE", 1, 12, 0,
L"VN", 2, 23, 1,
L"YU",	3,	33, 0,
L"ZA",	5,	50, 0,
L"ZW", 5, 50, 0,
L"[unknown country]", 99, 99, 99,
};

#define N_USSTATES 60
struct USSTATES usstates[N_USSTATES] = {	// in the order of abbreviation
6, L"alaska",				L"ak",
7, L"alabama",				L"al",
8, L"arkansas",				L"ar",
14, L"american samoa",		L"as",
7, L"arizona",				L"az",
10, L"california",			L"ca",
8, L"colorado",				L"co",
11, L"connecticut",			L"ct",
20, L"district of columbia",	L"dc",
8, L"delaware",				L"de",
7, L"florida",				L"fl",
29, L"federated states of micronesia",	L"fm",
7, L"georgia",				L"ga",
4, L"guam",					L"gu",
6, L"hawaii",				L"hi",
4, L"iowa",					L"ia",
5, L"idaho",					L"id",
8, L"illinois",				L"il",
7, L"indiana",				L"in",
6, L"kansas",				L"ks",
8, L"kentucky",				L"ky",
9, L"louisiana",			L"la",
13, L"massachusetts",		L"ma",
8, L"maryland",				L"md",
5, L"maine",				L"me",
16, L"marshall islands",	L"mh",
8, L"michigan",				L"mi",
9, L"minnesota",			L"mn",
8, L"missouri",				L"mo",
24, L"northern mariana islands",	L"mp",
11, L"mississippi",			L"ms",
7, L"montana",				L"mt",
14, L"north carolina",		L"nc",
12, L"north dakota",		L"nd",
8, L"nebraska",				L"ne",
13, L"new hampshire",		L"nh",
10, L"new jersey",			L"nj",
10, L"new mexico",			L"nm",
6, L"nevada",				L"nv",
8, L"new york",				L"ny",
4, L"ohio",					L"oh",
8, L"oklahoma",				L"ok",
6, L"oregon",				L"or",
12, L"pennsylvania",		L"pa",
11, L"puerto rico",			L"pr",
5, L"palau",				L"pw",
12, L"rhode island",		L"ri",
14, L"south carolina",		L"sc",
12, L"south dakota",		L"sd",
9, L"tennessee",			L"tn",
5, L"texas",				L"tx",
4, L"utah",					L"ut",
8, L"virginia",				L"va",
14, L"virgin islands",		L"vi",
7, L"vermont",				L"vt",
10, L"washington",			L"wa",
9, L"wisconsin",			L"wi",
13, L"west virginia",		L"wv",
7, L"wyoming",				L"wy", 
9, L"[unknow state]",		L"~"
};

// Copyright 2010 The Go Authors.  All rights reserved.
// Use of this source code is governed by a BSD-style
// license that can be found in the LICENSE file.

// Example-based syntax error messages.
// See bisonerrors, Makefile, go.y.

static struct {
	int yystate;
	int yychar;
	char *msg;
} yymsg[] = {
	// Each line of the form % token list
	// is converted by bisonerrors into the yystate and yychar caused
	// by that token list.

	{225, ',',
	"unexpected comma during import block"},

	{32, ';',
	"missing import path; require quoted string"},

	{387, ';',
	"missing { after if clause"},

	{408, ';',
	"missing { after switch clause"},

	{244, ';',
	"missing { after for clause"},

	{487, LBODY,
	"missing { after for clause"},

	{22, '{',
	"unexpected semicolon or newline before {"},

	{148, ';',
	"unexpected semicolon or newline in type declaration"},

	{37, '}',
	"unexpected } in channel type"},
	
	{37, ')',
	"unexpected ) in channel type"},
	
	{37, ',',
	"unexpected comma in channel type"},

	{448, LELSE,
	"unexpected semicolon or newline before else"},

	{264, ',',
	"name list not allowed in interface type"},

	{244, LVAR,
	"var declaration not allowed in for initializer"},

	{66, '{',
	"unexpected { at end of statement"},

	{386, '{',
	"unexpected { at end of statement"},
	
	{129, ';',
	"argument to go/defer must be function call"},
	
	{435, ';',
	"need trailing comma before newline in composite literal"},
	
	{446, ';',
	"need trailing comma before newline in composite literal"},
	
	{115, LNAME,
	"nested func not allowed"},

	{660, ';',
	"else must be followed by if or statement block"}
};

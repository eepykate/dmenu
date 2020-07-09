/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 1;                    /* -c option; centers dmenu on screen */
static int min_width = 500;                    /* minimum width when centered */
static int fuzzy = 1;                      /* -F  option; if 0, dmenu doesn't use fuzzy matching     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Fira Mono:pixelsize=14"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*                   fg         bg   */
	[SchemeNorm] = { "#bcc1d1", "#2f3945" },
	[SchemeSel] = { "#f3f6ff", "#485461" },
	[SchemeOut] =  { "#000000", "#00ffff" },
	[SchemeHp] =   { "#bbbbbb", "#333333" }
};

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 8;
static unsigned int lineheight = 40;         /* -h option; minimum height of a menu line     */

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

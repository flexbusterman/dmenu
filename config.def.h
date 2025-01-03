/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int fuzzy = 1;                      /* -F  option; if 0, dmenu doesn't use fuzzy matching     */
/* -fn option overrides fonts[0]; default X11 font or font set */

/* "Fira Mono Medium:size=11:antialias=true", */
/*"PxPlus IBM VGA 8x16:size=11.5:style=Regular:antialias=true", */

static const char *fonts[]          = { "Fira Mono Medium:size=12:antialias=true",
"emoji:size=12"
};

// static const char *fonts[]          = {
// 	"PxPlus IBM VGA 8x16:size=11.25:style=Regular:antialias=true",
// 	"emoji:size=12"
// };
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	// [SchemeNorm] = { "#f8f8f2", "#282a36" },
	[SchemeNorm] = { "#f8f8f2", "#000000" },
	[SchemeSel] = { "#f8f8f2", "#6272a4" },
	[SchemeOut] = { "#000000", "#00ffff" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;
/* -h option; minimum height of a menu line */
static unsigned int lineheight = 12;
static unsigned int min_lineheight = 12;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

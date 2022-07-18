/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 0;
static const char *fonts[] = {"UbuntuMono Nerd Font:size=11"};
static const char *prompt = NULL;
static const char *colors[SchemeLast][2] = {
    /*                 fg         bg    */
    [SchemeNorm] = {"#d8dee9", "#2e3440"},
    [SchemeSel] = {"#e5e9f0", "#5e81ac"},
    [SchemeOut] = {"#000000", "#00ffff"},
};
static unsigned int lines = 0;
static const char worddelimiters[] = " ";

static unsigned int lineheight = 24;
static unsigned int min_lineheight = 8;

static const char rosewater[] = "#f5e0dc";
static const char flamingo[]  = "#f2cdcd";
static const char pink[]      = "#f5c2e7";
static const char mauve[]     = "#cba6f7";
static const char red[]       = "#f38ba8";
static const char maroon[]    = "#eba0ac";
static const char peach[]     = "#fab387";
static const char yellow[]    = "#f9e2af";
static const char green[]     = "#a6e3a1";
static const char teal[]      = "#94e2d5";
static const char sky[]       = "#89dceb";
static const char sapphire[]  = "#74c7ec";
static const char blue[]      = "#89b4fa";
static const char lavender[]  = "#b4befe";
static const char white[]     = "#cdd6f4";
static const char gray[]      = "#6c7086";
static const char black[]     = "#1e1e2e";

static const char *colors[][3] = {
	//               fg         bg         border
  [SchemeNorm] = { gray,   black, green },
  [SchemeSel]  = { gray,   black, sky  },
  [SchemeTag]  = { gray,   black, NULL }, /* Inactive tag. */
  [SchemeTag1] = { pink,   black, NULL },
  [SchemeTag2] = { mauve,  black, NULL },
  [SchemeTag3] = { red,    black, NULL },
  [SchemeTag4] = { maroon, black, NULL },
  [SchemeTag5] = { peach,  black, NULL },
  [SchemeTag6] = { yellow, black, NULL },
  [SchemeTag7] = { green,  black, NULL },
  /* And so forth... */
};

static const char *tagsel[][2] = {
/*  fg      bg     */
	{ pink,   black },
	{ mauve,  black },
	{ red,    black },
	{ maroon, black },
	{ peach,  black },
  { yellow, black },
  { green,  black },
};

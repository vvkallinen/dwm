static const char norm_fg[] = "#b2bbbb";
static const char norm_bg[] = "#121212";
static const char norm_border[] = "#7c8282";

static const char sel_fg[] = "#b2bbbb";
static const char sel_bg[] = "#566B54";
static const char sel_border[] = "#b2bbbb";

static const char urg_fg[] = "#b2bbbb";
static const char urg_bg[] = "#3C4B44";
static const char urg_border[] = "#3C4B44";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};

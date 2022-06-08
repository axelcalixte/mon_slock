/* user and group to drop privileges to */
static const char *user = "nobody";
static const char *group = "nogroup";

static const char *colorname[NUMCOLS] = {
    [INIT] = "#191724",   /* after initialization */
    [INPUT] = "#31748f",  /* during input */
    [FAILED] = "#eb6f92", /* wrong password */
    [CAPS] = "#f6c177",   /* CapsLock on */
};

/*
 * Xresources preferences to load at startup
 */
ResourcePref resources[] = {
    {"color0", STRING, &colorname[INIT]},
    {"color4", STRING, &colorname[INPUT]},
    {"color1", STRING, &colorname[FAILED]},
    {"color3", STRING, &colorname[CAPS]},
};

/* lock screen opacity */
static const float alpha = 1.0;
// static const float alpha = 0.7;

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* time in seconds before the monitor shuts down */
static const int monitortime = 5;

/* time in seconds to cancel lock with mouse movement */
static const int timetocancel = 3;

/* default message */
static const char *message = "Enter password to unlock";

/* text color */
static const char *text_color = "#DCD7BA";

/* text size (must be a valid size) */
static const char *font_name =
    "-monotype-noto sans-medium-r-normal--0-0-0-0-p-0-iso10646-1";

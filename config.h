/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nogroup";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#31748f",   /* during input */
	[FAILED] = "#eb6f92",   /* wrong password */
	[CAPS] = "#f6c177",         /* CapsLock on */
};

/* lock screen opacity */
static const float alpha = 1;

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* time in seconds to cancel lock with mouse movement */
static const int timetocancel = 3;

/* time in seconds before the monitor shuts down */
static const int monitortime = 5;

/* default message */
static const char * message = "Enter password to unlock";

/* text color */
static const char * text_color = "#e0def4";

/* text size (must be a valid size) */
static const char * font_name = "6x13";

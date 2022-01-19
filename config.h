/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nogroup";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#1F1F28",     /* after initialization */
	[INPUT] =  "#223249",   /* during input */
	[FAILED] = "#E46876",   /* wrong password */
	[CAPS] = "#E6C384",         /* CapsLock on */
};

/* lock screen opacity */
static const float alpha = 1.0;

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* time in seconds to cancel lock with mouse movement */
static const int timetocancel = 3;

/* time in seconds before the monitor shuts down */
static const int monitortime = 5;

/* default message */
static const char * message = "Enter password to unlock";

/* text color */
static const char * text_color = "#DCD7BA";

/* text size (must be a valid size) */
static const char * font_name = "6x13";

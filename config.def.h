/* See LICENSE file for copyright and license details. */

/* interval between updates (in ms) */
static const int interval = 1000;

/* text to show if no value can be retrieved */
static const char unknown_str[] = "n/a";

/* maximum output string length */
#define MAXLEN 2048

/* statusbar
- battery_perc (battery percentage) [argument: battery name]
- battery_power (battery power usage) [argument: battery name]
- battery_state (battery charging state) [argument: battery name]
- cpu_perc (cpu usage in percent) [argument: NULL]
- cpu_freq (cpu frequency) [argument: NULL]
- datetime (date and time) [argument: format]
- disk_free (free disk space in GB) [argument: mountpoint]
- disk_perc (disk usage in percent) [argument: mountpoint]
- disk_total (total disk space in GB) [argument: mountpoint]
- disk_used (used disk space in GB) [argument: mountpoint]
- entropy (available entropy) [argument: NULL]
- gid (gid of current user) [argument: NULL]
- hostname [argument: NULL]
- ip (ip address) [argument: interface]
- kernel_release (uname -r) [argument: NULL]
- keyboard_indicators (caps/num lock indicators) [agrument: NULL]
- load_avg (load average) [argument: NULL]
- num_files (number of files in a directory - hint: maildir) [argument: path]
- ram_free (free ram in GB) [argument: NULL]
- ram_perc (ram usage in percent) [argument: NULL]
- ram_total (total ram in GB) [argument: NULL]
- ram_used (used ram in GB) [argument: NULL]
- run_command (run custom shell command) [argument: command]
- swap_free (free swap in GB) [argument: NULL]
- swap_perc (swap usage in percent) [argument: NULL]
- swap_total (total swap in GB) [argument: NULL]
- swap_used (used swap in GB) [argument: NULL]
- temp (temperature in celsius) [argument: temperature file]
- uid (uid of current user) [argument: NULL]
- uptime (uptime) [argument: NULL]
- username (username of current user) [argument: NULL]
- vol_perc (oss/alsa volume status (see README)) [argument: /dev/mixer]
- wifi_perc (wifi signal in percent) [argument: wifi card interface name]
- wifi_essid (wifi essid) [argument: wifi card interface name] */
static const struct arg args[] = {
	/* function format          argument */
	{ cpu_perc, "[CPU %3s%%] ", NULL    },
	{ ram_perc, "[RAM %2s%%] ", NULL    },
	{ datetime, "[ %s ]",       "%F %T" },
};

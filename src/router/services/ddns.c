
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>
#include <unistd.h>
#include <errno.h>
#include <sys/ioctl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <time.h>
#include <sys/time.h>
#include <syslog.h>
#include <sys/wait.h>

#include <bcmnvram.h>
#include <netconf.h>
#include <shutils.h>
#include <utils.h>
#include <rc.h>

/* inadyn scripts by lawnmowerguy1 */

char service[32];
char _username[] = "ddns_username_X";
char _passwd[] = "ddns_passwd_X";
char _hostname[] = "ddns_hostname_X";
char _dyndnstype[] = "ddns_dyndnstype_X";
char _wildcard[] = "ddns_wildcard_X";

int
init_ddns (void)
{
  int flag = 0;

  if (nvram_match ("ddns_enable", "0"))
    return -1;

  else if (nvram_match ("ddns_enable", "1"))
    {
      if (nvram_match ("ddns_dyndnstype", "2"))
	strcpy (service, "statdns@dyndns.org");
      else if (nvram_match ("ddns_dyndnstype", "3"))
	strcpy (service, "custom@dyndns.org");
      else
	strcpy (service, "dyndns@dyndns.org");
      flag = 1;
    }
  else if (nvram_match ("ddns_enable", "2"))
    {
      strcpy (service, "default@freedns.afraid.org");
      flag = 2;
    }
  else if (nvram_match ("ddns_enable", "3"))
    {
      strcpy (service, "default@zoneedit.com");
      flag = 3;
    }
  else if (nvram_match ("ddns_enable", "4"))
    {
      strcpy (service, "default@no-ip.com");
      flag = 4;
    }
  else if (nvram_match ("ddns_enable", "5"))
    {
      strcpy (service, nvram_safe_get ("ddns_custom_5"));
      flag = 5;
    }

  if (flag == 1)
    {
      snprintf (_username, sizeof (_username), "%s", "ddns_username");
      snprintf (_passwd, sizeof (_passwd), "%s", "ddns_passwd");
      snprintf (_hostname, sizeof (_hostname), "%s", "ddns_hostname");
      snprintf (_dyndnstype, sizeof (_dyndnstype), "%s", "ddns_dyndnstype");
      snprintf (_wildcard, sizeof (_wildcard), "%s", "ddns_wildcard");
    }
  else if (flag == 2)
    {
      snprintf (_username, sizeof (_username), "%s", "ddns_username_2");
      snprintf (_passwd, sizeof (_passwd), "%s", "ddns_passwd_2");
      snprintf (_hostname, sizeof (_hostname), "%s", "ddns_hostname_2");
    }
  else if (flag == 3)
    {
      snprintf (_username, sizeof (_username), "%s", "ddns_username_3");
      snprintf (_passwd, sizeof (_passwd), "%s", "ddns_passwd_3");
      snprintf (_hostname, sizeof (_hostname), "%s", "ddns_hostname_3");
    }
  else if (flag == 4)
    {
      snprintf (_username, sizeof (_username), "%s", "ddns_username_4");
      snprintf (_passwd, sizeof (_passwd), "%s", "ddns_passwd_4");
      snprintf (_hostname, sizeof (_hostname), "%s", "ddns_hostname_4");
    }
  else if (flag == 5)
    {
      snprintf (_username, sizeof (_username), "%s", "ddns_username_5");
      snprintf (_passwd, sizeof (_passwd), "%s", "ddns_passwd_5");
      snprintf (_hostname, sizeof (_hostname), "%s", "ddns_hostname_5");
    }

  return 0;
}

int
start_ddns (void)
{
  int ret;
  FILE *fp;

  /* Get correct username, password and hostname */
  if (init_ddns () < 0)
    return -1;

  /* We don't want to update, if user don't input below field */
  if (nvram_match (_username, "") ||
      nvram_match (_passwd, "") || nvram_match (_hostname, ""))
    return -1;

  /* Generate ddns configuration file */
  if ((fp = fopen ("/tmp/inadyn.conf", "w")))
    {
      fprintf (fp, "--background");
      fprintf (fp, " --dyndns_system %s", service);	//service
      fprintf (fp, " -u %s", nvram_safe_get (_username));	//username/email
      fprintf (fp, " -p %s", nvram_safe_get (_passwd));	// password
      fprintf (fp, " -a %s", nvram_safe_get (_hostname));	// alias/hostname
      if (nvram_match ("ddns_wildcard", "1")
	  && nvram_match ("ddns_enable", "1"))
	fprintf (fp, ",wildcard=ON");
      fprintf (fp, " --update_period_sec %s", "3600");	// check ip every hour
      fprintf (fp, " --forced_update_period %s", "2419200");	//force update after 28days
      fprintf (fp, " --log_file %s", "/tmp/ddns.log");	//log to file
      if (nvram_invmatch ("ddns_conf", ""))
	fprintf (fp, "%s", nvram_safe_get ("ddns_conf"));
      fprintf (fp, "\n"); 
      fclose (fp);
    }
  else
    {
      perror ("/tmp/inadyn.conf");
      return -1;
    }

//  ret = eval ("inadyn", "--input_file", "/tmp/inadyn.conf");

  cprintf ("done\n");

  return ret;
}

int
stop_ddns (void)
{
  int ret;

  ret = eval ("killall", "inadyn");

  cprintf ("done\n");

  return ret;
}



int
ddns_success_main (int argc, char *argv[])
{
  char buf[80];

  init_ddns ();

  snprintf (buf, sizeof (buf), "%ld,%s", time (NULL), argv[1]);

  nvram_set ("ddns_status", "1");
  nvram_set ("ddns_enable_buf", nvram_safe_get ("ddns_enable"));
  nvram_set ("ddns_username_buf", nvram_safe_get (_username));
  nvram_set ("ddns_passwd_buf", nvram_safe_get (_passwd));
  nvram_set ("ddns_hostname_buf", nvram_safe_get (_hostname));
  nvram_set ("ddns_dyndnstype_buf", nvram_safe_get (_dyndnstype));
  nvram_set ("ddns_wildcard_buf", nvram_safe_get (_wildcard));
  nvram_set ("ddns_change", "");

  nvram_commit ();

  cprintf ("done\n");

  return 0;
}

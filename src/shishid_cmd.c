/*
  File autogenerated by gengetopt version 2.22.1
  generated with the following command:
  gengetopt --no-handle-help --no-handle-error --no-handle-version --input shishid.ggo --file-name shishid_cmd 

  The developers of gengetopt consider the fixed text that goes in all
  gengetopt output files to be in the public domain:
  we make no copyright claims on it.
*/

/* If we use autoconf.  */
#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "getopt.h"

#include "shishid_cmd.h"

const char *gengetopt_args_info_purpose = "Shishi Key Distribution Center server.";

const char *gengetopt_args_info_usage = "Usage: shishid [OPTIONS]...";

const char *gengetopt_args_info_description = "";

const char *gengetopt_args_info_help[] = {
  "  -h, --help                    Print help and exit",
  "  -V, --version                 Print version and exit",
  "\nCommands:",
  "  -l, --listen=[FAMILY:]ADDR:PORT/TYPE\n                                Sockets to listen for queries on.  Family is \n                                  `IPv4' or `IPv6', if absent the family is \n                                  decided by gethostbyname(ADDR). An address of \n                                  `*' indicates all addresses on the local \n                                  host. The default is `IPv4:*:kerberos/udp, \n                                  IPv4:*:kerberos/tcp, IPv6:*:kerberos/udp, \n                                  IPv6:*:kerberos/tcp'.",
  "  -u, --setuid=NAME             After binding socket, set user identity.",
  "\nTLS settings:",
  "      --x509cafile=FILE         X.509 certificate authorities used to verify \n                                  client certificates, in PEM format.",
  "      --x509certfile=FILE       X.509 server certificate, in PEM format.",
  "      --x509crlfile=FILE        X.509 certificate revocation list to check for \n                                  revoked client certificates, in PEM format.",
  "      --x509keyfile=FILE        X.509 server certificate key, in PEM format.",
  "      --resume-limit=SHORT      Keep track of up to this many TLS sessions for \n                                  resume purposes (0 to disable TLS resume).  \n                                  (default=`50')",
  "\nOther options:",
  "  -c, --configuration-file=FILE Use specified configuration file.",
  "  -v, --verbose                 Produce verbose output.\n                                  Use multiple times to increase amount of \n                                  information.",
  "  -q, --quiet                   Don't produce any diagnostic output.\n                                    (default=off)",
    0
};

typedef enum {ARG_NO
  , ARG_FLAG
  , ARG_STRING
  , ARG_SHORT
} cmdline_parser_arg_type;

static
void clear_given (struct gengetopt_args_info *args_info);
static
void clear_args (struct gengetopt_args_info *args_info);

static int
cmdline_parser_internal (int argc, char * const *argv, struct gengetopt_args_info *args_info,
                        struct cmdline_parser_params *params, const char *additional_error);

static int
cmdline_parser_required2 (struct gengetopt_args_info *args_info, const char *prog_name, const char *additional_error);

static char *
gengetopt_strdup (const char *s);

static
void clear_given (struct gengetopt_args_info *args_info)
{
  args_info->help_given = 0 ;
  args_info->version_given = 0 ;
  args_info->listen_given = 0 ;
  args_info->setuid_given = 0 ;
  args_info->x509cafile_given = 0 ;
  args_info->x509certfile_given = 0 ;
  args_info->x509crlfile_given = 0 ;
  args_info->x509keyfile_given = 0 ;
  args_info->resume_limit_given = 0 ;
  args_info->configuration_file_given = 0 ;
  args_info->verbose_given = 0 ;
  args_info->quiet_given = 0 ;
}

static
void clear_args (struct gengetopt_args_info *args_info)
{
  args_info->listen_arg = NULL;
  args_info->listen_orig = NULL;
  args_info->setuid_arg = NULL;
  args_info->setuid_orig = NULL;
  args_info->x509cafile_arg = NULL;
  args_info->x509cafile_orig = NULL;
  args_info->x509certfile_arg = NULL;
  args_info->x509certfile_orig = NULL;
  args_info->x509crlfile_arg = NULL;
  args_info->x509crlfile_orig = NULL;
  args_info->x509keyfile_arg = NULL;
  args_info->x509keyfile_orig = NULL;
  args_info->resume_limit_arg = 50;
  args_info->resume_limit_orig = NULL;
  args_info->configuration_file_arg = NULL;
  args_info->configuration_file_orig = NULL;
  args_info->quiet_flag = 0;
  
}

static
void init_args_info(struct gengetopt_args_info *args_info)
{


  args_info->help_help = gengetopt_args_info_help[0] ;
  args_info->version_help = gengetopt_args_info_help[1] ;
  args_info->listen_help = gengetopt_args_info_help[3] ;
  args_info->setuid_help = gengetopt_args_info_help[4] ;
  args_info->x509cafile_help = gengetopt_args_info_help[6] ;
  args_info->x509certfile_help = gengetopt_args_info_help[7] ;
  args_info->x509crlfile_help = gengetopt_args_info_help[8] ;
  args_info->x509keyfile_help = gengetopt_args_info_help[9] ;
  args_info->resume_limit_help = gengetopt_args_info_help[10] ;
  args_info->configuration_file_help = gengetopt_args_info_help[12] ;
  args_info->verbose_help = gengetopt_args_info_help[13] ;
  args_info->verbose_min = 0;
  args_info->verbose_max = 0;
  args_info->quiet_help = gengetopt_args_info_help[14] ;
  
}

void
cmdline_parser_print_version (void)
{
  printf ("%s %s\n", CMDLINE_PARSER_PACKAGE, CMDLINE_PARSER_VERSION);
}

static void print_help_common(void) {
  cmdline_parser_print_version ();

  if (strlen(gengetopt_args_info_purpose) > 0)
    printf("\n%s\n", gengetopt_args_info_purpose);

  if (strlen(gengetopt_args_info_usage) > 0)
    printf("\n%s\n", gengetopt_args_info_usage);

  printf("\n");

  if (strlen(gengetopt_args_info_description) > 0)
    printf("%s\n\n", gengetopt_args_info_description);
}

void
cmdline_parser_print_help (void)
{
  int i = 0;
  print_help_common();
  while (gengetopt_args_info_help[i])
    printf("%s\n", gengetopt_args_info_help[i++]);
}

void
cmdline_parser_init (struct gengetopt_args_info *args_info)
{
  clear_given (args_info);
  clear_args (args_info);
  init_args_info (args_info);
}

void
cmdline_parser_params_init(struct cmdline_parser_params *params)
{
  if (params)
    { 
      params->override = 0;
      params->initialize = 1;
      params->check_required = 1;
      params->check_ambiguity = 0;
      params->print_errors = 1;
    }
}

struct cmdline_parser_params *
cmdline_parser_params_create(void)
{
  struct cmdline_parser_params *params = 
    (struct cmdline_parser_params *)malloc(sizeof(struct cmdline_parser_params));
  cmdline_parser_params_init(params);  
  return params;
}

static void
free_string_field (char **s)
{
  if (*s)
    {
      free (*s);
      *s = 0;
    }
}


static void
cmdline_parser_release (struct gengetopt_args_info *args_info)
{

  free_string_field (&(args_info->listen_arg));
  free_string_field (&(args_info->listen_orig));
  free_string_field (&(args_info->setuid_arg));
  free_string_field (&(args_info->setuid_orig));
  free_string_field (&(args_info->x509cafile_arg));
  free_string_field (&(args_info->x509cafile_orig));
  free_string_field (&(args_info->x509certfile_arg));
  free_string_field (&(args_info->x509certfile_orig));
  free_string_field (&(args_info->x509crlfile_arg));
  free_string_field (&(args_info->x509crlfile_orig));
  free_string_field (&(args_info->x509keyfile_arg));
  free_string_field (&(args_info->x509keyfile_orig));
  free_string_field (&(args_info->resume_limit_orig));
  free_string_field (&(args_info->configuration_file_arg));
  free_string_field (&(args_info->configuration_file_orig));
  
  

  clear_given (args_info);
}


static void
write_into_file(FILE *outfile, const char *opt, const char *arg, char *values[])
{
  if (arg) {
    fprintf(outfile, "%s=\"%s\"\n", opt, arg);
  } else {
    fprintf(outfile, "%s\n", opt);
  }
}

static void
write_multiple_into_file(FILE *outfile, int len, const char *opt, char **arg, char *values[])
{
  int i;
  
  for (i = 0; i < len; ++i)
    write_into_file(outfile, opt, (arg ? arg[i] : 0), values);
}

int
cmdline_parser_dump(FILE *outfile, struct gengetopt_args_info *args_info)
{
  int i = 0;

  if (!outfile)
    {
      fprintf (stderr, "%s: cannot dump options to stream\n", CMDLINE_PARSER_PACKAGE);
      return EXIT_FAILURE;
    }

  if (args_info->help_given)
    write_into_file(outfile, "help", 0, 0 );
  if (args_info->version_given)
    write_into_file(outfile, "version", 0, 0 );
  if (args_info->listen_given)
    write_into_file(outfile, "listen", args_info->listen_orig, 0);
  if (args_info->setuid_given)
    write_into_file(outfile, "setuid", args_info->setuid_orig, 0);
  if (args_info->x509cafile_given)
    write_into_file(outfile, "x509cafile", args_info->x509cafile_orig, 0);
  if (args_info->x509certfile_given)
    write_into_file(outfile, "x509certfile", args_info->x509certfile_orig, 0);
  if (args_info->x509crlfile_given)
    write_into_file(outfile, "x509crlfile", args_info->x509crlfile_orig, 0);
  if (args_info->x509keyfile_given)
    write_into_file(outfile, "x509keyfile", args_info->x509keyfile_orig, 0);
  if (args_info->resume_limit_given)
    write_into_file(outfile, "resume-limit", args_info->resume_limit_orig, 0);
  if (args_info->configuration_file_given)
    write_into_file(outfile, "configuration-file", args_info->configuration_file_orig, 0);
  write_multiple_into_file(outfile, args_info->verbose_given, "verbose", 0, 0);
  if (args_info->quiet_given)
    write_into_file(outfile, "quiet", 0, 0 );
  

  i = EXIT_SUCCESS;
  return i;
}

int
cmdline_parser_file_save(const char *filename, struct gengetopt_args_info *args_info)
{
  FILE *outfile;
  int i = 0;

  outfile = fopen(filename, "w");

  if (!outfile)
    {
      fprintf (stderr, "%s: cannot open file for writing: %s\n", CMDLINE_PARSER_PACKAGE, filename);
      return EXIT_FAILURE;
    }

  i = cmdline_parser_dump(outfile, args_info);
  fclose (outfile);

  return i;
}

void
cmdline_parser_free (struct gengetopt_args_info *args_info)
{
  cmdline_parser_release (args_info);
}

/** @brief replacement of strdup, which is not standard */
char *
gengetopt_strdup (const char *s)
{
  char *result = NULL;
  if (!s)
    return result;

  result = (char*)malloc(strlen(s) + 1);
  if (result == (char*)0)
    return (char*)0;
  strcpy(result, s);
  return result;
}

static int
check_multiple_option_occurrences(const char *prog_name, unsigned int option_given, unsigned int min, unsigned int max, const char *option_desc);

int
check_multiple_option_occurrences(const char *prog_name, unsigned int option_given, unsigned int min, unsigned int max, const char *option_desc)
{
  int error = 0;

  if (option_given && (min > 0 || max > 0))
    {
      if (min > 0 && max > 0)
        {
          if (min == max)
            {
              /* specific occurrences */
              if (option_given != min)
                {
                  fprintf (stderr, "%s: %s option occurrences must be %d\n",
                    prog_name, option_desc, min);
                  error = 1;
                }
            }
          else if (option_given < min
              || option_given > max)
            {
              /* range occurrences */
              fprintf (stderr, "%s: %s option occurrences must be between %d and %d\n",
                prog_name, option_desc, min, max);
              error = 1;
            }
        }
      else if (min > 0)
        {
          /* at least check */
          if (option_given < min)
            {
              fprintf (stderr, "%s: %s option occurrences must be at least %d\n",
                prog_name, option_desc, min);
              error = 1;
            }
        }
      else if (max > 0)
        {
          /* at most check */
          if (option_given > max)
            {
              fprintf (stderr, "%s: %s option occurrences must be at most %d\n",
                prog_name, option_desc, max);
              error = 1;
            }
        }
    }
    
  return error;
}
int
cmdline_parser (int argc, char * const *argv, struct gengetopt_args_info *args_info)
{
  return cmdline_parser2 (argc, argv, args_info, 0, 1, 1);
}

int
cmdline_parser_ext (int argc, char * const *argv, struct gengetopt_args_info *args_info,
                   struct cmdline_parser_params *params)
{
  int result;
  result = cmdline_parser_internal (argc, argv, args_info, params, NULL);

  return result;
}

int
cmdline_parser2 (int argc, char * const *argv, struct gengetopt_args_info *args_info, int override, int initialize, int check_required)
{
  int result;
  struct cmdline_parser_params params;
  
  params.override = override;
  params.initialize = initialize;
  params.check_required = check_required;
  params.check_ambiguity = 0;
  params.print_errors = 1;

  result = cmdline_parser_internal (argc, argv, args_info, &params, NULL);

  return result;
}

int
cmdline_parser_required (struct gengetopt_args_info *args_info, const char *prog_name)
{
  int result = EXIT_SUCCESS;

  if (cmdline_parser_required2(args_info, prog_name, NULL) > 0)
    result = EXIT_FAILURE;

  return result;
}

int
cmdline_parser_required2 (struct gengetopt_args_info *args_info, const char *prog_name, const char *additional_error)
{
  int error = 0;

  /* checks for required options */
  if (check_multiple_option_occurrences(prog_name, args_info->verbose_given, args_info->verbose_min, args_info->verbose_max, "'--verbose' ('-v')"))
     error = 1;
  
  
  /* checks for dependences among options */

  return error;
}


static char *package_name = 0;

/**
 * @brief updates an option
 * @param field the generic pointer to the field to update
 * @param orig_field the pointer to the orig field
 * @param field_given the pointer to the number of occurrence of this option
 * @param prev_given the pointer to the number of occurrence already seen
 * @param value the argument for this option (if null no arg was specified)
 * @param possible_values the possible values for this option (if specified)
 * @param default_value the default value (in case the option only accepts fixed values)
 * @param arg_type the type of this option
 * @param check_ambiguity @see cmdline_parser_params.check_ambiguity
 * @param override @see cmdline_parser_params.override
 * @param no_free whether to free a possible previous value
 * @param multiple_option whether this is a multiple option
 * @param long_opt the corresponding long option
 * @param short_opt the corresponding short option (or '-' if none)
 * @param additional_error possible further error specification
 */
static
int update_arg(void *field, char **orig_field,
               unsigned int *field_given, unsigned int *prev_given, 
               char *value, char *possible_values[], const char *default_value,
               cmdline_parser_arg_type arg_type,
               int check_ambiguity, int override,
               int no_free, int multiple_option,
               const char *long_opt, char short_opt,
               const char *additional_error)
{
  char *stop_char = 0;
  const char *val = value;
  int found;
  char **string_field;

  stop_char = 0;
  found = 0;

  if (!multiple_option && prev_given && (*prev_given || (check_ambiguity && *field_given)))
    {
      if (short_opt != '-')
        fprintf (stderr, "%s: `--%s' (`-%c') option given more than once%s\n", 
               package_name, long_opt, short_opt,
               (additional_error ? additional_error : ""));
      else
        fprintf (stderr, "%s: `--%s' option given more than once%s\n", 
               package_name, long_opt,
               (additional_error ? additional_error : ""));
      return 1; /* failure */
    }

    
  if (field_given && *field_given && ! override)
    return 0;
  if (prev_given)
    (*prev_given)++;
  if (field_given)
    (*field_given)++;
  if (possible_values)
    val = possible_values[found];

  switch(arg_type) {
  case ARG_FLAG:
    *((int *)field) = !*((int *)field);
    break;
  case ARG_SHORT:
    if (val) *((short *)field) = (short)strtol (val, &stop_char, 0);
    break;
  case ARG_STRING:
    if (val) {
      string_field = (char **)field;
      if (!no_free && *string_field)
        free (*string_field); /* free previous string */
      *string_field = gengetopt_strdup (val);
    }
    break;
  default:
    break;
  };

  /* check numeric conversion */
  switch(arg_type) {
  case ARG_SHORT:
    if (val && !(stop_char && *stop_char == '\0')) {
      fprintf(stderr, "%s: invalid numeric value: %s\n", package_name, val);
      return 1; /* failure */
    }
    break;
  default:
    ;
  };

  /* store the original value */
  switch(arg_type) {
  case ARG_NO:
  case ARG_FLAG:
    break;
  default:
    if (value && orig_field) {
      if (no_free) {
        *orig_field = value;
      } else {
        if (*orig_field)
          free (*orig_field); /* free previous string */
        *orig_field = gengetopt_strdup (value);
      }
    }
  };

  return 0; /* OK */
}


int
cmdline_parser_internal (int argc, char * const *argv, struct gengetopt_args_info *args_info,
                        struct cmdline_parser_params *params, const char *additional_error)
{
  int c;	/* Character of the parsed option.  */

  int error = 0;
  struct gengetopt_args_info local_args_info;
  
  int override;
  int initialize;
  int check_required;
  int check_ambiguity;
  
  package_name = argv[0];
  
  override = params->override;
  initialize = params->initialize;
  check_required = params->check_required;
  check_ambiguity = params->check_ambiguity;

  if (initialize)
    cmdline_parser_init (args_info);

  cmdline_parser_init (&local_args_info);

  optarg = 0;
  optind = 0;
  opterr = params->print_errors;
  optopt = '?';

  while (1)
    {
      int option_index = 0;

      static struct option long_options[] = {
        { "help",	0, NULL, 'h' },
        { "version",	0, NULL, 'V' },
        { "listen",	1, NULL, 'l' },
        { "setuid",	1, NULL, 'u' },
        { "x509cafile",	1, NULL, 0 },
        { "x509certfile",	1, NULL, 0 },
        { "x509crlfile",	1, NULL, 0 },
        { "x509keyfile",	1, NULL, 0 },
        { "resume-limit",	1, NULL, 0 },
        { "configuration-file",	1, NULL, 'c' },
        { "verbose",	0, NULL, 'v' },
        { "quiet",	0, NULL, 'q' },
        { NULL,	0, NULL, 0 }
      };

      c = getopt_long (argc, argv, "hVl:u:c:vq", long_options, &option_index);

      if (c == -1) break;	/* Exit from `while (1)' loop.  */

      switch (c)
        {
        case 'h':	/* Print help and exit.  */
        
        
          if (update_arg( 0 , 
               0 , &(args_info->help_given),
              &(local_args_info.help_given), optarg, 0, 0, ARG_NO,
              check_ambiguity, override, 0, 0,
              "help", 'h',
              additional_error))
            goto failure;
          cmdline_parser_free (&local_args_info);
          return 0;
        
          break;
        case 'V':	/* Print version and exit.  */
        
        
          if (update_arg( 0 , 
               0 , &(args_info->version_given),
              &(local_args_info.version_given), optarg, 0, 0, ARG_NO,
              check_ambiguity, override, 0, 0,
              "version", 'V',
              additional_error))
            goto failure;
          cmdline_parser_free (&local_args_info);
          return 0;
        
          break;
        case 'l':	/* Sockets to listen for queries on.  Family is `IPv4' or `IPv6', if absent the family is decided by gethostbyname(ADDR). An address of `*' indicates all addresses on the local host. The default is `IPv4:*:kerberos/udp, IPv4:*:kerberos/tcp, IPv6:*:kerberos/udp, IPv6:*:kerberos/tcp'..  */
        
        
          if (update_arg( (void *)&(args_info->listen_arg), 
               &(args_info->listen_orig), &(args_info->listen_given),
              &(local_args_info.listen_given), optarg, 0, 0, ARG_STRING,
              check_ambiguity, override, 0, 0,
              "listen", 'l',
              additional_error))
            goto failure;
        
          break;
        case 'u':	/* After binding socket, set user identity..  */
        
        
          if (update_arg( (void *)&(args_info->setuid_arg), 
               &(args_info->setuid_orig), &(args_info->setuid_given),
              &(local_args_info.setuid_given), optarg, 0, 0, ARG_STRING,
              check_ambiguity, override, 0, 0,
              "setuid", 'u',
              additional_error))
            goto failure;
        
          break;
        case 'c':	/* Use specified configuration file..  */
        
        
          if (update_arg( (void *)&(args_info->configuration_file_arg), 
               &(args_info->configuration_file_orig), &(args_info->configuration_file_given),
              &(local_args_info.configuration_file_given), optarg, 0, 0, ARG_STRING,
              check_ambiguity, override, 0, 0,
              "configuration-file", 'c',
              additional_error))
            goto failure;
        
          break;
        case 'v':	/* Produce verbose output.\nUse multiple times to increase amount of information..  */
        
          local_args_info.verbose_given++;
        
          break;
        case 'q':	/* Don't produce any diagnostic output.\n.  */
        
        
          if (update_arg((void *)&(args_info->quiet_flag), 0, &(args_info->quiet_given),
              &(local_args_info.quiet_given), optarg, 0, 0, ARG_FLAG,
              check_ambiguity, override, 1, 0, "quiet", 'q',
              additional_error))
            goto failure;
        
          break;

        case 0:	/* Long option with no short option */
          /* X.509 certificate authorities used to verify client certificates, in PEM format..  */
          if (strcmp (long_options[option_index].name, "x509cafile") == 0)
          {
          
          
            if (update_arg( (void *)&(args_info->x509cafile_arg), 
                 &(args_info->x509cafile_orig), &(args_info->x509cafile_given),
                &(local_args_info.x509cafile_given), optarg, 0, 0, ARG_STRING,
                check_ambiguity, override, 0, 0,
                "x509cafile", '-',
                additional_error))
              goto failure;
          
          }
          /* X.509 server certificate, in PEM format..  */
          else if (strcmp (long_options[option_index].name, "x509certfile") == 0)
          {
          
          
            if (update_arg( (void *)&(args_info->x509certfile_arg), 
                 &(args_info->x509certfile_orig), &(args_info->x509certfile_given),
                &(local_args_info.x509certfile_given), optarg, 0, 0, ARG_STRING,
                check_ambiguity, override, 0, 0,
                "x509certfile", '-',
                additional_error))
              goto failure;
          
          }
          /* X.509 certificate revocation list to check for revoked client certificates, in PEM format..  */
          else if (strcmp (long_options[option_index].name, "x509crlfile") == 0)
          {
          
          
            if (update_arg( (void *)&(args_info->x509crlfile_arg), 
                 &(args_info->x509crlfile_orig), &(args_info->x509crlfile_given),
                &(local_args_info.x509crlfile_given), optarg, 0, 0, ARG_STRING,
                check_ambiguity, override, 0, 0,
                "x509crlfile", '-',
                additional_error))
              goto failure;
          
          }
          /* X.509 server certificate key, in PEM format..  */
          else if (strcmp (long_options[option_index].name, "x509keyfile") == 0)
          {
          
          
            if (update_arg( (void *)&(args_info->x509keyfile_arg), 
                 &(args_info->x509keyfile_orig), &(args_info->x509keyfile_given),
                &(local_args_info.x509keyfile_given), optarg, 0, 0, ARG_STRING,
                check_ambiguity, override, 0, 0,
                "x509keyfile", '-',
                additional_error))
              goto failure;
          
          }
          /* Keep track of up to this many TLS sessions for resume purposes (0 to disable TLS resume)..  */
          else if (strcmp (long_options[option_index].name, "resume-limit") == 0)
          {
          
          
            if (update_arg( (void *)&(args_info->resume_limit_arg), 
                 &(args_info->resume_limit_orig), &(args_info->resume_limit_given),
                &(local_args_info.resume_limit_given), optarg, 0, "50", ARG_SHORT,
                check_ambiguity, override, 0, 0,
                "resume-limit", '-',
                additional_error))
              goto failure;
          
          }
          
          break;
        case '?':	/* Invalid option.  */
          /* `getopt_long' already printed an error message.  */
          goto failure;

        default:	/* bug: option not considered.  */
          fprintf (stderr, "%s: option unknown: %c%s\n", CMDLINE_PARSER_PACKAGE, c, (additional_error ? additional_error : ""));
          abort ();
        } /* switch */
    } /* while */



  args_info->verbose_given += local_args_info.verbose_given;
  local_args_info.verbose_given = 0;
  
  if (check_required)
    {
      error += cmdline_parser_required2 (args_info, argv[0], additional_error);
    }

  cmdline_parser_release (&local_args_info);

  if ( error )
    return (EXIT_FAILURE);

  return 0;

failure:
  
  cmdline_parser_release (&local_args_info);
  return (EXIT_FAILURE);
}

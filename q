PRINTF(1)             User Commands            PRINTF(1)

NNAAMMEE
       printf - format and print data

SSYYNNOOPPSSIISS
       pprriinnttff _F_O_R_M_A_T [_A_R_G_U_M_E_N_T]...
       pprriinnttff _O_P_T_I_O_N

DDEESSCCRRIIPPTTIIOONN
       Print ARGUMENT(s) according to FORMAT, or execute
       according to OPTION:

       ----hheellpp display this help and exit

       ----vveerrssiioonn
              output version information and exit

       FORMAT controls the output as in C  printf.   In‐
       terpreted sequences are:

       \"     double quote

       \\     backslash

       \a     alert (BEL)

       \b     backspace

       \c     produce no further output

       \e     escape

       \f     form feed

       \n     new line

       \r     carriage return

       \t     horizontal tab

       \v     vertical tab

       \NNN   byte with octal value NNN (1 to 3 digits)

       \xHH   byte  with  hexadecimal  value  HH (1 to 2
              digits)

       \uHHHH Unicode (ISO/IEC 10646) character with hex
              value HHHH (4 digits)

       \UHHHHHHHH
              Unicode  character with hex value HHHHHHHH
              (8 digits)

       %%     a single %

       %b     ARGUMENT as a string with '\' escapes  in‐
              terpreted,  except  that octal escapes are
              of the form \0 or \0NNN

       %q     ARGUMENT is printed in a format  that  can
              be   reused   as   shell  input,  escaping
              non-printable characters with the proposed
              POSIX $'' syntax.

       and  all  C format specifications ending with one
       of diouxXfeEgGcs,  with  ARGUMENTs  converted  to
       proper type first.  Variable widths are handled.

       NOTE:  your  shell  may  have  its own version of
       printf, which usually supersedes the version  de‐
       scribed here.  Please refer to your shell's docu‐
       mentation for details about the options  it  sup‐
       ports.

AAUUTTHHOORR
       Written by David MacKenzie.

RREEPPOORRTTIINNGG BBUUGGSS
       GNU         coreutils         online        help:
       <https://www.gnu.org/software/coreutils/>
       Report printf translation bugs to <https://trans‐
       lationproject.org/team/>

CCOOPPYYRRIIGGHHTT
       Copyright  ©  2018 Free Software Foundation, Inc.
       License  GPLv3+:  GNU  GPL  version  3  or  later
       <https://gnu.org/licenses/gpl.html>.
       This is free software: you are free to change and
       redistribute it.  There is NO  WARRANTY,  to  the
       extent permitted by law.

SSEEEE AALLSSOO
       printf(3)

       Full documentation at: <https://www.gnu.org/soft‐
       ware/coreutils/printf>
       or  available  locally  via:  info   '(coreutils)
       printf invocation'

GNU coreutils 8.30   September 2019            PRINTF(1)

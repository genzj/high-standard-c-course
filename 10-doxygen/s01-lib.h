/*! \file s01-lib.h
    \brief A Documented file.
    
    Details.
*/

#include <stdlib.h>

/*! \def MAX(a,b)
    \brief A macro that returns the maximum of \a a and \a b.
   
    Details.
*/
#define MAX(a, b) (((a) > (b)) ? (a) : (b))

/*! \var typedef unsigned int UINT32
    \brief A type definition for a .
    
    Details.
*/
typedef unsigned int UINT32;

/*! \var int errno
    \brief Contains the last error code.
 
    \warning Not thread safe!
*/
int errno;

/*! \fn int open(const char *pathname,int flags)
    \brief Opens a file descriptor.
 
    \param pathname The name of the descriptor.
    \param flags Opening flags.
*/
int open(const char *, int);

/*! \fn int close(int fd)
    \brief Closes the file descriptor \a fd.
    \param fd The descriptor to close.
*/
int close(int);

/*! \fn size_t write(int fd,const char *buf, size_t count)
    \brief Writes \a count bytes from \a buf to the filedescriptor \a fd.
    \param fd The descriptor to write to.
    \param buf The data buffer to write.
    \param count The number of bytes to write.
*/
size_t write(int, const char *, size_t);

/*! \fn int read(int fd,char *buf,size_t count)
    \brief Read bytes from a file descriptor.
    \param fd The descriptor to read from.
    \param buf The buffer to read into.
    \param count The number of bytes to read.
*/
int read(int, char *, size_t);

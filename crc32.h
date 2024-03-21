/*
 * Update a running CRC with the bytes
 * buf[0..len-1]--the CRC should be
 * initialized to all 1's.
 */
unsigned int update_crc32(unsigned int crc, const char *buf, unsigned int len);

/*
 * Return the CRC of the bytes buf[0..len-1].
 */
unsigned int crc32(unsigned int seed, const char *buf, unsigned int len);
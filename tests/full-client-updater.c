/* Full Client Update Client
 *
 *   This is an example update client for a "full primary".
 *   It takes the path to an update package as the single argument
 * 
 *   The actual "data" contents of these update packages should be some text
 *   content. If the update package successfully verifies, an update is
 *   "applied" by simplying updating the contents of the "current_data.txt"
 *   file.
 */

/* Preliminaries:
 *   A private key already exists on the ECU at priv.key
 */

/* Update Package Data Format
 *
 *   This test script is written in a manner that allows "insecure" updates
 *   (if a second parameter is included.). This represents an existing Tier-1
 *   implementation that may not be secure. We should then be able to extend
 *   the update package when Uptane is used, but not replace existing
 *   functionality.
 */

#include "cuptane.h"

int main(int argc, char *argv[])
{
 
  return 0;
}

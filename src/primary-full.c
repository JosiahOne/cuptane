/*
 * Full Primary Implementation
 */

struct PrimaryFull {
  /* A unique identifier for the vehicle that contains this Secondary ECU. */
  char vin[256];
 
  /* A unique identifier for this Primary ECU. */
  char ecu_serial[256];

  /* The signing key for this Primary ECU. This key will be used to sign
   * Vehicle Manifests that will then be sent to the Director). The Director
   * should be aware of the corresponding public key, so that it can validate
   * these Vehicle Manifests.
   */
  char primary_key[256]; /* TODO Is 256 bytes enough? */
};

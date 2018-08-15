/*
 * Full Primary Implementation
 */

struct TUFClientUpdater {
  /* TODO Implement Me */
  int workaround;
};

struct TUFManifest {
  /* TODO Implement Me */
  int workaround;
};

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

  /* A tuf.client.updater.Updater object used to retrieve metadata and
   * target files from the Director and Supplier repositories.
   */
  struct TUFClientUpdater updater;

  /* The full path of the directory where all client data is stored for this
   * Primary. This includes verified and unverified metadata and images and
   * any temp files.
   */
  char full_client_dir[256];

  /* The name of the Director repository (e.g. 'director'), as listed in the
   * map (or pinning) file (pinned.json). This value must appear in that file.
   * Used to distinguish between the Image Repository and the Director
   * Repository.
   */
  char director_repo_name[256];

  /* The public key matching the private key that we expect the timeserver to
   * use when signing attestations. Validation is against this key.
   */
  char timeserver_public_key[256];

  /* A dictionary containing the manifests provided by all ECUs. Will include
   * all manifests sent by all ECUs.
   */
  struct TUFManifest ecu_manifests[256]; 


};

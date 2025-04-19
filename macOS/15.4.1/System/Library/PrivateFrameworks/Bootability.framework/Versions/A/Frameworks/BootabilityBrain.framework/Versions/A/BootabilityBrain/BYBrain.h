@interface BYBrain : NSObject

- (id)firstSystemVolumeMountPoint;
- (BOOL)verifyManifest:(id)a0 personalized:(BOOL)a1 restoreBundle:(id)a2 error:(id *)a3;
- (BOOL)makeVolumeBootable:(id)a0 authenticationHandler:(id /* block */)a1 options:(id)a2 error:(id *)a3;
- (BOOL)makeVolumeBootableWithGroupUUID:(id)a0 authenticationHandler:(id /* block */)a1 options:(id)a2 error:(id *)a3;
- (BOOL)prepareVolumeForMediumSecuritySoftwareUpdate:(id)a0 authenticationHandler:(id /* block */)a1 options:(id)a2 error:(id *)a3;
- (BOOL)prepareVolumeForMediumSecurityUpdateWithGroupUUID:(id)a0 authenticationHandler:(id /* block */)a1 options:(id)a2 error:(id *)a3;

@end

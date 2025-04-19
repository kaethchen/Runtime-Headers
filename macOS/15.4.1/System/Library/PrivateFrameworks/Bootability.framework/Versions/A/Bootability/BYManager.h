@class BYAuthenticationContext, NSString, NSData;

@interface BYManager : NSObject <BYServiceClientProtocol>

@property (retain) BYAuthenticationContext *authenticationContext;
@property (retain) NSString *username;
@property (retain) NSString *password;
@property (retain) NSData *localAuthenticationContext;
@property (readonly) NSString *firstSystemVolumeMountPoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_serviceConnectionWithError:(id *)a0;
- (id)_authenticationContextWithVolume:(id)a0 options:(id)a1;
- (BOOL)makeVolumeBootable:(id)a0 options:(id)a1 error:(id *)a2;
- (BOOL)makeVolumeBootableWithGroupUUID:(id)a0 options:(id)a1 error:(id *)a2;
- (void)obtainAuthenticationContextWithReply:(id /* block */)a0;
- (BOOL)prepareVolumeForMediumSecuritySoftwareUpdate:(id)a0 options:(id)a1 error:(id *)a2;
- (BOOL)prepareVolumeForMediumSecurityUpdateWithGroupUUID:(id)a0 options:(id)a1 error:(id *)a2;
- (BOOL)verifyManifest:(id)a0 personalized:(BOOL)a1 restoreBundle:(id)a2 error:(id *)a3;

@end

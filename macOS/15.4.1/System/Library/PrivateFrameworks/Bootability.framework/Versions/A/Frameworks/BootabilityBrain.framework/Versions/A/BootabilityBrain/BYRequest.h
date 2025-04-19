@class NSString, NSDictionary, NSData, LPStaticAPFSVolume;

@interface BYRequest : NSObject

@property (retain) NSString *volumeGroupUUID;
@property (copy) id /* block */ authenticationHandler;
@property (retain) NSDictionary *options;
@property (retain) NSString *restoreBundlePathOverride;
@property (retain) NSString *splatRestoreBundlePathOverride;
@property (retain) LPStaticAPFSVolume *targetVolume;
@property (retain) LPStaticAPFSVolume *sourcePrebootVolume;
@property (retain) LPStaticAPFSVolume *targetPrebootVolume;
@property (retain) LPStaticAPFSVolume *iscPrebootVolume;
@property (retain) LPStaticAPFSVolume *targetRecoveryVolume;
@property (retain) LPStaticAPFSVolume *externalRecoveryVolume;
@property (readonly) NSString *osManifestPath;
@property (readonly) NSString *osPersonalizedManifestPath;
@property (readonly) NSString *osGlobalManifestPath;
@property (readonly) NSString *osStagedGlobalManifestPath;
@property (readonly) NSString *splatManifestPath;
@property (readonly) NSString *splatPersonalizedManifestPath;
@property (readonly) NSString *splatGlobalManifestPath;
@property (readonly) NSString *splatProposedGlobalManifestPath;
@property (readonly) NSString *sfrManifestPath;
@property (readonly) NSString *restoreBundlePath;
@property (readonly) NSString *stagedRestoreBundlePath;
@property (readonly) NSString *splatCurrentRestoreBundlePath;
@property (readonly) NSString *splatProposedRestoreBundlePath;
@property unsigned int previousSecurityMode;
@property unsigned int securityMode;
@property BOOL useOSPersonalizedManifest;
@property BOOL shouldSetBoot;
@property BOOL shouldSetBootOnce;
@property BOOL needsLocalPolicy;
@property BOOL needsPersonalization;
@property BOOL needsInstall;
@property BOOL startedUpdateLocalPolicyNonce;
@property struct __ACMHandle { } *acmContext;
@property (retain) NSData *ssoTicketData;
@property (retain) NSString *splatPersonalizedManifestPathToCommit;

- (void)dealloc;
- (void).cxx_destruct;
- (id)_manifestPathInRestoreBundle:(id)a0 global:(BOOL)a1;
- (BOOL)getBooleanOption:(id)a0 exists:(BOOL *)a1;
- (BOOL)getPairedRecoveryInfoFromStagedRestoreBundle:(BOOL)a0 supported:(BOOL *)a1 error:(id *)a2;
- (id)initWithVolumeGroupUUID:(id)a0 authenticationHandler:(id /* block */)a1 options:(id)a2;
- (BOOL)splatRestoreBundleExistsAndIsValid:(id)a0;

@end

@class NSString, NSDictionary, NSData;

@interface MSUBootObjectCopier : NSObject

@property (retain) NSString *systemVolumeMountPoint;
@property (readonly) BOOL systemIsRecovery;
@property (retain) NSString *prebootVolumeMountPoint;
@property (retain) NSString *uuid;
@property (retain) NSString *preservedRestoreBundlePath;
@property (retain) NSString *stagedPreservedRestoreBundlePath;
@property (retain) NSDictionary *bootCachesBless2Info;
@property (retain) NSData *ticket;

+ (id)buildManifestFromBuildIdentity:(id)a0;
+ (id)payloadPathForTag:(id)a0 buildIdentity:(id)a1;

- (void)dealloc;
- (id)_hardwareModel;
- (id)_tagsToPreserve;
- (BOOL)_ensureDirectoryExistsAtPath:(id)a0 error:(id *)a1;
- (id)_loadBootCachesBless2Info:(id)a0;
- (unsigned long long)_manifestRuleForTag:(id)a0;
- (id)_preservedTicketNameForRunningDeviceWithPersonalization:(BOOL)a0;
- (id)_stitchedPathForTag:(id)a0;
- (id)_tagsInBuildIdentity:(id)a0;
- (BOOL)_writeTicketToDirectory:(id)a0;
- (BOOL)createNonAtomicPrebootPathsForBless;
- (id)initWithSystemVolume:(id)a0 prebootVolume:(id)a1 uuid:(id)a2;
- (id)initWithSystemVolume:(id)a0 systemIsRecovery:(BOOL)a1 prebootVolume:(id)a2 uuid:(id)a3 bootCaches:(id)a4;
- (id)initWithSystemVolume:(id)a0 systemIsRecovery:(BOOL)a1 prebootVolume:(id)a2 uuid:(id)a3 bootCaches:(id)a4 ticket:(id)a5;
- (BOOL)populateSystemRecoveryVolume:(id)a0 buildIdentity:(id)a1 nsih:(id)a2 fetchBootObjectBlock:(id /* block */)a3;
- (BOOL)preserveBootObjectsWithBuildIdentity:(id)a0 fetchBootObjectBlock:(id /* block */)a1;
- (BOOL)stagePreservedBootObjectsWithUpdateBundlePath:(id)a0 variant:(id)a1 mediumSecurity:(BOOL)a2;

@end

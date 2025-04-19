@class NSNumber, NSString, NSUUID, NSURL, NSObject, FPDVolumeManager;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface FPDVolume : NSObject {
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_source> *_diskSpaceRecoveryTimer;
    NSNumber *_requiredDiskSpaceThresholdOverride;
}

@property (readonly, nonatomic) NSString *root;
@property (readonly, nonatomic) NSURL *rootURL;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) int dev;
@property (readonly, nonatomic) unsigned int role;
@property (readonly, nonatomic) BOOL isLibraryConfigured;
@property (readonly, nonatomic) BOOL isDefaultVolumeForCurrentPersona;
@property (readonly, nonatomic) BOOL supportsEAPFS;
@property (readonly, nonatomic) NSURL *syncRootsDirectory;
@property (readonly, nonatomic) NSURL *systemDirectory;
@property (readonly, nonatomic) NSURL *purgatoryDirectory;
@property (readonly, weak, nonatomic) FPDVolumeManager *volumeManager;

+ (id)prettyNameForNsDomain:(id)a0 provider:(id)a1;
+ (int)_getProviderDomainIDFromFD:(int)a0 shortDescription:(id)a1 location:(unsigned int)a2 domainID:(id *)a3 error:(id *)a4;
+ (BOOL)getProviderDomainID:(id)a0 location:(unsigned int)a1 foundDomainID:(id *)a2 error:(id *)a3;
+ (id)prettyNameForDomain:(id)a0;
+ (unsigned int)volumeRoleForStatFS:(const struct statfs { unsigned int x0; int x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; struct fsid { int x0[2]; } x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; char x12[16]; char x13[1024]; char x14[1024]; unsigned int x15; unsigned int x16[7]; } *)a0;

- (id)description;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (BOOL)isDefaultVolume;
- (void)removeBrokenEbihilLinksFromRoot;
- (BOOL)_computeKnownPathsForRole:(unsigned int)a0;
- (id)_findDomainDirectory:(id)a0 location:(unsigned int)a1 error:(id *)a2;
- (BOOL)_hasCloudStorageDirAtRoot;
- (id)_subAppSupportPathForDomain:(id)a0 fileName:(id)a1 error:(id *)a2;
- (long long)currentAvailableDiskSpace;
- (id)findProviderDomainDirectory:(id)a0 location:(unsigned int)a1 error:(id *)a2;
- (id)initWithStatFS:(const struct statfs { unsigned int x0; int x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; struct fsid { int x0[2]; } x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; char x12[16]; char x13[1024]; char x14[1024]; unsigned int x15; unsigned int x16[7]; } *)a0 knownRole:(unsigned int)a1 volumeManager:(id)a2;
- (BOOL)isInLowDiskSpaceState;
- (BOOL)monitorLowDiskSpaceRecovery;
- (void)monitorLowDiskSpaceRecoveryForConcreteError:(id)a0;
- (id)readDomainsPropertiesUnderDirectoryAtURL:(id)a0 error:(id *)a1;
- (void)reevaluateLowDiskSpaceState;
- (id)removedURL;
- (long long)requiredDiskSpaceThreshold;
- (id)rootURLForLocation:(unsigned int)a0 error:(id *)a1;
- (id)stateDirectoryURL:(id)a0 error:(id *)a1;
- (id)supportPathForDomain:(id)a0 failIfNotExisting:(BOOL)a1 error:(id *)a2;
- (id)temporaryDirectoryURL:(id)a0 error:(id *)a1;
- (BOOL)writeDomainsProperties:(id)a0 underDirectoryAtURL:(id)a1 error:(id *)a2;

@end

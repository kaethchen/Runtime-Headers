@class NSString, UAFAssetSetExperiment, NSSet, NSUUID, MAAutoAssetSetRapidLock;

@interface UAFAssetSetConsistencyToken : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) MAAutoAssetSetRapidLock *rapidLock;
@property (retain, nonatomic) NSString *assetSetName;
@property (retain, nonatomic) NSString *atomicInstance;
@property (retain, nonatomic) UAFAssetSetExperiment *experiment;
@property (retain, nonatomic) NSSet *preinstalledAssetsSummary;
@property (nonatomic) int fd;
@property (readonly, nonatomic) BOOL isBootUUIDCurrent;
@property (nonatomic) int refCount;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) BOOL locked;
@property (readonly, nonatomic) NSString *bootUUID;

- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)jsonDictionary;
- (BOOL)unlock:(id *)a0;
- (BOOL)lock:(id *)a0;
- (BOOL)hasIdenticalAssets:(id)a0;
- (void)invalidate:(id)a0 completion:(id /* block */)a1;
- (id)processIdsLockingToken:(id *)a0;
- (BOOL)exlock:(id *)a0;
- (id)lockURL;
- (BOOL)nolock:(id *)a0;
- (id)bootUUIDError;
- (BOOL)hasIdenticalAssets:(id)a0 includeBootUUID:(BOOL)a1;
- (id)initWithUUID:(id)a0 assetSetName:(id)a1 atomicInstance:(id)a2 experiment:(id)a3 preinstalledAssetsSummary:(id)a4;
- (id)initWithUUID:(id)a0 assetSetName:(id)a1 atomicInstance:(id)a2 experiment:(id)a3 preinstalledAssetsSummary:(id)a4 bootUUID:(id)a5;
- (BOOL)processIdIsLockingToken:(int)a0 statBuffer:(struct stat { int x0; unsigned short x1; unsigned short x2; unsigned long long x3; unsigned int x4; unsigned int x5; int x6; struct timespec { long long x0; long long x1; } x7; struct timespec { long long x0; long long x1; } x8; struct timespec { long long x0; long long x1; } x9; struct timespec { long long x0; long long x1; } x10; long long x11; long long x12; int x13; unsigned int x14; unsigned int x15; int x16; long long x17[2]; } *)a1 error:(id *)a2;
- (id)unlockableTokenError;

@end

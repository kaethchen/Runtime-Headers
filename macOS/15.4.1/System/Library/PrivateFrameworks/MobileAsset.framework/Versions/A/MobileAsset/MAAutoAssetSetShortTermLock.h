@class NSString, NSMutableDictionary;

@interface MAAutoAssetSetShortTermLock : NSObject

@property (readonly, retain, nonatomic) NSString *assetSetAtomicInstance;
@property (readonly, retain, nonatomic) NSString *lockedFilename;
@property (nonatomic) int lockedFileDescriptor;
@property (retain, nonatomic) NSMutableDictionary *lockCountByReason;
@property (nonatomic) long long totalLockCount;

- (id)description;
- (void).cxx_destruct;
- (id)summary;
- (id)initForAssetSetAtomicInstance:(id)a0 withLockedFilename:(id)a1 withLockedFileDescriptor:(int)a2 forFirstLockReason:(id)a3;

@end

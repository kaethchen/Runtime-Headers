@class NSNumber, PolicyScanCacheTarget, NSDate;

@interface PolicyCacheMeta : NSObject

@property (retain, nonatomic) NSNumber *metaId;
@property (retain, nonatomic) NSNumber *missCount;
@property (retain, nonatomic) NSDate *lastMiss;
@property (retain, nonatomic) NSNumber *forEntry;
@property (nonatomic) long long sourceTable;
@property (retain, nonatomic) PolicyScanCacheTarget *resolvedEntry;

- (void).cxx_destruct;

@end

@class NSString, NSURL, NSDate, NSNumber;

@interface BCSConfigItem : NSObject <BCSBusinessConfig, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long buckets;
@property (nonatomic) long long filterShardCount;
@property (retain, nonatomic) NSNumber *itemTTL;
@property (retain, nonatomic) NSURL *filterMegaShardURL;
@property (copy, nonatomic) NSDate *expirationDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic, getter=isExpired) BOOL expired;

+ (id)keysRequestedForCloudKitFetch;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithRecord:(id)a0;
- (id)_extractItemTTLFromConfigRecord:(id)a0;
- (id)initWithBuckets:(long long)a0 shards:(long long)a1 expirationDate:(id)a2;
- (id)initWithBuckets:(long long)a0 shards:(long long)a1 expirationDate:(id)a2 filterMegaShardURL:(id)a3 itemTTL:(id)a4;
- (id)initWithJSONObj:(id)a0;

@end

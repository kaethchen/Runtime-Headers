@class NSArray, NSString, NSSet, NSPredicate;

@interface CWFScanParameters : NSObject <NSPredicateVisitor, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL invalidPredicate;
@property (copy, nonatomic) NSArray *channels;
@property (copy, nonatomic) NSString *SSID;
@property (nonatomic) unsigned long long shortSSID;
@property (copy, nonatomic) NSArray *SSIDList;
@property (copy, nonatomic) NSString *BSSID;
@property (nonatomic) unsigned long long numberOfScans;
@property (nonatomic) unsigned long long restTime;
@property (nonatomic) unsigned long long dwellTime;
@property (nonatomic) unsigned long long acceptableCacheAge;
@property (nonatomic) unsigned long long maximumCacheAge;
@property (nonatomic) BOOL cacheOnly;
@property (nonatomic) int BSSType;
@property (nonatomic) int PHYMode;
@property (nonatomic) int scanType;
@property (nonatomic) long long minimumRSSI;
@property (nonatomic) unsigned long long maximumAge;
@property (nonatomic) unsigned long long minimumTimestamp;
@property (nonatomic) BOOL mergeScanResults;
@property (nonatomic) BOOL includeHiddenNetworks;
@property (nonatomic) int scanFlags;
@property (copy, nonatomic) NSSet *includeProperties;
@property (copy, nonatomic) NSArray *includeScanResults;
@property (nonatomic) BOOL includeMatchingKnownNetworkProfiles;
@property (copy, nonatomic) NSArray *ANQPElementIDListForPasspointScanResults;
@property (nonatomic) unsigned long long maximumANQPCacheAgeForPasspointScanResults;
@property (nonatomic) unsigned long long acceptableANQPCacheAgeForPasspointScanResults;
@property (nonatomic) unsigned long long maximumANQPAgeForPasspointScanResults;
@property (nonatomic) BOOL exclude6GChannels;
@property (copy, nonatomic) NSString *matchNetworkNamePrefix;
@property (copy, nonatomic) NSPredicate *filterPredicate;
@property (nonatomic) BOOL includeBeaconCacheResults;
@property (nonatomic) BOOL includeBackgroundScanCacheResults;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)visitPredicate:(id)a0;
- (void)visitPredicateExpression:(id)a0;
- (void)visitPredicateOperator:(id)a0;
- (unsigned long long)maximumCacheAge;
- (BOOL)cacheOnly;
- (BOOL)isEqualToScanParameters:(id)a0;
- (unsigned long long)maximumANQPCacheAgeForPasspointScanResults;
- (void)setCacheOnly:(BOOL)a0;
- (void)setMaximumANQPCacheAgeForPasspointScanResults:(unsigned long long)a0;
- (void)setMaximumCacheAge:(unsigned long long)a0;

@end

@class NSString, MAAutoAssetLockReason, MAAutoAssetPolicy, NSDate;

@interface MAAutoAssetLockTracker : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, retain, nonatomic) MAAutoAssetLockReason *clientLockReason;
@property (retain, nonatomic) NSString *clientProcessName;
@property (nonatomic) long long clientProcessID;
@property (retain, nonatomic) MAAutoAssetPolicy *lockUsagePolicy;
@property (nonatomic) long long activeLockCount;
@property (nonatomic) long long maximumLockCount;
@property (nonatomic) long long totalLockCount;
@property (nonatomic) long long continueCount;
@property (retain, nonatomic) NSDate *firstLockTimestamp;
@property (retain, nonatomic) NSDate *lastRefreshTimestamp;

+ (id)summaryNewMaxColumnStrings;
+ (id)summaryPaddedBanner:(id)a0;
+ (id)summaryPaddedHeader:(id)a0;
+ (id)summaryPaddedString:(id)a0 paddingToLenghtOfString:(id)a1 paddingWith:(id)a2 paddingBefore:(BOOL)a3;

- (id)copy;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)summary;
- (id)_initForClientLockReason:(id)a0 forClientProcessName:(id)a1 withClientProcessID:(long long)a2 lockingWithUsagePolicy:(id)a3;
- (id)initForClientLockReason:(id)a0 forClientProcessName:(id)a1 withClientProcessID:(long long)a2 lockingWithUsagePolicy:(id)a3;
- (id)initForClientLockReason:(id)a0 lockingWithUsagePolicy:(id)a1;
- (id)newSummaryDictionary;
- (void)summaryBuildMaxColumnStrings:(id)a0;
- (id)summaryPadded:(id)a0;

@end

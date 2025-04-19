@class NSString, NSError;

@interface SUUpdateStatus : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *productKey;
@property (nonatomic) unsigned long long installState;
@property (nonatomic) unsigned long long activePhases;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) unsigned long long totalBytes;
@property (nonatomic) unsigned long long downloadedBytes;
@property (nonatomic) double estimatedTimeRemainingForDownload;
@property (nonatomic) double installProgressPercent;
@property (nonatomic) double bridgeOSPrepareProgressPercent;
@property (nonatomic) double estimatedTimeRemainingForInstall;
@property (nonatomic) double estimatedTimeRemainingForBridgeOSPrepare;
@property (nonatomic) double estimatedTimeForPostLogoutCommit;
@property (copy, nonatomic) NSString *specialInstallStatus;
@property (readonly, nonatomic) double progressPercent;
@property (readonly, nonatomic) double estimatedTimeRemaining;

+ (BOOL)isActiveInstallState:(unsigned long long)a0;
+ (id)stringForInstallState:(unsigned long long)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithProductKey:(id)a0;

@end

@class NSString, NSDictionary;

@interface SUCorePolicySoftwareUpdateScan : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property long long specifiedFields;
@property (nonatomic) BOOL allowsCellular;
@property (nonatomic) BOOL discretionary;
@property (nonatomic) BOOL disableUI;
@property (nonatomic) BOOL requiresPowerPluggedIn;
@property (nonatomic) BOOL restrictToIncremental;
@property (nonatomic) BOOL restrictToFull;
@property (nonatomic) BOOL allowSameVersion;
@property (nonatomic) int downloadTimeoutSecs;
@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSString *rampingScanType;
@property (nonatomic) long long scanUpdateType;
@property (nonatomic) BOOL liveServerCatalogOnly;
@property (retain, nonatomic) NSDictionary *additionalServerParams;
@property (retain, nonatomic) NSDictionary *additionalOptions;

+ (id)nameForScanUpdateType:(long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)summary;
- (BOOL)shouldScanForMajorUpdates;
- (BOOL)shouldScanForMinorUpdates;
- (void)backToDefaults;

@end

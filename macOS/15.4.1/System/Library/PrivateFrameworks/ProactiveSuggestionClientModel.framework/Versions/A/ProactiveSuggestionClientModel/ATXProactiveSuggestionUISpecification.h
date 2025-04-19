@class NSString, NSArray, NSDate;

@interface ATXProactiveSuggestionUISpecification : NSObject <NSSecureCoding, ATXProtoBufWrapper, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) NSString *reason;
@property (readonly, nonatomic) NSArray *preferredLayoutConfigs;
@property (readonly, nonatomic) BOOL allowedOnLockscreen;
@property (readonly, nonatomic) BOOL allowedOnHomeScreen;
@property (readonly, nonatomic) BOOL allowedOnSpotlight;
@property (readonly, nonatomic) BOOL shouldClearOnEngagement;
@property (readonly, nonatomic) unsigned long long predictionReasons;
@property (readonly, nonatomic) NSDate *contextStartDate;
@property (readonly, nonatomic) NSDate *contextEndDate;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)encodeAsProto;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 preferredLayoutConfigs:(id)a2 allowedOnLockscreen:(BOOL)a3 allowedOnHomeScreen:(BOOL)a4 allowedOnSpotlight:(BOOL)a5;
- (BOOL)checkAndReportDecodingFailureIfNeededForid:(id)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (id)initWithProto:(id)a0;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 predictionReason:(id)a2 preferredLayoutConfigs:(id)a3 allowedOnLockscreen:(BOOL)a4 allowedOnHomeScreen:(BOOL)a5 allowedOnSpotlight:(BOOL)a6 shouldClearOnEngagement:(BOOL)a7 predictionReasons:(unsigned long long)a8;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 predictionReason:(id)a2 preferredLayoutConfigs:(id)a3 allowedOnLockscreen:(BOOL)a4 allowedOnHomeScreen:(BOOL)a5 allowedOnSpotlight:(BOOL)a6 shouldClearOnEngagement:(BOOL)a7 predictionReasons:(unsigned long long)a8 contextStartDate:(id)a9 contextEndDate:(id)a10;
- (BOOL)checkAndReportDecodingFailureIfNeededForBOOL:(BOOL)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 predictionReason:(id)a2 preferredLayoutConfigs:(id)a3 allowedOnLockscreen:(BOOL)a4 allowedOnHomeScreen:(BOOL)a5 allowedOnSpotlight:(BOOL)a6 shouldClearOnEngagement:(BOOL)a7;
- (id)jsonRawData;
- (BOOL)fuzzyIsEqualToUISpecification:(id)a0;

@end

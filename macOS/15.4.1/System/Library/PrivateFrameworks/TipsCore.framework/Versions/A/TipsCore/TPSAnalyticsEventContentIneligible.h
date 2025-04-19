@class NSString;

@interface TPSAnalyticsEventContentIneligible : TPSAnalyticsEvent

@property (readonly, nonatomic) NSString *tipID;
@property (readonly, nonatomic) NSString *correlationID;
@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSString *context;
@property (nonatomic) unsigned long long displayCount;
@property (readonly, nonatomic) unsigned long long displayType;
@property (readonly, nonatomic) long long reason;

+ (BOOL)supportsSecureCoding;
+ (id)eventWithTipID:(id)a0 correlationID:(id)a1 bundleID:(id)a2 context:(id)a3 displayType:(unsigned long long)a4 reason:(long long)a5 date:(id)a6;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)eventName;
- (void)setDataProvider:(id)a0;
- (id)_initWithTipID:(id)a0 correlationID:(id)a1 bundleID:(id)a2 context:(id)a3 displayType:(unsigned long long)a4 reason:(long long)a5 date:(id)a6;
- (id)mutableAnalyticsEventRepresentation;

@end

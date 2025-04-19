@class NSString;

@interface TPSAnalyticsEventTipNotDisplayed : TPSAnalyticsEvent

@property (readonly, copy, nonatomic) NSString *tipID;
@property (readonly, copy, nonatomic) NSString *correlationID;
@property (readonly, copy, nonatomic) NSString *bundleID;
@property (readonly, copy, nonatomic) NSString *context;
@property (readonly, copy, nonatomic) NSString *displayType;
@property (readonly, copy, nonatomic) NSString *reason;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)eventName;
- (void)setDataProvider:(id)a0;
- (id)initWithReason:(id)a0 lastOfferedTipID:(id)a1 lastOfferedCorrelationID:(id)a2 lastOfferedBundleID:(id)a3 lastOfferedContext:(id)a4;
- (id)initWithReason:(id)a0 lastOfferedTipID:(id)a1 lastOfferedCorrelationID:(id)a2 lastOfferedBundleID:(id)a3 lastOfferedContext:(id)a4 date:(id)a5;
- (id)initWithTipID:(id)a0 correlationID:(id)a1 bundleID:(id)a2 reason:(long long)a3 context:(id)a4 date:(id)a5;
- (id)initWithTipID:(id)a0 correlationID:(id)a1 bundleID:(id)a2 reason:(id)a3 context:(id)a4 date:(id)a5 displayType:(id)a6;
- (id)initWithTipID:(id)a0 correlationID:(id)a1 reason:(long long)a2 context:(id)a3;
- (id)mutableAnalyticsEventRepresentation;

@end

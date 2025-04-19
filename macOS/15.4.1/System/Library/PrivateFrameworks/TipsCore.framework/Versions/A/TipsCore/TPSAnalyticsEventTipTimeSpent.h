@class NSString;

@interface TPSAnalyticsEventTipTimeSpent : TPSAnalyticsEvent

@property (retain, nonatomic) NSString *collectionID;
@property (retain, nonatomic) NSString *tipID;
@property (retain, nonatomic) NSString *correlationID;
@property (nonatomic) double timeSpent;

+ (BOOL)supportsSecureCoding;
+ (id)eventWithTipID:(id)a0 collectionID:(id)a1 correlationID:(id)a2;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)eventName;
- (id)_initWithTipID:(id)a0 collectionID:(id)a1 correlationID:(id)a2;
- (id)mutableAnalyticsEventRepresentation;

@end

@class NSString, NSNumber;

@interface TPSAnalyticsEventUsageObservations : TPSAnalyticsEvent

@property (retain, nonatomic) NSString *eventID;
@property (retain, nonatomic) NSNumber *eventCount;
@property (readonly, nonatomic) NSString *experimentID;
@property (readonly, nonatomic) NSString *experimentCampID;

+ (BOOL)supportsSecureCoding;
+ (id)eventWithEventID:(id)a0 eventCount:(id)a1;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)eventName;
- (void)setDataProvider:(id)a0;
- (id)_initWithEventID:(id)a0 eventCount:(id)a1;
- (id)mutableAnalyticsEventRepresentation;

@end

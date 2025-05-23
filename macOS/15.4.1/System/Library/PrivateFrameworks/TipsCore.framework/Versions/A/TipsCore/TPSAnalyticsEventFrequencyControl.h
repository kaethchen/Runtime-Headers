@class NSString, NSNumber;

@interface TPSAnalyticsEventFrequencyControl : TPSAnalyticsEvent

@property (retain, nonatomic) NSString *displayType;
@property (retain, nonatomic) NSNumber *displayCount;
@property (retain, nonatomic) NSNumber *notDisplayedDueToFrequencyControlCount;
@property (retain, nonatomic) NSString *experimentID;
@property (retain, nonatomic) NSString *experimentCampID;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)eventName;
- (void)setDataProvider:(id)a0;
- (id)initWithDisplayType:(id)a0 displayCount:(id)a1 notDisplayedDueToFrequencyControlCount:(id)a2;
- (id)mutableAnalyticsEventRepresentation;

@end

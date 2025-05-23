@class NSString, TPSExperiment, NSDate;

@interface TPSAnalyticsEventProcessedUsageEvents : TPSAnalyticsEvent

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSDate *firstShownDate;
@property (readonly, nonatomic) NSDate *notifiedDate;
@property (readonly, nonatomic) TPSExperiment *experiment;
@property (readonly, nonatomic) unsigned long long desiredOutcomeCount;
@property (readonly, nonatomic) unsigned long long preHintUsageCount;
@property (readonly, nonatomic) unsigned long long postHintUsageCount;
@property (readonly, nonatomic) BOOL preHintRangeOutOfBounds;
@property (readonly, nonatomic) BOOL postHintRangeOutOfBounds;
@property (readonly, nonatomic) BOOL overrideHoldout;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)eventName;
- (id)mutableAnalyticsEventRepresentation;
- (id)initWithUsageInfo:(id)a0 experiment:(id)a1 preHintUsageCount:(unsigned long long)a2 postHintUsageCount:(unsigned long long)a3 preHintRangeOutOfBounds:(BOOL)a4 postHintRangeOutOfBounds:(BOOL)a5 date:(id)a6;

@end

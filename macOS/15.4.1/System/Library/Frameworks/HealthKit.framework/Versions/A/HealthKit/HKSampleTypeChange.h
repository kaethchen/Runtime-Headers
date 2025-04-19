@class NSString, HKSampleType, NSDateInterval;

@interface HKSampleTypeChange : NSObject <NSSecureCoding, HKRedactedDescription>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double startTime;
@property (readonly, nonatomic) double endTime;
@property (readonly, nonatomic) long long queryStrategy;
@property (readonly, copy, nonatomic) HKSampleType *sampleType;
@property (readonly, copy, nonatomic) NSDateInterval *dateInterval;
@property (readonly, nonatomic) BOOL hasUnfrozenSeries;
@property (readonly, copy) NSString *hk_redactedDescription;

+ (id)sampleTypeChangeWithSampleType:(id)a0 dateInterval:(id)a1 hasUnfrozenSeries:(BOOL)a2;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_extendDateIntervalWithSample:(id)a0;
- (id)_initWithSampleType:(id)a0 startTime:(double)a1 endTime:(double)a2 hasUnfrozenSeries:(BOOL)a3 queryStrategy:(long long)a4;

@end

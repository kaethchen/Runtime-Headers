@class NSArray, NSDateInterval, NSString, NSDate, HKCategorySample;

@interface HKMCPregnancyModel : NSObject <HKRedactedDescription, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long state;
@property (readonly, copy, nonatomic) NSDate *pregnancyStartDate;
@property (readonly, copy, nonatomic) NSDate *pregnancyEndDate;
@property (readonly, copy, nonatomic) NSDate *estimatedDueDate;
@property (readonly, copy, nonatomic) NSDateInterval *pregnancyDuration;
@property (readonly, copy, nonatomic) NSArray *trimesters;
@property (readonly, copy, nonatomic) NSDate *physiologicalWashoutEndDate;
@property (readonly, copy, nonatomic) NSDate *behavioralWashoutEndDate;
@property (readonly, copy, nonatomic) HKCategorySample *sample;
@property (readonly, copy, nonatomic) NSDate *educationalStepsCompletedDate;
@property (readonly, copy) NSString *hk_redactedDescription;

+ (id)descriptionFromState:(long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithState:(long long)a0 pregnancyStartDate:(id)a1 pregnancyEndDate:(id)a2 estimatedDueDate:(id)a3 pregnancyDuration:(id)a4 physiologicalWashoutEndDate:(id)a5 behavioralWashoutEndDate:(id)a6 trimesters:(id)a7 sample:(id)a8 educationalStepsCompletedDate:(id)a9;

@end

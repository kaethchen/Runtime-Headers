@class NSDateInterval, NSDate;

@interface PKPassRelevantDate : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDate *effectiveStartDate;
@property (readonly, copy, nonatomic) NSDate *effectiveEndDate;
@property (copy, nonatomic) NSDate *date;
@property (readonly, copy, nonatomic) NSDateInterval *interval;

+ (id)findDateFromDates:(id)a0 option:(unsigned long long)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)_init;
- (BOOL)_isEqualToRelevancyDate:(id)a0;
- (id)earliestDate;
- (id)initWithEffectiveStartDate:(id)a0 effectiveEndDate:(id)a1;
- (id)initWithRelevantDate:(id)a0;
- (id)latestDate;
- (id)relevantDateWithPriority:(unsigned long long)a0;

@end

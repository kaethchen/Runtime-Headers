@class EKRecurrenceEnd, NSDate;

@interface CalRecurrenceEnd : NSObject <NSCopying>

@property (retain, nonatomic) EKRecurrenceEnd *ekRecurrenceEnd;
@property (readonly) BOOL usesEndDate;
@property (readonly) NSDate *endDate;
@property (readonly) unsigned long long occurrenceCount;

+ (id)recurrenceEndWithEndDate:(id)a0;
+ (id)recurrenceEndWithOccurrenceCount:(unsigned long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithEKRecurrenceEnd:(id)a0;
- (id)initWithEndDate:(id)a0;
- (id)initWithOccurrenceCount:(unsigned long long)a0;

@end

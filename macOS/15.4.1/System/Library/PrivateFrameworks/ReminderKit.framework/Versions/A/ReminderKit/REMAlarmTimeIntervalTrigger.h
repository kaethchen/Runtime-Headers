@interface REMAlarmTimeIntervalTrigger : REMAlarmTrigger <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double timeInterval;

+ (id)cdEntityName;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTimeInterval:(double)a0;
- (id)_deepCopy;
- (id)initWithObjectID:(id)a0 timeInterval:(double)a1;
- (BOOL)isTemporal;

@end

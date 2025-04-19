@interface DNDScheduleTime : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hour;
@property (readonly) unsigned long long minute;

+ (id)defaultEndTime;
+ (id)defaultStartTime;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dateComponents;
- (id)_initWithHour:(unsigned long long)a0 minute:(unsigned long long)a1;
- (id)_initWithTime:(id)a0;

@end

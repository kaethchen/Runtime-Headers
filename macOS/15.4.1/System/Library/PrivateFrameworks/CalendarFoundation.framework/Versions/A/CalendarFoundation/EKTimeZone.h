@class NSTimeZone;

@interface EKTimeZone : NSObject <NSCopying>

@property (retain, nonatomic) NSTimeZone *nsTimeZone;

+ (id)timeZoneWithName:(id)a0;
+ (id)timeZoneWithNSTimeZone:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)NSTimeZone;
- (id)initWithNSTimeZone:(id)a0;
- (double)nextDaylightSavingTimeTransitionAfterAbsoluteTime:(double)a0;
- (double)secondsFromGMTForAbsoluteTime:(double)a0;

@end

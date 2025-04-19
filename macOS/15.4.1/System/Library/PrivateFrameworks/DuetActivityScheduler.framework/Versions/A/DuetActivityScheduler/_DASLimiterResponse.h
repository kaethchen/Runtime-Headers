@class NSString;

@interface _DASLimiterResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *rationale;
@property (readonly, nonatomic) unsigned long long decision;
@property (readonly, nonatomic) NSString *limiterName;
@property (readonly, nonatomic) double validityDuration;

+ (unsigned long long)bitmaskFromResponses:(id)a0;
+ (id)limitResponseWithDecision:(unsigned long long)a0 withLimiter:(id)a1 validityDuration:(double)a2 rationale:(id)a3;
+ (BOOL)queryActivityDecision:(unsigned long long)a0 fromResponses:(id)a1;
+ (void)updateActivity:(id)a0 withLimitResponse:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDecision:(unsigned long long)a0 withLimiter:(id)a1 validityDuration:(double)a2 rationale:(id)a3;

@end

@interface _CDRateAndTotalLimiter : _CDRateLimiter

@property long long currentTotal;
@property (readonly) long long totalCount;

- (id)description;
- (BOOL)debited;
- (BOOL)credit;
- (id)initWithCount:(long long)a0 perPeriod:(double)a1;
- (id)initWithCount:(long long)a0 perPeriod:(double)a1 totalCountLimit:(long long)a2;

@end

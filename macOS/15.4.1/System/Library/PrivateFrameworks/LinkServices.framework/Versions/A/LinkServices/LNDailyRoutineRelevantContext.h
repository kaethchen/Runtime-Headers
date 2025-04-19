@interface LNDailyRoutineRelevantContext : LNRelevantContext

@property (readonly, nonatomic) long long situation;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSituation:(long long)a0;
- (id)analyticsDescription;
- (id)asCondition;

@end

@class NSString;

@interface FPSQLDatabaseQueryStatistics : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double minTime;
@property (nonatomic) double maxTime;
@property (nonatomic) double cumulatedTime;
@property (nonatomic) double cumulatedSquareDiffFromMean;
@property (nonatomic) long long count;
@property (retain, nonatomic) NSString *queryPlan;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithMinTime:(double)a0 maxTime:(double)a1 cumulatedTime:(double)a2 cumulatedSquareDiffFromMean:(double)a3 count:(long long)a4 queryPlan:(id)a5;

@end

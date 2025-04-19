@interface CLSAggregatedValue : CLSReportItem <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double value;
@property (nonatomic) long long totalSampleCount;
@property (readonly, nonatomic) double normalized;
@property (nonatomic) int aggregateType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (long long)compare:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (void)add:(id)a0;
- (void)scalarMultiply:(double)a0;

@end

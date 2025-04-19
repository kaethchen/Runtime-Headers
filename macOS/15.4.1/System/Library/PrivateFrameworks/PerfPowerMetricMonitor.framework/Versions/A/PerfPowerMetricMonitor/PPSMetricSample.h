@class NSNumber, NSDate;

@interface PPSMetricSample : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSNumber *value;
@property (readonly, nonatomic) NSDate *timestamp;
@property (readonly, nonatomic) BOOL boolValue;
@property (readonly, nonatomic) int intValue;
@property (readonly, nonatomic) double doubleValue;

+ (id)sampleWithValue:(id)a0 timestamp:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithValue:(id)a0 timestamp:(id)a1;

@end

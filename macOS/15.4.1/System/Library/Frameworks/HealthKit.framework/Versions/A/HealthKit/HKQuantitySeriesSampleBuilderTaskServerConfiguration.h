@class HKQuantityType, HKDevice, NSDate;

@interface HKQuantitySeriesSampleBuilderTaskServerConfiguration : HKTaskConfiguration

@property (copy, nonatomic) HKQuantityType *quantityType;
@property (copy, nonatomic) NSDate *startDate;
@property (copy, nonatomic) HKDevice *device;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithQuantityType:(id)a0 startDate:(id)a1 device:(id)a2;

@end

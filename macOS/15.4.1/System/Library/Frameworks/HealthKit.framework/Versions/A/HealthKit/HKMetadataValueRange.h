@interface HKMetadataValueRange : NSObject <NSCopying>

@property (readonly, copy, nonatomic) id minValue;
@property (readonly, copy, nonatomic) id maxValue;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithMinValue:(id)a0 maxValue:(id)a1;

@end

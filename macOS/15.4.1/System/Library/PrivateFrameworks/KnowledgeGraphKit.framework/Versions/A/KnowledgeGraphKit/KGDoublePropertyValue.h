@interface KGDoublePropertyValue : KGPropertyValue

@property (readonly, nonatomic) double value;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)dataType;
- (id)initWithValue:(double)a0;
- (id)kgPropertyValue;

@end

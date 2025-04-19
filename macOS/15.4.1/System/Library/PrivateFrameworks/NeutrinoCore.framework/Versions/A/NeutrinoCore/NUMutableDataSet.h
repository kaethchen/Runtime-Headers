@interface NUMutableDataSet : NUDataSet

@property (readonly, nonatomic) long long capacity;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCapacity:(long long)a0;
- (void)addValue:(double)a0;
- (void *)_data;
- (void)appendDataSet:(id)a0;

@end

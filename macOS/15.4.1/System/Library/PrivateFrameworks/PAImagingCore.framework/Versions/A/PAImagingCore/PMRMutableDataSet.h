@interface PMRMutableDataSet : PMRDataSet

- (id)initWithCapacity:(unsigned long long)a0;
- (void)addValue:(double)a0;
- (unsigned long long)capacity;
- (void *)_data;
- (void)appendDataSet:(id)a0;

@end

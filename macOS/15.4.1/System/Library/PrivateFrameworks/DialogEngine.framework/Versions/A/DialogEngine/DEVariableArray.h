@interface DEVariableArray : DEVariable

- (id)init;
- (id)initWithName:(id)a0;
- (void)addItem:(id)a0;
- (id)getItem:(unsigned long long)a0;
- (unsigned long long)getLength;
- (id)initWithSharedPtr:(void *)a0;

@end

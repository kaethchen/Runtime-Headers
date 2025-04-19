@interface DefaultNameNumberProvider : ISDNameNumberProvider

- (id)init;
- (void)invalidate;
- (void)clear;
- (BOOL)isDefaultProvider;
- (void)makeIrreplaceable;

@end

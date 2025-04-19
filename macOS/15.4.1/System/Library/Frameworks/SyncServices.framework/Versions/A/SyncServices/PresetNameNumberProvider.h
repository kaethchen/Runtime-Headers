@interface PresetNameNumberProvider : ISDNameNumberProvider

- (void)invalidate;
- (void)reset;
- (id)initWithNameNumberMapping:(id)a0 takesPrecedence:(BOOL)a1 canBeReplaced:(BOOL)a2;

@end

@interface PGGraphPropertylessNode : PGGraphOptimizedNode

- (BOOL)hasProperties;
- (BOOL)hasProperties:(id)a0;
- (void)checkConsistencyOfProperties:(id)a0 withExtraPropertyKeys:(id)a1;
- (id)propertyDictionary;

@end

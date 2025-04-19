@interface KGEdgeCollection : KGElementCollection

- (id)allObjects;
- (void)enumerateEdgesUsingBlock:(id /* block */)a0;
- (void)enumeratePropertyValuesForKey:(id)a0 withBlock:(id /* block */)a1;
- (void)enumerateEdgesSortedByFloatPropertyForName:(id)a0 usingBlock:(id /* block */)a1;
- (void)enumerateEdgesSortedByIntegerPropertyForName:(id)a0 usingBlock:(id /* block */)a1;
- (void)enumerateEdgesSortedByStringPropertyForName:(id)a0 usingBlock:(id /* block */)a1;
- (void)enumerateElementsWithBatchSize:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (void)enumerateOrderedEdges:(id)a0 withBatchSize:(unsigned long long)a1 usingBlock:(id /* block */)a2;

@end

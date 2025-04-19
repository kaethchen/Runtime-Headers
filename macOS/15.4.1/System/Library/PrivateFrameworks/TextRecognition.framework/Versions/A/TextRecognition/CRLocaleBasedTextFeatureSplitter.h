@interface CRLocaleBasedTextFeatureSplitter : CRMultiModelTextFeatureSplitter

- (id)initWithConfiguration:(id)a0;
- (void)enumerateIndicesForLineRegions:(id)a0 usingBlock:(id /* block */)a1;
- (void)enumerateLineRegions:(id)a0 usingBlock:(id /* block */)a1;

@end

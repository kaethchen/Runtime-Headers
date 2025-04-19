@interface FI_IPropertyLastOpenedDateExtractor : FI_IPropertyDateExtractor

- (id)init;
- (id)defaultValue;
- (void)flush;
- (id)extractValueFromNodes:(const void *)a0;
- (BOOL)needsUpdateForProperty:(unsigned int)a0;
- (void)prefetchValueOnSecondaryThread:(const void *)a0 cancelled:(const void *)a1;

@end

@interface FI_IPropertyCreationDateExtractor : FI_IPropertyDateExtractor

- (id)defaultValue;
- (id)extractValueFromNodes:(const void *)a0;
- (BOOL)needsUpdateForProperty:(unsigned int)a0;

@end

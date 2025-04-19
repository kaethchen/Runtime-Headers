@interface FI_IPropertyModificationDateExtractor : FI_IPropertyDateExtractor

- (id)defaultValue;
- (id)extractValueFromNodes:(const void *)a0;
- (BOOL)isApplicableToNodes:(const void *)a0;
- (BOOL)needsUpdateForProperty:(unsigned int)a0;

@end

@interface FI_TPropertyICloudShareOwnerExtractor : FI_IPropertyTextExtractor

- (id)extractValueFromNodes:(const void *)a0;
- (BOOL)isApplicableToNodes:(const void *)a0;
- (BOOL)needsUpdateForProperty:(unsigned int)a0;

@end

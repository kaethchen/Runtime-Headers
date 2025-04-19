@interface FI_TPropertyColumnPreviewSizeExtractor : FI_TPropertyLogicalSizeExtractor

- (id)defaultValue;
- (id)computeValue;
- (id)extractValueFromNodes:(const void *)a0;
- (void)prefetchValueOnSecondaryThread:(const void *)a0 cancelled:(const void *)a1;

@end

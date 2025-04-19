@interface CNContainerProviderIdentifierDescription : CNContainerPropertyDescription

- (id)key;
- (Class)valueClass;
- (BOOL)isWritable;
- (id)CNValueForContainer:(id)a0;
- (void)setCNValue:(id)a0 onContainer:(id)a1;

@end

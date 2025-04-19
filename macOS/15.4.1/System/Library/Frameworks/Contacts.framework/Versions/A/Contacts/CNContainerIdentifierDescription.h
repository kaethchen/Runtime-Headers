@interface CNContainerIdentifierDescription : CNContainerPropertyDescription

- (id)key;
- (Class)valueClass;
- (id)CNValueForContainer:(id)a0;
- (BOOL)isNonnull;
- (void)setCNValue:(id)a0 onContainer:(id)a1;

@end

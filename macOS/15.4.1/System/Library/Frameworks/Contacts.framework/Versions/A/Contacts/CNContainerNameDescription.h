@interface CNContainerNameDescription : CNContainerPropertyDescription

- (id)key;
- (BOOL)isWritable;
- (id)CNValueForContainer:(id)a0;
- (id)abcdContainerKey;
- (id)abcdContainerValueForCNValue:(id)a0;
- (BOOL)isNonnull;
- (void)setCNValue:(id)a0 onContainer:(id)a1;

@end

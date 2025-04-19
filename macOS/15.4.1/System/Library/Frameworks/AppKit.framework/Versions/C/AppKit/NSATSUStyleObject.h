@class NSMutableArray;

@interface NSATSUStyleObject : NSObject {
    struct OpaqueATSUStyle { } *style;
    NSMutableArray *exclusives;
}

- (void)dealloc;
- (id)description;
- (id)init;
- (struct OpaqueATSUStyle { } *)style;
- (void)mergeStyleInto:(id)a0;
- (void)addFeatureDescriptions:(id)a0;
- (void)addVariationDescriptions:(id)a0;
- (id)convertToDictionary;
- (id)exclusives;
- (id)initWithStyle:(struct OpaqueATSUStyle { } *)a0;
- (BOOL)isTypeNotExclusive:(unsigned short)a0;
- (void)merge:(struct OpaqueATSUStyle { } *)a0;
- (void)mergeAttributesInto:(id)a0;
- (void)mergeFontFeaturesInto:(id)a0;
- (void)mergeFontVariationsInto:(id)a0;
- (void)mergeInVariations:(struct OpaqueATSUStyle { } *)a0;
- (void)setAttributes:(unsigned int *)a0 Values:(void *)a1 ValueSizes:(unsigned long long *)a2 Count:(unsigned long long)a3;
- (void)setFeatures:(unsigned short *)a0 selectors:(unsigned short *)a1 count:(unsigned long long)a2;
- (void)setVariations:(unsigned int *)a0 Values:(int *)a1 Count:(unsigned long long)a2;
- (void)typeIsNotExclusive:(unsigned short)a0;

@end

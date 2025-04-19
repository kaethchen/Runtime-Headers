@class NSArray;

@interface FI_ISpotlightAttributesExtractor : FI_IPropertyDictionaryExtractor {
    NSArray *_attributeNames;
}

- (id)init;
- (void).cxx_destruct;
- (id)defaultValue;
- (void)flush;
- (id)attributeNamesForNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (id)attributeNamesForNodes:(const void *)a0;
- (id)extractValueFromNodes:(const void *)a0;
- (BOOL)isApplicableToNodes:(const void *)a0;
- (id)mergeAttributes:(id)a0 withNewAttributes:(id)a1 forNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a2;
- (BOOL)needsUpdateForProperty:(unsigned int)a0;
- (void)prefetchValueOnSecondaryThread:(const void *)a0 cancelled:(const void *)a1;
- (id)whichAttributeValues;

@end

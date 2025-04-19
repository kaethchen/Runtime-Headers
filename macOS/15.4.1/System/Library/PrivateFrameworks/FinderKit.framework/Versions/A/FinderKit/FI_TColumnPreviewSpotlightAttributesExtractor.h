@class NSArray;

@interface FI_TColumnPreviewSpotlightAttributesExtractor : FI_ISpotlightAttributesExtractor {
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _queryAttributesLock;
}

@property (retain, nonatomic) NSArray *queryAttributes;

- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)attributeNamesForNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (id)attributeNamesForNodes:(const void *)a0;

@end

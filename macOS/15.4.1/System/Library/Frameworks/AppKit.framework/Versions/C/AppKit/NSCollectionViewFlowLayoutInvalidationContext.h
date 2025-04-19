@interface NSCollectionViewFlowLayoutInvalidationContext : NSCollectionViewLayoutInvalidationContext {
    struct { unsigned char invalidateDelegateMetrics : 1; unsigned char invalidateAttributes : 1; } _flowLayoutInvalidationFlags;
}

@property BOOL invalidateFlowLayoutDelegateMetrics;
@property BOOL invalidateFlowLayoutAttributes;

- (id)init;

@end

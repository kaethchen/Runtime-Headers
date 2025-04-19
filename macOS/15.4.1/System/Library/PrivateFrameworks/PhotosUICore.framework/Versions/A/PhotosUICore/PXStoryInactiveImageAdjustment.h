@interface PXStoryInactiveImageAdjustment : NSObject <PXGDisplayAssetAdjustment> {
    void /* unknown type, empty encoding */ recipe;
}

@property (nonatomic, readonly) BOOL allowsUnadjustedOpportunisticDelivery;
@property (nonatomic, readonly) BOOL wantsSingleHighQualityDelivery;

- (id)copyWithZone:(void *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)applyToImage:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1;
- (long long)contentModeForProposedContentMode:(long long)a0;
- (BOOL)isEqualToDisplayAssetAdjustment:(id)a0;
- (struct CGSize { double x0; double x1; })requestSizeForProposedTargetSize:(struct CGSize { double x0; double x1; })a0;

@end

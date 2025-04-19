@interface PhotosUICore.CarouselSinglePageLayout : PXGLayout {
    void /* unknown type, empty encoding */ clippingInsets;
    void /* unknown type, empty encoding */ edgeClippingMaskEffects;
    void /* unknown type, empty encoding */ mainMaskingEffects;
    void /* unknown type, empty encoding */ updater;
}

- (id)init;
- (void).cxx_destruct;
- (void)updateIfNeeded;
- (void)updateContent;
- (void)displayScaleDidChange;
- (void)entityManagerDidChange;
- (void)updateMaskingEffects;

@end

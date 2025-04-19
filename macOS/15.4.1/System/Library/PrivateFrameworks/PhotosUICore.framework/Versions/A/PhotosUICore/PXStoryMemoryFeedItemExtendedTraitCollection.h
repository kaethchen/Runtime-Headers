@class NSShadow;

@interface PXStoryMemoryFeedItemExtendedTraitCollection : PXStoryExtendedTraitCollection {
    double _viewportCornerRadius;
    NSShadow *_viewportShadow;
    long long _userInterfaceFeature;
    double _bottomTitleContentOffset;
}

@property (readonly, nonatomic) BOOL isFullscreen;

- (void).cxx_destruct;
- (double)bottomTitleContentOffset;
- (id)initWithSpecManager:(id)a0 initialReferenceSize:(struct CGSize { double x0; double x1; })a1 isFullscreen:(BOOL)a2;
- (long long)userInterfaceFeature;
- (double)viewportCornerRadius;
- (id)viewportShadow;

@end

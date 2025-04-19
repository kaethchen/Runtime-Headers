@interface PXOneUpSettings : PXSettings

@property (nonatomic) double maximumWhitespaceWidthForInitialZoomToFill;
@property (nonatomic) BOOL hideFloatingInfoPanel;
@property (nonatomic) BOOL reverseFavoritesOneUpSortOrder;

+ (id)sharedInstance;

- (void)setDefaultValues;
- (id)parentSettings;
- (BOOL)shouldInitiallyZoomContentWithSize:(struct CGSize { double x0; double x1; })a0 toFillViewWithSize:(struct CGSize { double x0; double x1; })a1;
- (double)zoomFactorForContentWithSize:(struct CGSize { double x0; double x1; })a0 toFillViewWithSize:(struct CGSize { double x0; double x1; })a1;

@end

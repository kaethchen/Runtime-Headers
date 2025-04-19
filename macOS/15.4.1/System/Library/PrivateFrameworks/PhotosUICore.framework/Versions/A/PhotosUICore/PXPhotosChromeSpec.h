@interface PXPhotosChromeSpec : NSObject

@property (class, nonatomic, readonly) struct CGSize { double x0; double x1; } secondaryToolbarSize;
@property (class, nonatomic, readonly) double maximumAccessoryViewPadding;

+ (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })secondaryToolbarPaddingForSizeClass:(long long)a0 safeAreaInsets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a1;

- (id)init;

@end

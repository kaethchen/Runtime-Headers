@class IFColor, NSString;

@interface ISClippingRecipe : NSObject <ISCompositorRecipe>

@property (retain) IFColor *badgeTintColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)hintedBadgeRect;
- (id)hintedPaperRect;
- (id)hintedCornerSize;
- (id)hintedFontSize;
- (id)hintedPageCurlSize;
- (id)hintedShadowBlur;
- (id)hintedShadowOffset;
- (id)hintedTextRect;
- (id)layerTreeForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;

@end

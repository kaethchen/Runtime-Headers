@class NSString;

@interface ISiOSAppClipRecipe : ISiOSAppRecipe <ISCompositorRecipe>

@property BOOL shouldOnlyDrawBorder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)blurRadius;
- (id)appRect;
- (id)layerTreeForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;

@end

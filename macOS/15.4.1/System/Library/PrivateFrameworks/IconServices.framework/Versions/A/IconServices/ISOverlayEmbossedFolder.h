@class NSString;

@interface ISOverlayEmbossedFolder : NSObject <ISCompositorRecipe>

@property unsigned long long backgroundStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)embossVariant;
- (id)folderResourceName;
- (id)layerTreeForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;

@end

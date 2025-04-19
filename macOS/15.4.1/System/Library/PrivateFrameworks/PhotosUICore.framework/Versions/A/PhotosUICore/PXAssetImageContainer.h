@class PXAssetReference, PXDisplayRect, PXRegionOfInterest;

@interface PXAssetImageContainer : NSObject

@property (readonly, nonatomic) PXAssetReference *assetReference;
@property (readonly, nonatomic) PXDisplayRect *frame;
@property (readonly, nonatomic) PXRegionOfInterest *regionOfInterest;
@property (readonly, nonatomic) struct CGImage { } *imageRef;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentsRect;

+ (id)imageContainerForAsset:(id)a0 withinSelectionSnapshot:(id)a1 gridView:(id)a2 fallbackMediaProvider:(id)a3;
+ (id)imageContainersForSelectionSnapshot:(id)a0 gridView:(id)a1 fallbackMediaProvider:(id)a2 includeAllAssets:(BOOL)a3;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithAssetReference:(id)a0 frame:(id)a1 imageRef:(struct CGImage { } *)a2 contentsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 regionOfInterest:(id)a4;

@end

@class PXPhotosLayout;
@protocol PXPhotosOverlayController;

@interface PXPhotosRootLayout : PXGSplitLayout

@property (retain, nonatomic) PXPhotosLayout *photosLayout;
@property (retain, nonatomic) id<PXPhotosOverlayController> overlayController;

- (void).cxx_destruct;
- (BOOL)_isOverlayVisible;
- (id)hitTestResultForSpriteIndex:(unsigned int)a0;
- (id)initWithPhotosLayout:(id)a0 overlayController:(id)a1;
- (long long)objectReferenceLookup;
- (long long)sublayoutIndexForObjectReference:(id)a0 options:(unsigned long long)a1 updatedObjectReference:(out id *)a2;

@end

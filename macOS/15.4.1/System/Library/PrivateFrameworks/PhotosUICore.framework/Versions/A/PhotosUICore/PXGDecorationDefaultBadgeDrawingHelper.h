@class NSNumberFormatter, PXSelectionCountNumberFormatter, NSByteCountFormatter, NSDateComponentsFormatter;

@interface PXGDecorationDefaultBadgeDrawingHelper : NSObject <PXGDecorationBadgeDrawingHelper>

@property (readonly, nonatomic) NSDateComponentsFormatter *videoDurationFormatter;
@property (readonly, nonatomic) NSByteCountFormatter *byteCountFormatter;
@property (readonly, nonatomic) PXSelectionCountNumberFormatter *selectionCountFormatter;
@property (readonly, nonatomic) NSNumberFormatter *assetIndexFormatter;

- (id)init;
- (void).cxx_destruct;
- (id)cacheKeyForDecorationInfo:(struct PXGDecorationBadgeInfo { long long x0; long long x1; double x2; long long x3; long long x4; long long x5; })a0 solidColorOverlay:(id)a1 debugDecoration:(id)a2 targetSize:(struct CGSize { double x0; double x1; })a3 cornerRadius:(struct { union { struct { float x0; float x1; float x2; float x3; } x0; float x1[4]; } x0; })a4 screenScale:(double)a5 viewEnvironment:(id)a6 userInterfaceDirection:(unsigned long long)a7;
- (struct PXGDecorationBadgeInfo { long long x0; long long x1; double x2; long long x3; long long x4; long long x5; })decorationSpriteInfoForDecoratedSpriteIndex:(unsigned int)a0 decorationType:(long long)a1 decoratingLayout:(id)a2 assetDecorationInfo:(struct PXGAssetDecorationInfo { unsigned long long x0; double x1; long long x2; long long x3; })a3 overallSelectionOrder:(long long)a4 isItemSelected:(BOOL)a5 isItemHighlighted:(BOOL)a6 isItemDragged:(BOOL)a7;
- (void)drawWithDecorationInfo:(struct PXGDecorationBadgeInfo { long long x0; long long x1; double x2; long long x3; long long x4; long long x5; })a0 solidColorOverlay:(id)a1 debugDecoration:(id)a2 cornerRadius:(struct { union { struct { float x0; float x1; float x2; float x3; } x0; float x1[4]; } x0; })a3 context:(struct CGContext { } *)a4 viewport:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a5 screenScale:(double)a6 viewEnvironment:(id)a7 userInterfaceDirection:(unsigned long long)a8;

@end

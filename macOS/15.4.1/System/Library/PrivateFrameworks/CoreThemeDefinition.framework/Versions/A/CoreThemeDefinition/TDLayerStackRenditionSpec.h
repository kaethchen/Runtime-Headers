@class NSString, NSOrderedSet, TDThemeCompressionType, TDImageStackAsset;

@interface TDLayerStackRenditionSpec : TDRenditionSpec

@property (retain, nonatomic) TDImageStackAsset *asset;
@property (nonatomic) struct CGSize { double width; double height; } primitiveCanvasSize;
@property (retain, nonatomic) NSString *canvasSizeString;
@property (nonatomic) struct CGSize { double x0; double x1; } canvasSize;
@property (retain, nonatomic) NSOrderedSet *layerReferences;
@property (retain, nonatomic) TDThemeCompressionType *compressionType;

- (void)awakeFromFetch;
- (void)prepareForDeletion;
- (struct CGSize { double x0; double x1; })canvasSize;
- (BOOL)canBePackedWithDocument:(id)a0;
- (id)createCSIRepresentationWithCompression:(BOOL)a0 colorSpaceID:(unsigned long long)a1 document:(id)a2;
- (void)setCanvasSize:(struct CGSize { double x0; double x1; })a0;

@end

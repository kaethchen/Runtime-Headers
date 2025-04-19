@class NSString;

@interface AlbumImageLayer : CALayer <AMPContentDimensionsProtocolLayer, CALayerDelegate>

@property (nonatomic) struct CGSize { double width; double height; } contentsPixelDimensions;
@property (nonatomic) double inset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)actionForLayer:(id)a0 forKey:(id)a1;
- (void)expand;
- (void)setContents:(id)a0;
- (void)contract;
- (void)contentDimensions:(struct CGSize { double x0; double x1; })a0;
- (double)getContentAspectRatio;

@end

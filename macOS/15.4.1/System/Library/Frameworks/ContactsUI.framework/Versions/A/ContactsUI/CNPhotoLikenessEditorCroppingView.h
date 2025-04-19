@class CIImage;
@protocol CNPhotoLikenessEditorCroppingDataSource;

@interface CNPhotoLikenessEditorCroppingView : IKImageView2

@property (retain, nonatomic) CIImage *currentImage;
@property (nonatomic) double fittingZoom;
@property (nonatomic) long long zoomIndex;
@property (weak, nonatomic) id<CNPhotoLikenessEditorCroppingDataSource> croppingDataSource;
@property (nonatomic) BOOL shouldUpdateCropRect;
@property (nonatomic) double zoomPosition;
@property (nonatomic) double cornerRadius;

+ (struct CGPoint { double x0; double x1; })adjustProposedCenterPoint:(struct CGPoint { double x0; double x1; })a0 toKeepEdgesOfImageWithSize:(struct CGSize { double x0; double x1; })a1 fromMovingOutsideOfBoundsOfRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
+ (struct CGImage { } *)cgImageRefFromNSImage:(id)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })correctedCropRectForCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 ofImage:(struct CGImage { } *)a1 placedWithingContainerOfSize:(struct CGSize { double x0; double x1; })a2;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })fittingRectForImage:(struct CGImage { } *)a0 containerSize:(struct CGSize { double x0; double x1; })a1;
+ (double)fittingZoomForImage:(struct CGImage { } *)a0 containerSize:(struct CGSize { double x0; double x1; })a1;
+ (double)minZoomForImage:(struct CGImage { } *)a0 containerSize:(struct CGSize { double x0; double x1; })a1;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseDragged:(id)a0;
- (void)reloadData;
- (void)resetZoomFactor;
- (struct CGImage { } *)cgImageRefFromNSImage:(id)a0;
- (void)clipviewBoundsChanged:(id)a0;
- (void)getZoom:(double *)a0 center:(struct CGPoint { double x0; double x1; } *)a1 fromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (struct CGPoint { double x0; double x1; })imageCenterPoint;
- (void)setZoomFromCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateFittingZoomGivenImage:(struct CGImage { } *)a0;
- (void)updateToImage:(struct CGImage { } *)a0 withCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)updateZoomFactorWithMinZoom:(double)a0;
- (void)updateZoomPosition;
- (double)zoomFactorForCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end

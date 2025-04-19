@class KHImage, KHFrame, CAShapeLayer, CALayer, NSMutableArray, NSLock;
@protocol KHPhotoContentLayerDelegate;

@interface KHPhotoContentLayer : KHBaseLayer {
    struct CGColor { } *_contentBackgroundColor;
}

@property (readonly, nonatomic) CALayer *panArrowsLayer;
@property (readonly, nonatomic) CALayer *trimmingLayer;
@property (readonly, nonatomic) CALayer *clippingLayer;
@property (readonly, nonatomic) CALayer *imageLayer;
@property (readonly, nonatomic) CAShapeLayer *imageMaskLayer;
@property (readonly, nonatomic) BOOL needsPlaceholderImage;
@property (readonly, nonatomic) NSMutableArray *backfillOperations;
@property (readonly, nonatomic) NSLock *backfillOperationsLock;
@property (readonly, nonatomic) struct { double x0; double x1; BOOL x2; BOOL x3; } adjustedPhotoPan;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } imageRect;
@property (retain, nonatomic) KHImage *contentImage;
@property struct CGSize { double width; double height; } requestedImageSize;
@property struct CGSize { double width; double height; } imageSize;
@property (retain, nonatomic) KHFrame *photoFrame;
@property (nonatomic) struct { double top; BOOL isTopRelative; double left; BOOL isLeftRelative; double bottom; BOOL isBottomRelative; double right; BOOL isRightRelative; } bleedInsets;
@property (nonatomic) unsigned long long contentClipMode;
@property (nonatomic) struct CGColor { } *contentBackgroundColor;
@property (nonatomic) double maskOutsetLimit;
@property (nonatomic, getter=isEditing) BOOL editing;
@property (nonatomic) BOOL panArrowsHidden;
@property (nonatomic) id<KHPhotoContentLayerDelegate> photoContentDelegate;

+ (id)placeholderBackgroundColor;
+ (id)maskBackgroundColor;

- (void)dealloc;
- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)layoutSublayers;
- (void)setNeedsDisplay;
- (void)setTranslation:(struct CGPoint { double x0; double x1; })a0;
- (void)clearContents;
- (BOOL)commitEditing;
- (id)placeholderImage;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setContentsScale:(double)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)thumbnailImage;
- (void)setZoom:(double)a0;
- (void)updateImage;
- (void)willDisappear;
- (void)willAppear;
- (void)updatePanArrows;
- (id)adjustedImage:(id)a0;
- (void)backfillIfNecessaryInOperationQueue:(id)a0;
- (void)backfillInOperation:(id)a0;
- (void)backfillInOperationQueue:(id)a0;
- (void)cancelBackfill;
- (struct CGImage { } *)filterImage:(struct CGImage { } *)a0 withSize:(struct CGSize { double x0; double x1; })a1;
- (id)imageForSize:(struct CGSize { double x0; double x1; })a0;
- (id)maskTileLayer;
- (double)maximumTranslationFromEdge:(unsigned int)a0;
- (BOOL)needsBackfill;
- (void)updateContentsScale;
- (struct CGPath { } *)visiblePathForImageRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end

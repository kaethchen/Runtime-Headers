@class NSString, CAShapeLayer, CALayer, NSMutableArray;

@interface AVTouchBarTrackView : NSView <CALayerDelegate> {
    BOOL _hasRoundedCorners;
    CALayer *_containerLayer;
    CALayer *_maskLayer;
    CAShapeLayer *_maskShapeLayer;
    CAShapeLayer *_backgroundShapeLayer;
}

@property double normalizedCurrentValue;
@property double contentDurationWithinEndTimes;
@property double minTime;
@property BOOL hasRoundedCorners;
@property (readonly) NSMutableArray *previewLayers;
@property (readonly) double maximumWidth;
@property (readonly) struct CGSize { double x0; double x1; } previewLayerSize;
@property (readonly) BOOL allPreviewLayersHaveContent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)layoutSublayersOfLayer:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGPath { } *)_createPathWithRightCornersRoundedInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 cornerRadius:(double)a1;
- (id)makePreviewLayer;
- (long long)numberOfPreviewLayersForWidth:(double)a0;
- (struct CGPoint { double x0; double x1; })positionForPreviewLayerWithIndex:(long long)a0;
- (struct CGSize { double x0; double x1; })sizeForPreviewLayerWithIndex:(long long)a0;
- (void)updatePreviewLayerContent;

@end

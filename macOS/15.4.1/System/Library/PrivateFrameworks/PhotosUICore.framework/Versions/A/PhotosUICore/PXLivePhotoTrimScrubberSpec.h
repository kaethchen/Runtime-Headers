@class NSColor;

@interface PXLivePhotoTrimScrubberSpec : NSObject

@property (nonatomic) double scrubberHeight;
@property (nonatomic) double handleTouchDistance;
@property (nonatomic) double handleWidth;
@property (nonatomic) double handleHeight;
@property (nonatomic) double handleAnchorX;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } filmstripViewInsets;
@property (nonatomic) double loupeVerticalInset;
@property (nonatomic) double loupeOuterCornerRadius;
@property (nonatomic) double loupeInnerCornerRadius;
@property (nonatomic) double playheadWidth;
@property (nonatomic) double filmstripCornerRadius;
@property (retain, nonatomic) NSColor *filmstripBorderColor;
@property (retain, nonatomic) NSColor *disabledOverlayColor;
@property (nonatomic) BOOL fallbackToKeyTimeTracking;
@property (nonatomic) BOOL fallbackToPlayheadTracking;
@property (nonatomic) BOOL useMiniScrubberHeight;

- (id)init;
- (void).cxx_destruct;
- (void)_updateScrubberHeight;

@end

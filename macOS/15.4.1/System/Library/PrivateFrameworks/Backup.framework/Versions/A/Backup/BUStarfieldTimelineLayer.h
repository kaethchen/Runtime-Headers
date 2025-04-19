@class NSObject;
@protocol BUStarfieldTimelineItem, BUStarfieldTimelineDelegate, BUStarfieldTimelineDataSource;

@interface BUStarfieldTimelineLayer : CALayer {
    void *_reserved[3];
}

@property (nonatomic) NSObject<BUStarfieldTimelineDataSource> *timelineDataSource;
@property (weak, nonatomic) NSObject<BUStarfieldTimelineDelegate> *timelineDelegate;
@property (retain, nonatomic) NSObject<BUStarfieldTimelineItem> *selectedItem;

- (void)dealloc;
- (id)init;
- (struct BUTimelinePrivate { id x0; id x1; id x2; id x3; id x4; } *)privateData;
- (void)setPosition:(struct CGPoint { double x0; double x1; })a0;
- (id)accessibilityActionDescription:(id)a0;
- (void)setAnchorPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (id)accessibilityFocusedUIElement;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)accessibilityIsAttributeSettable:(id)a0;
- (BOOL)accessibilityIsIgnored;
- (void)accessibilityPerformAction:(id)a0;
- (void)accessibilitySetValue:(id)a0 forAttribute:(id)a1;
- (void)reloadData;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)aboutToTearDown;
- (void)scrollWheel:(id)a0 atLocation:(struct CGPoint { double x0; double x1; })a1 byDelta:(struct CGSize { double x0; double x1; })a2;
- (void *)timelineControl;
- (void)handleReloadData;
- (BOOL)mouseDown:(id)a0 atLocation:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)mouseDragged:(id)a0 toLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)mouseMoved:(id)a0 toLocation:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)mouseUp:(id)a0 atLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)notifyItemWasSelected:(id)a0;
- (void)tearDownPrivateData;

@end

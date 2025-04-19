@class NSString, NSMutableArray, NSMutableDictionary;

@interface AXVNumberedLabeledElementsOverlayController : NSObject <AXVLabeledElementsOverlayControllerProtocol>

@property (retain, nonatomic) NSMutableArray *_addedLabelElements;
@property (retain, nonatomic) NSMutableDictionary *_cachedLabeledBadgeViewsForArrowOrientationNone;
@property (retain, nonatomic) NSMutableDictionary *_cachedLabeledBadgeViewsForArrowOrientationRight;
@property (retain, nonatomic) NSMutableDictionary *_badgeWindowControllers;
@property (getter=isActive) BOOL active;
@property (nonatomic) double xOffset;
@property (nonatomic) double yOffset;
@property (nonatomic) BOOL prefersNoArrowBadge;
@property (nonatomic) BOOL namesMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)labeledElements;
- (void)addLabeledElements:(id)a0;
- (void)clearLabeledElements;
- (void)hideLabeledElements;
- (void)showLabeledElements;
- (id)_findLabeledElementsThatIntersectLabelRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromLabeledElement:(id)a1 justLabelRect:(BOOL)a2 additionalElements:(id)a3;
- (id)_labeledBadgeViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 label:(id)a1 arrowOrientation:(unsigned long long)a2 badgePresentation:(unsigned long long)a3;
- (void)_optimizeLabeledElements:(id)a0 startingNumberedLabelsAtIndex:(unsigned long long)a1 forLabelMode:(unsigned long long)a2;
- (void)_updateOverlayWindowWithNewLabeledElements:(id)a0;

@end

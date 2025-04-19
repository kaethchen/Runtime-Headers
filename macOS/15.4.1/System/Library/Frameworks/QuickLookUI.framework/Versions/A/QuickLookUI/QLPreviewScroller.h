@class NSString, CALayer, QLControlTooltip;

@interface QLPreviewScroller : NSView <CALayerDelegate, NSEditor> {
    int _mode;
    CALayer *_knobLayer;
    QLControlTooltip *_pageIndicator;
    BOOL _enableAnimation;
}

@property (nonatomic) double totalScroll;
@property (nonatomic) double currentScroll;
@property unsigned long long numberOfPages;
@property unsigned long long currentPage;
@property long long indicatorWindowLevel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (void)_aquaScrollerBehaviorChanged:(id)a0;
+ (double)scrollerWidth;
+ (id)keyPathsForValuesAffectingCurrentPage;
+ (id)keyPathsForValuesAffectingPageIndicatorText;
+ (double)minKnobHeight;

- (void)dealloc;
- (void).cxx_destruct;
- (void)unbind:(id)a0;
- (unsigned int)_CAViewFlags;
- (id)actionForLayer:(id)a0 forKey:(id)a1;
- (void)bind:(id)a0 toObject:(id)a1 withKeyPath:(id)a2 options:(id)a3;
- (void)drawLayer:(id)a0 inContext:(struct CGContext { } *)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;
- (void)layoutSublayersOfLayer:(id)a0;
- (void)mouseDown:(id)a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)unbindAll;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_innerTrackRect;
- (void)_hidePageIndicator;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_knobRect;
- (void)_showPageIndicatorWithAnchor:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_trackRect;
- (void)_updateScroll:(double)a0;
- (id)pageIndicatorText;

@end

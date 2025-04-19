@class QLScrollController, NSString, QLDrawingLayer, NSMapTable, CALayer, NSObject, CAScrollLayer;
@protocol QLPreviewPageNavigationDataSource;

@interface QLPreviewPageNavigationView : NSView <QLScrollable, QLDrawingLayerDelegate> {
    NSObject<QLPreviewPageNavigationDataSource> *_dataSource;
    BOOL _enableUpdates;
    BOOL _needsUpdate;
    NSMapTable *_pageThumbnails;
    CALayer *_rootLayer;
    CAScrollLayer *_pagesLayer;
    QLScrollController *_scrollController;
    int _gradientPositions;
    double _deltas;
    double _scrollValue;
}

@property (retain) QLDrawingLayer *topGradientLayer;
@property (retain) QLDrawingLayer *bottomGradientLayer;
@property id<QLPreviewPageNavigationDataSource> dataSource;
@property BOOL enableUpdates;
@property double verticalScrollValue;
@property (readonly) double verticalKnobProportion;
@property double horizontalScrollValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyPathsForValuesAffectingVerticalKnobProportion;
+ (id)keyPathsForValuesAffectingVerticalScrollValue;

- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (unsigned int)_CAViewFlags;
- (BOOL)acceptsFirstResponder;
- (id)accessibilityChildren;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)accessibilityIdentifier;
- (id)accessibilityRole;
- (id)accessibilitySelectedChildren;
- (BOOL)becomeFirstResponder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isAccessibilityElement;
- (BOOL)isAccessibilityEnabled;
- (void)mouseDown:(id)a0;
- (BOOL)mouseDownCanMoveWindow;
- (BOOL)resignFirstResponder;
- (void)resizeWithOldSuperviewSize:(struct CGSize { double x0; double x1; })a0;
- (void)scrollWheel:(id)a0;
- (void)viewDidChangeEffectiveAppearance;
- (void)viewWillMoveToWindow:(id)a0;
- (void)_setCurrentPage:(unsigned long long)a0;
- (struct CGSize { double x0; double x1; })_pageSize;
- (void)_updatePages;
- (BOOL)_getFullHeight:(double *)a0 visibleHeight:(double *)a1;
- (id)_pageThumbnailForPage:(unsigned long long)a0;
- (void)_refreshPageThumbnailsReplacingExisting:(BOOL)a0;
- (void)_scrollToValue:(double)a0 animate:(BOOL)a1;
- (int)_selectedHighlightMode;
- (void)_setupGradientLayers;
- (void)_updatePageThumbnails;
- (void)_updateScroll;
- (void)_updateThumbnailForPage:(long long)a0 replaceExisting:(BOOL)a1;
- (void)_updateWithUpdatedDataSource;
- (void)drawDrawingLayer:(id)a0 inContext:(struct CGContext { } *)a1;
- (BOOL)mustHandleEvent:(id)a0;
- (void)refreshThumbnails;
- (void)scaleFactorDidChange:(id)a0;
- (void)updateThumbnailForPage:(long long)a0;

@end

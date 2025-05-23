@class NSString, QCCompositionPickerInfos, NSArray, NSMutableDictionary;

@interface QCCompositionPickerController : NSObject {
    long long _orderedState;
    BOOL _isScrolling;
    QCCompositionPickerInfos *_infos;
    struct __CFDictionary { } *_views;
    long long _pendingSelection;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _expandedGridFrame;
    id _delegate;
    NSArray *_originalCompositions;
    NSMutableDictionary *_optimizedDefaultValues;
    BOOL _disableOptimizations;
}

@property long long currentPage;
@property (retain) NSString *lastUpdatedDefaultKey;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } selectionZoomRect;
@property long long pickerLayoutState;
@property long long orderedState;
@property float windowContentsScale;

- (void)dealloc;
- (void)finalize;
- (void)setDelegate:(id)a0;
- (void)animationDidStart:(id)a0;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (id)cellAtIndex:(long long)a0;
- (struct CGSize { double x0; double x1; })cellSize;
- (id)cells;
- (BOOL)isAnimating;
- (BOOL)keyDown:(id)a0;
- (BOOL)mouseDown:(struct CGPoint { double x0; double x1; })a0;
- (void)setAllowsEmptySelection:(BOOL)a0;
- (void)setBackgroundColor:(id)a0;
- (void)setCellBackgroundColor:(id)a0;
- (void)setDrawsBackground:(BOOL)a0;
- (void)setNumberOfColumns:(unsigned long long)a0;
- (void)setSelectionMode:(long long)a0;
- (void)startAnimation;
- (void)stopAnimation;
- (BOOL)isScrolling;
- (void)wakeup;
- (struct CGSize { double x0; double x1; })gridSize;
- (void)setAllowsIdentitySelection:(BOOL)a0;
- (void)setAllowsLayoutAnimations:(BOOL)a0;
- (void)setCompositionAspectRatio:(struct CGSize { double x0; double x1; })a0;
- (void)setCompositionsFromRepositoryWithProtocol:(id)a0 andAttributes:(id)a1 sortedBy:(id)a2;
- (void)setDefaultValue:(id)a0 forInputKey:(id)a1;
- (void)setNumberOfRows:(unsigned long long)a0;
- (void)setSelectedComposition:(id)a0;
- (void)setZoomsOnSelection:(BOOL)a0;
- (long long)cellsCount;
- (void)pauseAnimation:(BOOL)a0;
- (void)setFillsPicker:(BOOL)a0;
- (id)_compositionsWithIdentity:(id)a0;
- (void)_forceUpdateCompositions;
- (void)_handleSelectionInFocusRingMode:(long long)a0;
- (void)_handleSelectionInZoomMode:(long long)a0;
- (void)_newCompositionsDidLoad:(id)a0;
- (id)_newOptimizedDefaultValue:(id)a0 forInputKey:(id)a1 cellSize:(struct CGSize { double x0; double x1; })a2;
- (void)_pageChanged:(long long)a0 direction:(long long)a1;
- (unsigned long long)_pagesCountForCompositions:(id)a0;
- (unsigned long long)_pagesCountforCompositionsCount:(unsigned long long)a0;
- (void)_repositoryDidUpdate:(id)a0;
- (void)_resetGrid;
- (void)_resetGrid:(BOOL)a0;
- (id)_setupGridWithCompositions:(id)a0;
- (void)_updateOptimizedDefaultValues;
- (unsigned long long)compositionIndexForPage:(unsigned long long)a0;
- (id)compositionsAtPage:(long long)a0;
- (id)defaultValueForInputKey:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })expandedGridFrame;
- (BOOL)flipCellsHorizontally;
- (unsigned long long)gotoNextPage;
- (unsigned long long)gotoNextPage:(id)a0;
- (unsigned long long)gotoPreviousPage;
- (unsigned long long)gotoPreviousPage:(id)a0;
- (long long)gridCapacity;
- (id)initWithInfos:(id)a0;
- (id)layerAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)optimizesParameters;
- (unsigned long long)pagesCount;
- (id)pickerInfos;
- (void)registerView:(id)a0 name:(id)a1;
- (void)relayoutPicker;
- (void)resetDefaultInputValues;
- (void)resumeAnimation:(BOOL)a0;
- (id)selectedComposition;
- (void)setAllowsIdentitySelection:(BOOL)a0 relayout:(BOOL)a1;
- (void)setExpandedGridFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFlipCellsHorizontally:(BOOL)a0;
- (void)setMaxAnimationFrameRate:(float)a0;
- (void)setOptimizesParameters:(BOOL)a0;
- (void)setSelectedCompositionIndex:(long long)a0;
- (void)setSelectedCompositionIndex:(long long)a0 direction:(long long)a1;
- (void)setSelectedCompositionIndexInsideGrid:(long long)a0;
- (void)setSelectedCompositionIndexValue:(id)a0;
- (void)setShowsCompositionNames:(BOOL)a0;
- (BOOL)setValue:(id)a0 forInputKey:(id)a1 composition:(id)a2;
- (void)sleep;
- (id)viewForName:(id)a0;

@end

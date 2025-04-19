@class NSEvent;

@interface IKImageBrowserCoverFlowGrid : IKImageBrowserFloatingGroupGrid {
    NSEvent *_lastScrollEvent;
    double _scrollVelocity;
    float _scrollPosition;
    float _scrollOffset;
    id _reserved;
    id _currentAnimation;
    struct __CFDictionary { } *_indexToOrderedIndex;
    struct __CFDictionary { } *_indexToVisibleIndex;
    double _cachedOffset;
    unsigned char _cachedOffsetValid : 1;
}

@property double scrollPosition;
@property double scrollOffset;

- (void)dealloc;
- (void)invalidate;
- (double)offset;
- (int)columnCount;
- (struct CGSize { double x0; double x1; })margin;
- (void)scrollIndexToVisible:(long long)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })dataSourceRange;
- (void)flushAnimations;
- (double)sideCellsMargin;
- (id)_cellIndexesInRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
- (double)_offsetForIndex:(int)a0;
- (void)_scrollTo:(int)a0 snapMode:(BOOL)a1 initialVelocity:(double)a2;
- (void)adjustHorizontalOffsetIfNeeded;
- (struct CGSize { double x0; double x1; })adjustedMargin;
- (void)animationFinished:(id)a0;
- (int)cellIndexAtColumn:(int)a0 andRow:(int)a1;
- (id)clientIndexes;
- (id)collapsedIndexesWithColumnCount:(unsigned long long)a0;
- (int)columnAtX:(double)a0;
- (BOOL)coverflowMode;
- (void)endGesture:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })facingRange;
- (int)indexOfHeaderMasterCell;
- (unsigned long long)indexToRenderForNonOrderedIndex:(unsigned long long)a0;
- (BOOL)isInOverflow;
- (int)offsetIndex;
- (void)prepareCoverflowLayout:(id)a0;
- (void)prepareRenderingOrderingWithIndexes:(id)a0;
- (void)removeAnimationIfAny;
- (void)resetHorizontalOffset;
- (float)rotationAtX:(double)a0;
- (int)screenColumnAtIndex:(unsigned long long)a0;
- (double)scrollPositionWithOverflow;
- (void)scrollTo:(int)a0;
- (void)scrollWheel:(id)a0 gesture:(BOOL)a1;
- (double)sideCellsWidth;
- (double)snapPositionForPosition:(double)a0;
- (double)translationInColumnAtX:(double)a0;
- (double)xAtColumn:(int)a0;

@end

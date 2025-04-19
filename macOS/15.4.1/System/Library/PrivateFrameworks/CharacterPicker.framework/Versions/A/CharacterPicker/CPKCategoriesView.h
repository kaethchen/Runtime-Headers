@class NSImage, CPKScrollEnclosureView, CPKBaseMatrix;

@interface CPKCategoriesView : NSView {
    long long _categoryCount;
    CPKBaseMatrix *_fixedCategories;
    CPKBaseMatrix *_scrollableCategories;
    CPKScrollEnclosureView *_scrollEnclosure;
    BOOL _isRTLLayout;
    long long _separatorIndex;
    long long _scrollerIndex;
    long long _lastSelectedIndex;
    NSImage *_nextPageIndicator;
    NSImage *_prevPageIndicator;
    NSImage *_dividerImage;
}

@property (nonatomic, getter=isEnabled) BOOL enabled;

- (void)dealloc;
- (id)state;
- (void)setState:(id)a0;
- (BOOL)allowsVibrancy;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setEnabled:(BOOL)a0 atIndex:(long long)a1;
- (void)_selectedCatageoryIndex:(long long)a0 byUser:(BOOL)a1;
- (void)setCategoryTitles:(id)a0 descriptions:(id)a1;
- (long long)_categoryIndexFromCellIndex:(long long)a0 inMatrix:(id)a1;
- (long long)_cellIndexFromCategoryIndex:(long long)a0 outMatrix:(id *)a1;
- (void)_scrollToShowCategory:(long long)a0 animate:(BOOL)a1 withCompletion:(id /* block */)a2;
- (BOOL)_shouldIgnoreUserSelectionOnMatrix:(id)a0;
- (id)bundleResourceImageWithName:(id)a0;
- (void)expansionButtonClicked;
- (void)fillCategoryInfo:(id /* block */)a0;
- (long long)initialSelectionForState:(id)a0;
- (void)myDefaultAction:(id)a0;
- (void)scrollItemClicked:(id)a0;
- (id)selectedCategoryAXElement;
- (long long)selectedCategoryIndex;
- (void)setSelectedCategoryIndex:(long long)a0;

@end

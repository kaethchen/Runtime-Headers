@class NSArray, NSMutableArray;

@interface NSToolbarItemGroupView : NSView {
    NSArray *_subitems;
    NSMutableArray *_wrapperViews;
    struct __NSToolbarLayoutMetrics { double firstItemViewerInset; double lastItemViewerInset; double interItemViewerSpacing; double toolbarHeight; } _metrics;
    unsigned long long _controlSize;
}

@property (copy) NSArray *subitems;
@property struct __NSToolbarLayoutMetrics { double x0; double x1; double x2; double x3; } metrics;

- (void).cxx_destruct;
- (void)layout;
- (void)_configureWrapperViews;
- (void)_layoutWrapperViewsWithAttributes:(id)a0;
- (BOOL)_moveInDirection:(long long)a0;
- (id)_selectableToolbarViews;
- (id)declaredLayoutConstraints;
- (void)moveLeft:(id)a0;
- (void)moveRight:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForItem:(id)a0;
- (void)sendAction;

@end

@class NSView, NSMapTable;

@interface NSToolbarSnapshotContainer : NSView {
    NSView *_contentView;
    NSMapTable *_decorationViewsToContentViews;
}

- (void).cxx_destruct;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (id)initWithContentView:(id)a0 decorationViewsToContentViews:(id)a1;

@end

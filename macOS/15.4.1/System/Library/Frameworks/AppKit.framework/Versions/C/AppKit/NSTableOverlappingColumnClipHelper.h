@class NSGraphicsContext, NSTableView;

@interface NSTableOverlappingColumnClipHelper : NSObject {
    NSGraphicsContext *_graphicsContext;
    NSTableView *_tableView;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _origClipRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _currClipRect;
    BOOL _isClipping;
}

- (void)dealloc;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })currentClipRect;
- (void)clearClipping;
- (BOOL)clipForDrawingRow:(long long)a0 column:(long long)a1;
- (id)initWithTableView:(id)a0 clipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end

@class NSTableViewStyleData;

@interface AppKit._NSSuggestionsMenuTableView : NSTableView {
    void /* unknown type, empty encoding */ menuTableViewDelegate;
    void /* unknown type, empty encoding */ shouldHighlightRowsOnHover;
    void /* unknown type, empty encoding */ trackingArea;
    void /* unknown type, empty encoding */ isSettingStyleData;
}

@property (nonatomic, retain) NSTableViewStyleData *_styleData;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)rightMouseDown:(id)a0;
- (void)_setStyleData:(id)a0;
- (BOOL)_shouldUseSecondaryHighlightColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)keyDown:(id)a0;
- (void)mouseDown:(id)a0;
- (void)mouseDragged:(id)a0;
- (void)mouseExited:(id)a0;
- (void)mouseMoved:(id)a0;
- (void)mouseUp:(id)a0;
- (void)rightMouseDragged:(id)a0;
- (void)rightMouseUp:(id)a0;
- (void)selectRowIndexes:(id)a0 byExtendingSelection:(BOOL)a1;
- (void)viewDidMoveToWindow;

@end

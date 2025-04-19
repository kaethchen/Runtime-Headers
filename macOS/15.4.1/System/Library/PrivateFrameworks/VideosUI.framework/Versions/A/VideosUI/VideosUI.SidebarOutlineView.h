@class NSMenu;

@interface VideosUI.SidebarOutlineView : BaseSidebarOutlineView {
    void /* unknown type, empty encoding */ contextMenuDelegate;
    void /* unknown type, empty encoding */ rowReselectionDelegate;
    void /* unknown type, empty encoding */ libraryItemForExternalDrop;
    void /* unknown type, empty encoding */ contextualRect;
    void /* unknown type, empty encoding */ pendingMenu;
}

@property (nonatomic, retain) NSMenu *menu;
@property (nonatomic, readonly) BOOL acceptsFirstResponder;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)draggingExited:(id)a0;
- (id)accessibilityLabel;
- (void)didCloseMenu:(id)a0 withEvent:(id)a1;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)menuForEvent:(id)a0;
- (void)mouseDown:(id)a0;

@end

@class NSBox, NSMutableSet;
@protocol KHEditorViewDelegate;

@interface KHEditorView : UXView

@property (readonly, nonatomic) NSMutableSet *separators;
@property (nonatomic) NSBox *resizingSeparator;
@property (weak, nonatomic) id<KHEditorViewDelegate> delegate;

- (void).cxx_destruct;
- (void)layout;
- (void)cursorUpdate:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseDown:(id)a0;
- (void)mouseDragged:(id)a0;
- (void)mouseUp:(id)a0;
- (void)resetCursorRects;
- (id)addSeparatorVertical:(BOOL)a0;
- (id)cursorForSeparator:(id)a0;

@end

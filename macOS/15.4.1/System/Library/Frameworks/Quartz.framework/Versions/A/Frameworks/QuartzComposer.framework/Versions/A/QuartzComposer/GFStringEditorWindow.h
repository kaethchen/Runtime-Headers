@class NSView;

@interface GFStringEditorWindow : NSWindow {
    NSView *_editingView;
}

- (void)dealloc;
- (id)init;
- (void)setSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })size;
- (BOOL)canBecomeKeyWindow;
- (void)sendEvent:(id)a0;
- (void)setEditingView:(id)a0;
- (id)editingView;

@end

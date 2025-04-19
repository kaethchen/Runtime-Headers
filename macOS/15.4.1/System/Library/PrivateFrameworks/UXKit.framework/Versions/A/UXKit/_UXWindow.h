@protocol _UXWindowDelegate;

@interface _UXWindow : NSWindow

@property (weak) id<_UXWindowDelegate> delegate;

- (void)dealloc;
- (id)_getActiveUndoManager;
- (void)beginCriticalSheet:(id)a0 completionHandler:(id /* block */)a1;
- (void)beginSheet:(id)a0 completionHandler:(id /* block */)a1;
- (void)cancelOperation:(id)a0;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)makeFirstResponder:(id)a0;
- (void)recalculateKeyViewLoop;
- (void)tintColorDidChange;

@end

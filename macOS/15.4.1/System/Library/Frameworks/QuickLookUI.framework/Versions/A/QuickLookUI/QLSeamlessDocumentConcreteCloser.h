@class NSDictionary, NSWindow;

@interface QLSeamlessDocumentConcreteCloser : QLSeamlessDocumentCloser {
    NSDictionary *_displayState;
    BOOL _isTerminating;
}

@property (weak) NSWindow *window;
@property unsigned int launcherPort;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_applicationWillTerminate:(id)a0;
- (BOOL)isAnimating;
- (id)displayState;
- (void)setDisplayState:(id)a0;
- (void)closeWithContentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 block:(id /* block */)a1;

@end

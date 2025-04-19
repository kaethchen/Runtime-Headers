@class NSWindow;

@interface _NSFullScreenTileWindowProxyLayer : CALayer {
    unsigned int _wid;
    NSWindow *_window;
}

- (void)dealloc;
- (id)window;
- (id)copyWithSameContents;
- (id)initWithWindowID:(unsigned int)a0;
- (unsigned int)windowID;

@end

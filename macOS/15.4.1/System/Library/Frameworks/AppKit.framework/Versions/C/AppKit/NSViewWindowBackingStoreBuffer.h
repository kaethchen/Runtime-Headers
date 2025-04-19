@class NSImage, NSWindow;

@interface NSViewWindowBackingStoreBuffer : NSViewBuffer {
    NSWindow *_window;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _windowRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _savedRect;
    NSImage *_savedImage;
}

- (void)dealloc;
- (BOOL)restore;
- (BOOL)cacheRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithView:(id)a0;

@end

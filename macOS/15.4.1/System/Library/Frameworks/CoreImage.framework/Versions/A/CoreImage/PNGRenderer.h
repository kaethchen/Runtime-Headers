@interface PNGRenderer : CGRenderer {
    struct __CFURL { } *fullURL;
    struct CGColor { } *background;
    struct CGColorSpace { } *colorSpace;
}

- (void)dealloc;
- (id)init;
- (void)setFileURL:(id)a0;
- (struct CGImage { } *)cgimage;
- (void)flushRender;
- (BOOL)setCanvasWidth:(unsigned int)a0 height:(unsigned int)a1;

@end

@class QCImagePort_Cache;

@interface QCOpenGLPort_Image : QCImagePort <QCOpenGLPort> {
    QCImagePort_Cache *_texturePort;
    void *_unused6[4];
}

- (void)dealloc;
- (void)_clearTexture;
- (id)initWithNode:(id)a0 arguments:(id)a1;
- (void)setOnOpenGLContext:(id)a0;
- (void)setOnOpenGLContext:(id)a0 unit:(unsigned int)a1;
- (void)setOnOpenGLContext:(id)a0 unit:(unsigned int)a1 fromBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 withTarget:(unsigned int)a3 mipmappingLevels:(unsigned long long)a4 matrix:(double *)a5;
- (void)setOnOpenGLContext:(id)a0 unit:(unsigned int)a1 withBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 transformation:(id)a3 target:(unsigned int)a4 mipmappingLevels:(unsigned long long)a5 matrix:(double *)a6;
- (void)setRawValue:(id)a0;
- (id)tooltipString;
- (void)unsetOnOpenGLContext:(id)a0;
- (void)unsetOnOpenGLContext:(id)a0 unit:(unsigned int)a1;

@end

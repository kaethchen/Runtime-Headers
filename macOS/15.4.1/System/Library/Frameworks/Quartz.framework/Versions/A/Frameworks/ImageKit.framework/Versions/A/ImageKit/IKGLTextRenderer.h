@class IKGLTextSubpixelShader, IKGLTextCache, NSMutableArray, IKGLTextGenerator;

@interface IKGLTextRenderer : NSObject {
    double _scaleFactor;
    BOOL _enableSubpixelAntialiasing;
    IKGLTextGenerator *_textGenerator;
    struct __CFDictionary { } *_deferredStrings;
    NSMutableArray *_attributes;
    IKGLTextCache *_cache;
    int _generatedTextCount;
    int _cachedTextCount;
    BOOL _subpixelAntialiasingSupported;
    IKGLTextSubpixelShader *_subpixelCopy;
    IKGLTextSubpixelShader *_subpixelSover;
    int _viewportWidth;
    int _viewportHeight;
    BOOL _needsSurfaceSync;
    unsigned int _surfaceID;
}

@property BOOL enableSubpixelAntialiasing;

- (void)dealloc;
- (void)finalize;
- (BOOL)flush;
- (id)cache;
- (int)cachedTextCount;
- (void)antialiasLevelChanged:(id)a0;
- (BOOL)drawText:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 attributes:(id)a2 alpha:(float)a3 deferred:(BOOL)a4;
- (void)emptyCaches;
- (int)generatedTextCount;
- (id)initWithCacheSize:(struct CGSize { double x0; double x1; })a0 scaleFactor:(double)a1;
- (void)showRenderedTextWithInfo:(id)a0 textColor:(double *)a1 alpha:(float)a2;
- (int)textXWithTextInfo:(id)a0 renderedSize:(float)a1 destinationRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;

@end

@class NSBitmapImageRep;

@interface NSIconRefImageRep : NSImageRep {
    struct OpaqueIconRef { } *_iconRef;
    unsigned int _sizeIdentifier;
    unsigned int _scaleIdentifier;
    NSBitmapImageRep *_fallbackBitmap;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)init;
- (id)methodSignatureForSelector:(SEL)a0;
- (struct OpaqueIconRef { } *)iconRef;
- (struct CGImage { } *)CGImageForProposedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 context:(id)a1 hints:(id)a2;
- (id)_fallbackBitmap;
- (unsigned int)scaleIdentifier;
- (struct CGImage { } *)_copyCGImage;
- (BOOL)_isValid;
- (BOOL)draw;
- (BOOL)hasAlpha;
- (id)initWithIconRef:(struct OpaqueIconRef { } *)a0 sizeIdentifier:(unsigned int)a1 scaleIdentifier:(unsigned int)a2;
- (long long)pixelsHigh;
- (long long)pixelsWide;
- (unsigned int)sizeIdentifier;

@end

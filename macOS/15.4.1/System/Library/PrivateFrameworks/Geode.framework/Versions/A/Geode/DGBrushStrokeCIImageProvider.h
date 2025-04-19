@class DGBrushStroke;

@interface DGBrushStrokeCIImageProvider : NSObject {
    DGBrushStroke *_stroke;
    BOOL _closed;
    int _pressureMode;
    struct PFIntRect_st { struct PFIntPoint_st { long long x; long long y; } origin; struct PFIntSize_st { unsigned long long width; unsigned long long height; } size; } _extent;
}

- (void)dealloc;
- (void)provideImageData:(void *)a0 bytesPerRow:(unsigned long long)a1 origin:(unsigned long long)a2 :(unsigned long long)a3 size:(unsigned long long)a4 :(unsigned long long)a5 userInfo:(id)a6;
- (id)initWithStroke:(id)a0 closed:(BOOL)a1 pressureMode:(int)a2;

@end

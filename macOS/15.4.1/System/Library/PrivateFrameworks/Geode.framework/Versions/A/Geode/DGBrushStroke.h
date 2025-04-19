@class NSString, NSMutableData;

@interface DGBrushStroke : NSObject <DGOperationCoding, NSCopying, NSMutableCopying> {
    float _radius;
    float _softness;
    float _opacity;
    struct PFIntRect_st { struct PFIntPoint_st { long long x; long long y; } origin; struct PFIntSize_st { unsigned long long width; unsigned long long height; } size; } _extent;
    NSMutableData *_data;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (void)applyBrush:(long long)a0 y:(long long)a1 radius:(unsigned long long)a2 softness:(double)a3 opacity:(double)a4 ROI:(struct PFIntRect_st { struct PFIntPoint_st { long long x0; long long x1; } x0; struct PFIntSize_st { unsigned long long x0; unsigned long long x1; } x1; })a5 destPtr:(char *)a6 destPtrRowBytes:(long long)a7 processor:(id)a8;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (float)opacity;
- (struct PFIntRect_st { struct PFIntPoint_st { long long x0; long long x1; } x0; struct PFIntSize_st { unsigned long long x0; unsigned long long x1; } x1; })extent;
- (float)radius;
- (unsigned long long)pointCount;
- (void)setExtent:(struct PFIntRect_st { struct PFIntPoint_st { long long x0; long long x1; } x0; struct PFIntSize_st { unsigned long long x0; unsigned long long x1; } x1; })a0;
- (float)softness;
- (struct { float x0; float x1; float x2; })pointAtIndex:(unsigned long long)a0;
- (id)_createDataFromPointArray:(id)a0;
- (id)_createPointArrayFromData:(id)a0;
- (void)_updateExtent;
- (id)ciImageTiled:(BOOL)a0 closed:(BOOL)a1 pressureMode:(int)a2;
- (id)initWithRadius:(float)a0 softness:(float)a1 opacity:(float)a2;
- (void)populateBrushStrokeKeyData:(struct { struct { float x0; float x1; float x2; } x0; struct { float x0; float x1; float x2; } x1; unsigned long long x2; } *)a0;
- (void)rasterizeToMask:(struct PFIntRect_st { struct PFIntPoint_st { long long x0; long long x1; } x0; struct PFIntSize_st { unsigned long long x0; unsigned long long x1; } x1; })a0 maskPtr:(char *)a1 maskPtrRowBytes:(long long)a2 close:(BOOL)a3 startIndex:(long long)a4 lastStampedIndex:(long long *)a5 pressureMode:(int)a6;
- (void)rasterizeToMask:(struct PFIntRect_st { struct PFIntPoint_st { long long x0; long long x1; } x0; struct PFIntSize_st { unsigned long long x0; unsigned long long x1; } x1; })a0 maskPtr:(char *)a1 maskPtrRowBytes:(long long)a2 close:(BOOL)a3 startIndex:(long long)a4 lastStampedIndex:(long long *)a5 pressureMode:(int)a6 legacySpacing:(BOOL)a7;
- (void)rasterizeToMaskWithProcessor:(id)a0 ROI:(struct PFIntRect_st { struct PFIntPoint_st { long long x0; long long x1; } x0; struct PFIntSize_st { unsigned long long x0; unsigned long long x1; } x1; })a1 maskPtr:(char *)a2 maskPtrRowBytes:(long long)a3 close:(BOOL)a4 startIndex:(long long)a5 lastStampedIndex:(long long *)a6;

@end

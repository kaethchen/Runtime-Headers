@class NSData;

@interface CUIVectorGlyphPath : NSObject <NSCopying> {
    struct CUIVectorGlyphPathLengthData { float totalLength; float *subpathLengths; struct CUIVectorGlyphPathElementLength *elementLengths; unsigned long long *elementToSubpath; unsigned long long numSubpaths; unsigned long long numElements; } _lengthData;
}

@property (readonly, retain, nonatomic) id path;
@property (readonly, retain, nonatomic) NSData *clipStrokeKeyframes;
@property (readonly, nonatomic) long long subpathCount;

+ (id)_createAdoptingPath:(struct CGPath { } *)a0 clipStrokeKeyframes:(id)a1;
+ (id)createConcatenatingPaths:(id)a0;
+ (id)createFromSubpaths:(id)a0 indices:(id)a1;
+ (id)createWithPath:(struct CGPath { } *)a0 clipStrokeKeyframeProvider:(id /* block */)a1;
+ (id)createWithPath:(struct CGPath { } *)a0 clipStrokeKeyframes:(id)a1;
+ (struct CUIVectorGlyphPathLengthData { float x0; float *x1; struct CUIVectorGlyphPathElementLength *x2; unsigned long long *x3; unsigned long long x4; unsigned long long x5; })emptyData;
+ (void)extendClipStrokeKeyframes:(id)a0 withKeyframes:(id)a1 subpathOffset:(float)a2;
+ (float *)realloc_float_array:(float *)a0 withNewCount:(unsigned long long)a1;
+ (struct CUIVectorGlyphPathElementLength { float x0; float x1; } *)realloc_length_array:(struct CUIVectorGlyphPathElementLength { float x0; float x1; } *)a0 withNewCount:(unsigned long long)a1;
+ (unsigned long long *)realloc_long_array:(unsigned long long *)a0 withNewCount:(unsigned long long)a1;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct CUIVectorGlyphPathLengthData { float x0; float *x1; struct CUIVectorGlyphPathElementLength *x2; unsigned long long *x3; unsigned long long x4; unsigned long long x5; })computeLengthData;
- (id)createCopyApplyingTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (id)createSubpaths;
- (struct CUIVectorGlyphPathLengthData { float x0; float *x1; struct CUIVectorGlyphPathElementLength *x2; unsigned long long *x3; unsigned long long x4; unsigned long long x5; })lengthData;

@end

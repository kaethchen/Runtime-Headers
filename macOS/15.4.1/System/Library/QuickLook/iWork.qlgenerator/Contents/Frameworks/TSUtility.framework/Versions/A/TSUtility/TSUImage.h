@class NSImage, TSUOnce;

@interface TSUImage : NSObject {
    struct CGImage { } *mCachedSliceableImage;
    struct __CFDictionary { } *mImageSlices;
    TSUOnce *mImageSlicesOnce;
    id mCachedSystemImage;
    TSUOnce *mCachedImageOnce;
}

@property (readonly, nonatomic) NSImage *NSImage;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;
@property (readonly, nonatomic) struct CGImage { } *CGImage;
@property (readonly, nonatomic) long long imageOrientation;
@property (readonly, nonatomic) double scale;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)imageNamed:(id)a0;
+ (id)imageWithCGImage:(struct CGImage { } *)a0;
+ (id)imageWithContentsOfFile:(id)a0;
+ (id)imageWithData:(id)a0;
+ (id)imageWithCGImage:(struct CGImage { } *)a0 scale:(double)a1 orientation:(long long)a2;
+ (id)imageWithNSImage:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEmpty;
- (id)initWithContentsOfFile:(id)a0;
- (id)initWithData:(id)a0;
- (id)TIFFRepresentation;
- (id)initWithCGImage:(struct CGImage { } *)a0;
- (id)initWithCGImage:(struct CGImage { } *)a0 scale:(double)a1 orientation:(long long)a2;
- (struct CGImage { } *)CGImageForSize:(struct CGSize { double x0; double x1; })a0;
- (id)JPEGRepresentationWithCompressionQuality:(double)a0;
- (struct CGImage { } *)CGImageForContentsScale:(double)a0;
- (id)PNGRepresentation;
- (id)initWithImageSourceRef:(struct CGImageSource { } *)a0;
- (id)initWithNSImage:(id)a0;
- (id)stretchedImageOfSize:(struct CGSize { double x0; double x1; })a0 leftCapWidth:(double)a1 rightCapWidth:(double)a2 topCapHeight:(double)a3 bottomCapHeight:(double)a4;

@end

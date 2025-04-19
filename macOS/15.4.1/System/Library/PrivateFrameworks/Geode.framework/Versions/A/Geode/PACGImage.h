@class IPAColorProfile, PACGImageMetadata;

@interface PACGImage : NSObject

@property (readonly) struct CGImage { } *CGImageRef;
@property (readonly) long long orientation;
@property (readonly) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } logicalExtent;
@property (readonly) unsigned long long width;
@property (readonly) unsigned long long height;
@property (readonly) struct CGSize { double x0; double x1; } size;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property (readonly) struct CGColorSpace { } *colorSpace;
@property (readonly) IPAColorProfile *colorProfile;
@property (retain) PACGImageMetadata *metadata;

+ (id)imageWithCGImageRef:(struct CGImage { } *)a0;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCGImageRef:(struct CGImage { } *)a0;
- (BOOL)writeToTIFF:(id)a0;
- (id)initWithCGImageRef:(struct CGImage { } *)a0 orientation:(long long)a1;
- (id)initWithCGImageRef:(struct CGImage { } *)a0 orientation:(long long)a1 logicalExtent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;

@end

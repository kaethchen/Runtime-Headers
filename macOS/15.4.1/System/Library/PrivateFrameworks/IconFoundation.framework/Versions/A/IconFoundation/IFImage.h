@class NSUUID, NSData, CALayer;

@interface IFImage : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) BOOL placeholder;
@property (readonly) NSUUID *uuid;
@property (readonly) NSData *validationToken;
@property (readonly) NSData *bitmapData;
@property (readonly) NSData *data;
@property (retain) NSData *data;
@property (retain) CALayer *CALayer;
@property BOOL largest;
@property (readonly) double dimension;
@property struct CGSize { double x0; double x1; } minimumSize;
@property BOOL placeholder;
@property unsigned long long validationFlags;
@property struct CGSize { double x0; double x1; } iconSize;
@property (readonly) struct CGSize { double x0; double x1; } size;
@property (readonly) double scale;
@property (readonly) struct CGSize { double x0; double x1; } pixelSize;
@property (readonly) struct CGImage { } *CGImage;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)imageWithContentsOfURL:(id)a0;
+ (id)createCALayereWithIFImageData:(id)a0;
+ (struct CGImage { } *)createCGImageWithBitmapData:(id)a0;
+ (struct CGImage { } *)createCGImageWithIFImageData:(id)a0;
+ (struct CGColorSpace { } *)defaultCGColorSpace;
+ (struct CGImage { } *)escapingCGImageWithCGImage:(struct CGImage { } *)a0;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithContentsOfURL:(id)a0;
- (id)uuid;
- (id)validationToken;
- (id)_init;
- (double)dimension;
- (id)initWithCGImage:(struct CGImage { } *)a0 scale:(double)a1 minimumSize:(struct CGSize { double x0; double x1; })a2 placeholder:(BOOL)a3;
- (struct CGSize { double x0; double x1; })pixelSize;
- (BOOL)_isDummyCALayerEnabled;
- (id)initWithCGImage:(struct CGImage { } *)a0 scale:(double)a1;
- (id)initWithContentsOfURL:(id)a0 scale:(double)a1;
- (id)initWithData:(id)a0 uuid:(id)a1;
- (id)initWithData:(id)a0 uuid:(id)a1 validationToken:(id)a2;
- (BOOL)writeToURL:(id)a0;

@end

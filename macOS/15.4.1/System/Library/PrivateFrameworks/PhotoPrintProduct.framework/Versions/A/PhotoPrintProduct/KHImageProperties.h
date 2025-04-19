@class NSValue;

@interface KHImageProperties : NSObject

@property (readonly, nonatomic) struct CGSize { double width; double height; } bitmapSize;
@property (readonly, nonatomic) struct CGSize { double width; double height; } pixelSize;
@property (readonly, nonatomic) unsigned long long orientation;
@property (readonly, nonatomic) NSValue *locationCoordinates;

+ (struct CGSize { double x0; double x1; })rotatedSizeForSize:(struct CGSize { double x0; double x1; })a0 orientation:(unsigned long long)a1;
+ (struct CGSize { double x0; double x1; })bitmapSizeForImageProperties:(struct __CFDictionary { } *)a0;
+ (unsigned long long)horizontallyFlippedImageOrientationForOrientation:(unsigned long long)a0;
+ (unsigned long long)imageOrientationForEXIFDataOrientation:(unsigned long long)a0;
+ (unsigned long long)imageOrientationForImageProperties:(struct __CFDictionary { } *)a0;
+ (id)locationCoordinatesForImageProperties:(struct __CFDictionary { } *)a0;
+ (id)propertiesForCGImageSource:(struct CGImageSource { } *)a0;
+ (id)propertiesForImageAtFileURL:(id)a0;
+ (unsigned long long)verticallyFlippedImageOrientationForOrientation:(unsigned long long)a0;

- (id)initWithCGImageSource:(struct CGImageSource { } *)a0;
- (id)initWithImageAtFileURL:(id)a0;

@end

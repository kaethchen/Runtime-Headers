@class NSMutableDictionary;

@interface NSButtonImageSource : NSObject <NSCoding, NSCopying> {
    NSMutableDictionary *_buttonImages;
    struct CGSize { double width; double height; } _imageSize;
    struct CGSize { double width; double height; } _focusRingImageSize;
    struct { unsigned char hasAlpha : 1; unsigned char fullEncoding : 1; unsigned int reserved : 30; } _bisFlags;
}

@property (class, readonly) NSButtonImageSource *sharedRadioButtonSource;
@property (class, readonly) NSButtonImageSource *sharedCheckButtonSource;
@property (class, readonly) NSButtonImageSource *sharedTriangleRightButtonSource;
@property (class, readonly) NSButtonImageSource *sharedTriangleLeftButtonSource;

@property (readonly) struct CGSize { double x0; double x1; } imageSize;

+ (void)initialize;
+ (id)buttonImageSourceWithName:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)name;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_findButtonImageForState:(struct NSButtonState { long long x0; BOOL x1; BOOL x2; BOOL x3; })a0;
- (void)_initImageMetadata;
- (id)_initWithImageDictionary:(id)a0;
- (id)imageForState:(struct NSButtonState { long long x0; BOOL x1; BOOL x2; BOOL x3; })a0;
- (BOOL)useDisabledEffectForState:(struct NSButtonState { long long x0; BOOL x1; BOOL x2; BOOL x3; })a0;
- (BOOL)useHighlightEffectForState:(struct NSButtonState { long long x0; BOOL x1; BOOL x2; BOOL x3; })a0;

@end

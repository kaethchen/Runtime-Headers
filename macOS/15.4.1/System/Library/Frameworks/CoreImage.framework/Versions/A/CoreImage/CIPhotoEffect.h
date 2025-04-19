@class CIImage, NSNumber;

@interface CIPhotoEffect : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (copy, nonatomic) NSNumber *inputExtrapolate;

+ (id)customAttributes;

- (id)init;
- (id)outputImage;
- (void)setDefaults;
- (int)_defaultVersion;
- (int)_maxVersion;
- (id)cubeColorSpaceName;
- (id)cubeName;
- (id)cubePath;

@end

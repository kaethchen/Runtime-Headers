@class CIImage, NSNumber, NSMutableArray;

@interface CIDiscBlur : CIFilter {
    NSMutableArray *_recipe;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputRadius;

+ (id)customAttributes;

- (void)dealloc;
- (void)setValue:(id)a0 forKey:(id)a1;
- (id)outputImage;

@end

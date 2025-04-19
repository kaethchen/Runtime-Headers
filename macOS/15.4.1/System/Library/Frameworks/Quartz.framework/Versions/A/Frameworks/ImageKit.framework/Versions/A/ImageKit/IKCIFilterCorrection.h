@class CIFilter;

@interface IKCIFilterCorrection : IKImageCorrection

@property (retain, nonatomic) CIFilter *filter;

+ (id)filterWithName:(id)a0 identifier:(id)a1;

- (void)dealloc;
- (id)description;
- (id)name;
- (void)setValue:(id)a0 forKey:(id)a1;
- (id)attributes;
- (BOOL)isIdentity;
- (void)setDefaults;
- (id)initWithClassName:(id)a0 identifier:(id)a1;
- (id)processedImage:(id)a0 ciContext:(id)a1 cgContext:(struct CGContext { } *)a2;
- (void)updateMinMax;

@end

@class NSMutableDictionary;

@interface ADImageDescriptor : NSObject {
    NSMutableDictionary *_sizeForLayout;
}

@property (readonly, nonatomic) unsigned int pixelFormat;

+ (id)descriptorForSupportedSizes:(id)a0 pixelFormat:(unsigned int)a1;
+ (id)descriptorWithDefaultSize:(struct CGSize { double x0; double x1; })a0 pixelFormat:(unsigned int)a1;

- (void).cxx_destruct;
- (unsigned long long)layoutForSize:(struct CGSize { double x0; double x1; })a0;
- (id)cloneWithDifferentFormat:(unsigned int)a0;
- (BOOL)conformedByPixelBuffer:(struct __CVBuffer { } *)a0 forLayout:(unsigned long long)a1;
- (struct CGSize { double x0; double x1; })sizeForLayout:(unsigned long long)a0;
- (BOOL)supportsLayout:(unsigned long long)a0;
- (id)customStridesForLayout:(unsigned long long)a0;
- (id)initWithSupportedSizes:(id)a0 pixelFormat:(unsigned int)a1;

@end

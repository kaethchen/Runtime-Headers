@class CIFilter;

@interface DGiPhotoEdgeBlurEffect : NSObject {
    CIFilter *_filter;
    float _level;
    float _intensity;
}

- (id)init;
- (void).cxx_destruct;
- (id)filter;
- (void)setLevel:(float)a0;
- (void)setIntensity:(float)a0;
- (void)resetValues;
- (id)createBlurImageFromImage:(id)a0 scale:(float)a1;
- (id)processImage:(id)a0 scale:(float)a1;
- (void)setWidth:(float)a0 andHeight:(float)a1;

@end

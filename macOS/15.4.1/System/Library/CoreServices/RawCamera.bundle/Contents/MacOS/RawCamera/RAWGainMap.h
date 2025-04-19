@class CIVector, NSData, CIImage, NSNumber;

@interface RAWGainMap : RAWFilter {
    CIImage *inputImage;
    NSData *inputGainMapData;
    CIVector *inputGainMapApplyRegion;
    CIVector *inputGainMapRegion;
    CIVector *inputGainMapSize;
    NSNumber *inputGainMapRowPitch;
    NSNumber *inputGainMapColPitch;
    NSNumber *inputGainMapNumPlanes;
    NSNumber *inputGainMapExecute;
    id inputColorSpace;
    CIImage *_gainMapImg;
}

- (void).cxx_destruct;
- (void)setValue:(id)a0 forKey:(id)a1;
- (id)outputImage;
- (void)setDefaults;
- (id)makeMapSampler;

@end

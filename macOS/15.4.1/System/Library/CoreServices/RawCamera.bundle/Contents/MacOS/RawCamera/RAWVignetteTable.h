@class CIImage, NSData, NSNumber;

@interface RAWVignetteTable : RAWFilter {
    CIImage *inputImage;
    NSData *inputVignetteTableData;
    NSNumber *inputVignetteTableDataSize;
    id inputColorSpace;
    CIImage *vigImg;
}

- (void).cxx_destruct;
- (void)setValue:(id)a0 forKey:(id)a1;
- (id)outputImage;
- (BOOL)makeMapImages;

@end

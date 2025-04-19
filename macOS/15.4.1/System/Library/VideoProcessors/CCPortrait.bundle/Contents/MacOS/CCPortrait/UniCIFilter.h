@class CIFilter;

@interface UniCIFilter : UniKernel

@property (retain, nonatomic) CIFilter *filter;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDevice:(id)a0;
- (id)outputImage:(id)a0;
- (id)run:(id)a0;
- (id)inputImageArray;
- (id)outputNameArray;
- (id)inputNameArray;
- (id)outputImageArray;

@end

@class NSArray;

@interface MsgImageFilter : CIFilter

@property (retain) NSArray *kernels;

+ (void)initialize;
+ (id)filterName;
+ (id)ciFilterAttributes;
+ (id)kernelArray;

- (id)init;
- (void).cxx_destruct;

@end

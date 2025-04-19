@class NSNumber;

@interface _PIParallaxClockMaterialJob : NURenderJob

@property (retain, nonatomic) NSNumber *luminanceValue;

- (void).cxx_destruct;
- (id)result;
- (BOOL)render:(out id *)a0;
- (id)scalePolicy;
- (BOOL)wantsCompleteStage;
- (BOOL)wantsOutputGeometry;
- (BOOL)wantsOutputImage;
- (BOOL)wantsRenderStage;
- (id)clockMaterialRequest;

@end

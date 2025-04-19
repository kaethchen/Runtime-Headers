@class PFParallaxLayoutConfiguration, PIParallaxClockLayoutRequest, PFPosterOrientedLayout, NSString, CIImage;

@interface _PIParallaxClockLayoutJob : NURenderJob

@property (readonly, nonatomic) PIParallaxClockLayoutRequest *clockLayoutRequest;
@property (retain, nonatomic) PFPosterOrientedLayout *layout;
@property (retain, nonatomic) PFParallaxLayoutConfiguration *layoutConfiguration;
@property (retain, nonatomic) CIImage *matteImage;
@property (retain, nonatomic) NSString *clockLayerOrder;
@property (nonatomic) unsigned long long clockIntersection;

- (void).cxx_destruct;
- (id)result;
- (BOOL)render:(out id *)a0;
- (id)initWithRequest:(id)a0;
- (BOOL)prepare:(out id *)a0;
- (id)scalePolicy;
- (BOOL)wantsCompleteStage;
- (BOOL)wantsOutputGeometry;
- (BOOL)wantsOutputImage;
- (BOOL)wantsRenderStage;
- (id)initWithParallaxClockLayoutRequest:(id)a0;

@end

@class NSArray;

@interface VNImageBasedRequestConfiguration : VNRequestConfiguration

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } regionOfInterest;
@property (copy, nonatomic) NSArray *inputFaceObservations;
@property (copy, nonatomic) NSArray *inputDetectedObjectObservations;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithRequestClass:(Class)a0;

@end

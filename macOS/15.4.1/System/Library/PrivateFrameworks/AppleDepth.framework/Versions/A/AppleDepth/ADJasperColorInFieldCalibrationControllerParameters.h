@interface ADJasperColorInFieldCalibrationControllerParameters : NSObject

@property (nonatomic) unsigned int numberOfValidSpotsForValidFrame;
@property (nonatomic) unsigned int numberOfMinimalRangeSpots;
@property (nonatomic) float thresholdDepthValue;
@property (nonatomic) float thresholdPrecOfValidDepth;
@property (nonatomic) float sceneDiversityMinDepthDiff;
@property (nonatomic) unsigned short sceneDiversityMinChangedSpots;
@property (nonatomic) float allowedDriftFromSymmetricCrop;
@property (nonatomic) float thresholdAngularVelocity;

- (id)init;

@end

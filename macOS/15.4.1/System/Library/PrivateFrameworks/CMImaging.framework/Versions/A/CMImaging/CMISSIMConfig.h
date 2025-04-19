@interface CMISSIMConfig : NSObject

@property (class, readonly) CMISSIMConfig *defaultConfig;
@property (class, readonly) CMISSIMConfig *fastConfig;

@property (nonatomic) unsigned long long allocatorCapacity;
@property (nonatomic) unsigned short windowRadius;
@property (nonatomic) float sigma;
@property (nonatomic) float luminanceCoefficient;
@property (nonatomic) float contractCoefficient;
@property (nonatomic) float structureCoefficient;
@property (nonatomic) float dataRange;
@property (nonatomic) float k1;
@property (nonatomic) float k2;

- (id)init;

@end

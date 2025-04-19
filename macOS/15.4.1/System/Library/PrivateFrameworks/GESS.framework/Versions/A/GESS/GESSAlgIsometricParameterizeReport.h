@interface GESSAlgIsometricParameterizeReport : GESSAlgReport

@property double chartingTime;
@property double initialParameterizationTime;
@property double splitParameterizationTime;
@property double chartMergingTime;
@property double fixSelfIntersectionTime;
@property double packingTime;
@property unsigned int numOfCharts;
@property unsigned int numOfPackedTextures;
@property float maximumStretchRatio;
@property float averageStretchRatio;
@property float selfIntersectionRatio;
@property int parameterizeStatus;

- (id)init;

@end

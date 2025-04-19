@interface VNShotflowNetworkANODBase : VNShotflowNetwork

+ (struct CGSize { double x0; double x1; })inputImageSize;
+ (const void *)cellStartsX;
+ (const void *)cellStartsY;
+ (unsigned long long)mumberBinsNegativeMaxout;
+ (float)nonSquareRollDefault;
+ (float)nonSquareYawDefault;
+ (unsigned long long)numberMaxoutLayers;
+ (BOOL)poseSquare;
+ (const void *)ratios;

- (id)initWithModelPath:(id)a0 espressoEngineID:(int)a1 espressoDeviceID:(int)a2 espressoStorageType:(int)a3 threshold:(float)a4;
- (void)initializeBuffers;

@end

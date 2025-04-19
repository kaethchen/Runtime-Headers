@interface VNShotflowNetworkANFDv1 : VNShotflowNetwork

+ (id)modelName;
+ (struct CGSize { double x0; double x1; })inputImageSize;
+ (const void *)cellStartsX;
+ (const void *)cellStartsY;
+ (const void *)importantClasses;
+ (unsigned long long)mumberBinsNegativeMaxout;
+ (unsigned long long)mumberPosClasses;
+ (unsigned long long)numberMaxoutLayers;
+ (BOOL)poseSquare;
+ (const void *)ratios;

- (id)initWithModelPath:(id)a0 espressoEngineID:(int)a1 espressoDeviceID:(int)a2 espressoStorageType:(int)a3 threshold:(float)a4;
- (void)initializeBuffers;
- (int)setInputShape:(unsigned long long)a0 height:(unsigned long long)a1;

@end

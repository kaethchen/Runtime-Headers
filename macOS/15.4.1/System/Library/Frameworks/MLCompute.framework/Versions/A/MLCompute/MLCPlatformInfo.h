@interface MLCPlatformInfo : NSObject

+ (id)buildVersion;
+ (BOOL)isInternalBuild;
+ (BOOL)isAneGraphPartitioningConfigSet;
+ (id)seedEnvVariable;
+ (id)aneGraphPartitioningConfigEnvVariable;
+ (id)aneKeepPlistEnvVariable;
+ (id)aneSaveGraphPartitioningConfig;
+ (id)aneSubType;
+ (int)aneSubTypeVersion;
+ (BOOL)aneUsageUnsupported;
+ (id)bootArgs;
+ (id)getRandomSeed;
+ (BOOL)gpuUsageUnsupported;
+ (BOOL)gpuUsageUnsupportedIncludingLowPower:(BOOL)a0;
+ (BOOL)gpuUseMPSGraphConvolution;
+ (BOOL)isAnePlistKept;
+ (BOOL)isAneSaveGraphPartitioningConfigSet;
+ (BOOL)isAneSubTypeVersionGreaterThanOrEqualTo:(unsigned long long)a0;
+ (BOOL)isRNGSeeded;
+ (id)mpsGraphConvolutionEnvVariable;
+ (BOOL)multiGPUUsageUnsupported;
+ (id)osVersion;
+ (long long)randomSeed;
+ (void)setRandomSeedTo:(id)a0;

@end

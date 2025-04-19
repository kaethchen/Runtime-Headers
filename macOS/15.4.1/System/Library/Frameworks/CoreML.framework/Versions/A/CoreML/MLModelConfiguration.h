@class MLOptimizationHints, NSString, NSDictionary, NSURL;
@protocol MTLDevice;

@interface MLModelConfiguration : NSObject <NSCopying, NSSecureCoding> {
    long long _experimentalMLE5EngineUsage;
    BOOL _usePrecompiledE5Bundle;
    long long _experimentalMLE5BNNSGraphBackendUsage;
    long long _experimentalMLE5BNNSGraphBackendUsageMultiSegment;
    NSDictionary *_e5rtDynamicCallableFunctions;
    NSDictionary *_e5rtMutableMILWeightURLs;
    unsigned long long _e5rtComputeDeviceTypeMask;
    NSString *_e5rtCustomANECompilerOptions;
    BOOL _serializesMILTextForDebugging;
    BOOL _specializationUsesMPSGraphExecutable;
    long long _experimentalMLProgramEncryptedCacheUsage;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long experimentalMLE5EngineUsage;
@property (nonatomic) BOOL usePrecompiledE5Bundle;
@property (nonatomic) long long experimentalMLE5BNNSGraphBackendUsage;
@property (nonatomic) long long experimentalMLE5BNNSGraphBackendUsageMultiSegment;
@property (copy, nonatomic) NSDictionary *e5rtDynamicCallableFunctions;
@property (copy, nonatomic) NSDictionary *e5rtMutableMILWeightURLs;
@property (nonatomic) unsigned long long e5rtComputeDeviceTypeMask;
@property (copy, nonatomic) NSString *e5rtCustomANECompilerOptions;
@property (nonatomic) BOOL serializesMILTextForDebugging;
@property (nonatomic) BOOL specializationUsesMPSGraphExecutable;
@property (nonatomic) long long experimentalMLProgramEncryptedCacheUsage;
@property BOOL allowBackgroundGPUComputeSetting;
@property (copy, nonatomic) NSString *functionName;
@property (nonatomic) long long predictionConcurrencyHint;
@property BOOL trainWithMLCompute;
@property (nonatomic) BOOL useWatchSPIForScribble;
@property (nonatomic) BOOL allowFloat16AccumulationOnGPU;
@property BOOL allowLowPrecisionAccumulationOnGPU;
@property (nonatomic) BOOL allowBackgroundGPUCompute;
@property (retain, nonatomic) id<MTLDevice> preferredMTLDevice;
@property (retain, nonatomic) id<MTLDevice> preferredMetalDevice;
@property (nonatomic) BOOL enableTestVectorMode;
@property (retain) NSDictionary *parameters;
@property (retain) NSURL *rootModelURL;
@property (nonatomic) long long profilingOptions;
@property (nonatomic) BOOL usePreloadedKey;
@property (retain, nonatomic) NSString *parentModelName;
@property (nonatomic) BOOL allowsInstrumentation;
@property (nonatomic) BOOL preparesLazily;
@property (copy) NSString *modelDisplayName;
@property long long computeUnits;
@property (copy, nonatomic) MLOptimizationHints *optimizationHints;

+ (id)defaultConfiguration;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)bnnsGraphBackendUsageToString:(long long)a0;
- (id)computeUnitsToString:(long long)a0;
- (id)experimentalMLE5EngineUsageToString:(long long)a0;
- (id)experimentalMLProgramEncryptedCacheUsageToString:(long long)a0;
- (id)initWithComputeUnits:(long long)a0;
- (BOOL)isEqualToModelConfiguration:(id)a0;
- (id)neuralEngineCompilerOptions;
- (BOOL)usesCompileTimeMPSGraphTypeInferenceForModelVersion:(id)a0;

@end

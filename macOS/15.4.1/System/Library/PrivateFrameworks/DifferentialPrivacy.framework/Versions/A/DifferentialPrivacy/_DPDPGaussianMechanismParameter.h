@class NSDictionary;

@interface _DPDPGaussianMechanismParameter : NSObject

@property (nonatomic) double cohortSigma;
@property (readonly, nonatomic) double maxCentralEpsilon;
@property (readonly, nonatomic) double maxCentralDelta;
@property (readonly, nonatomic) double overallEpsilon;
@property (readonly, nonatomic) double overallDelta;
@property (readonly, nonatomic) double sigmaAfterNormalization;
@property (readonly, nonatomic) int numChunks;
@property (readonly, nonatomic) double clippingBound;
@property (readonly, nonatomic) double overallClippingBound;
@property (readonly, nonatomic) BOOL isMomentsAccountantAlgorithm;
@property (readonly, nonatomic) long long currentCohortSize;
@property (readonly, nonatomic) long long maxCohortSize;
@property (readonly, nonatomic) long long populationSize;
@property (readonly, nonatomic) long long numIterations;
@property (readonly, nonatomic) int renyiOrder;
@property (readonly, nonatomic) BOOL isV2;
@property (readonly, copy, nonatomic) NSDictionary *metadata;

- (BOOL)isValid;
- (void).cxx_destruct;
- (id)auditedMetadata;
- (id)initWithV1Metadata:(id)a0 maxCentralEpsilon:(double)a1 maxCentralDelta:(double)a2;
- (id)initWithV2Metadata:(id)a0 maxCentralEpsilon:(double)a1 maxCentralDelta:(double)a2;

@end

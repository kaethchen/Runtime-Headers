@class NSString;

@interface _DPSymmetricRAPPORWithOHE : NSObject <_DPPrivacyBudgetAnalysis>

@property (readonly, nonatomic) unsigned int batchSize;
@property (readonly, nonatomic) double localEpsilon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)binomialPMFForN:(unsigned long long)a0 p:(double)a1 x:(unsigned long long)a2 logBinomCoef:(double)a3;
+ (double)logBinomialCoefForN:(unsigned long long)a0 x:(unsigned long long)a1 prevLogBinomCoef:(double)a2;

@end

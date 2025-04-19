@class _DPApproximateDP, NSDictionary;
@protocol _DPPrivacyBudgetAnalysis;

@interface _DPBudgetAuditor : NSObject

@property (readonly, nonatomic) _DPApproximateDP *targetADP;
@property (readonly, nonatomic) _DPApproximateDP *maxADP;
@property (readonly, nonatomic) NSDictionary *metadata;
@property (readonly, nonatomic) NSDictionary *plistParameters;
@property (readonly, nonatomic) id<_DPPrivacyBudgetAnalysis> analysis;

+ (id)budgetAuditorFromMetadata:(id)a0 plistParameters:(id)a1 error:(id *)a2;
+ (id)budgetAuditorFromMetadata:(id)a0 plistParameters:(id)a1 isInternalBuild:(BOOL)a2 error:(id *)a3;
+ (BOOL)checkMetadataLocalEpsilon:(double)a0 defaultLocalEpsilon:(double)a1 error:(id *)a2;
+ (BOOL)containValidDPConfigInMetadata:(id)a0 error:(id *)a1;
+ (BOOL)isMetadataValid:(id)a0 plistParameters:(id)a1 error:(id *)a2;
+ (id)maxApproximateDPFromPlist:(id)a0 error:(id *)a1;
+ (id)targetApproximateDPFromDPConfig:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (id)auditedMetadataWithError:(id *)a0;
- (id)getSymmetricRAPPORLocalEpsilonWithError:(id *)a0;
- (id)initWithMetadata:(id)a0 plistParameters:(id)a1 targetADP:(id)a2 maxADP:(id)a3 analysis:(id)a4 error:(id *)a5;

@end

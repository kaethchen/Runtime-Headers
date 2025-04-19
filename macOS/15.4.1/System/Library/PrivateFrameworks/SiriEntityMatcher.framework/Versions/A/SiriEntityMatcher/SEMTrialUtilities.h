@interface SEMTrialUtilities : NSObject

+ (BOOL)getBoolTrialValueForTrialCli:(id)a0 withFactor:(id)a1 andNamespaceName:(id)a2;
+ (long long)getLongTrialValueForTrialCli:(id)a0 withFactor:(id)a1 andNamespaceName:(id)a2;
+ (void)refreshTrialFactors;

@end

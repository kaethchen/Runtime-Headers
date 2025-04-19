@interface SiriCoreTrialUtilities : NSObject

+ (id)experimentIdentifiersForTrialProject:(id)a0 trialNamespace:(id)a1;
+ (BOOL)getBooleanForTrialProject:(id)a0 trialNamespace:(id)a1 trialFactor:(id)a2;
+ (id)getDirectoryPathForTrialProject:(id)a0 trialNamespace:(id)a1 trialFactor:(id)a2;
+ (id)getTriLevelForTrialProject:(id)a0 trialNamespace:(id)a1 trialFactor:(id)a2;
+ (id)trialClientForProject:(id)a0;

@end

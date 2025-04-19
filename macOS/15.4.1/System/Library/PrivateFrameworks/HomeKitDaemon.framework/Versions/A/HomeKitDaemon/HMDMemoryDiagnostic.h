@interface HMDMemoryDiagnostic : NSObject

+ (id)_configureCurrentProcessLevel:(id)a0;
+ (id)_nextLevelFromPreviousLevel:(id)a0;
+ (id)_previousLevelForBuild:(id)a0;
+ (void)_recordLevel:(id)a0 forBuild:(id)a1;
+ (void)configureMemoryDiagnostic;
+ (id)memoryLevelsMB;

@end

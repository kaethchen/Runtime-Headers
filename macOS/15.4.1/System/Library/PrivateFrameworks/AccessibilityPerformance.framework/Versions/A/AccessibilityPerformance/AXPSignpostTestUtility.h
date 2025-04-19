@interface AXPSignpostTestUtility : NSObject

+ (id)_argumentsForConfiguration:(id)a0;
+ (id)_csvFromPerformanceTestResults:(id)a0 includeCSVHeaders:(BOOL)a1;
+ (id)_machineModelForLogging;
+ (void)_outputCSVForPerformanceTestResults:(id)a0 includeCSVDelimiters:(BOOL)a1 includeTestInfo:(BOOL)a2 saveToFile:(id)a3;
+ (id)_parseSignpostsUsingToolWithConfiguration:(id)a0 parseToolPath:(id)a1;
+ (id)_parseSignpostsWithConfiguration:(id)a0;
+ (id)_parseSignpostsWithConfiguration:(id)a0 parseToolPath:(id)a1;
+ (id)_timestampForLogging;
+ (id)csvFromPerformanceTestResults:(id)a0;
+ (id)filePathForAppDirectory;
+ (void)outputCSVForPerformanceTestResults:(id)a0;
+ (id)parseSignpostsWithConfiguration:(id)a0 expectedEventCount:(unsigned long long)a1 parseToolPath:(id)a2;
+ (id)parseSignpostsWithConfiguration:(id)a0 expectedEventCount:(unsigned long long)a1 useParseTool:(BOOL)a2;

@end

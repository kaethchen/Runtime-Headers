@interface ValidationMetrics : NSObject

+ (void)dispatchMetrics:(id /* block */)a0;
+ (void)sendSHA1CodeDirectoryMetricWithFilename:(id)a0 withSigningID:(id)a1 withCDHash:(id)a2 withTeamID:(id)a3 withBundleID:(id)a4 withVersion:(id)a5 withIsApple:(BOOL)a6;

@end

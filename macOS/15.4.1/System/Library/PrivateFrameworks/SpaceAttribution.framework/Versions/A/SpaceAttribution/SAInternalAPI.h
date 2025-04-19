@interface SAInternalAPI : NSObject

+ (void)getPurgeableInfo:(id)a0 options:(unsigned long long)a1 reply:(id /* block */)a2;
+ (void)addAppSizerHandler:(id /* block */)a0 reply:(id /* block */)a1;
+ (void)adjustDenomAgeBy:(unsigned long long)a0 reply:(id /* block */)a1;
+ (void)clearLastTelemetryData:(id /* block */)a0;
+ (void)disableAppSizerResultsFilteringWithReply:(id /* block */)a0;
+ (void)getAppPaths:(id)a0 options:(int)a1 reply:(id /* block */)a2;
+ (void)getAppPathsWithReplyBlock:(id /* block */)a0;
+ (void)getLastTelemetryData:(id /* block */)a0;
+ (void)importFromPlist:(id)a0 reply:(id /* block */)a1;
+ (void)removeAppSizerHandler:(id)a0 reply:(id /* block */)a1;
+ (void)runAppSizerWithReplyBlock:(id /* block */)a0;
+ (void)setAppSizerFilteringOptionsToDefaultWithReply:(id /* block */)a0;
+ (void)setAppSizerMaxRerunTimeout:(unsigned int)a0 reply:(id /* block */)a1;
+ (void)setEnableTTR:(BOOL)a0 reply:(id /* block */)a1;
+ (void)setForceSDAAbort:(id /* block */)a0;
+ (void)setForceTTR:(BOOL)a0 reply:(id /* block */)a1;
+ (void)setForceTelemetry:(id /* block */)a0;

@end

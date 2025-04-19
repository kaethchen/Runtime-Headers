@interface ISPerformanceDiagnosticsSettings : ISSettings

@property (nonatomic) BOOL shouldTracePerformance;

+ (id)sharedInstance;

- (void)setDefaultValues;

@end

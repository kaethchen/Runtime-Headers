@interface PodLoggingServer : NSObject <BackendToolLogging>

+ (id)defaultLoggingServer;

- (void)logMessage:(id)a0 logType:(int)a1;

@end

@class NSString, NSXPCConnection;

@interface CHRemotePowerLogger : NSObject <CHPowerLogging> {
    NSXPCConnection *__connection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)connection;
- (void)logModelLoaded:(unsigned long long)a0;
- (void)_teardownXPCConnection;
- (void)executeLoggingRequest:(id)a0;
- (void)logModelInference:(unsigned long long)a0 startTimestamp:(double)a1 endTimestamp:(double)a2 data:(id)a3;
- (void)logModelUnloaded:(unsigned long long)a0;
- (void)setupXPCConnectionIfNeeded;

@end

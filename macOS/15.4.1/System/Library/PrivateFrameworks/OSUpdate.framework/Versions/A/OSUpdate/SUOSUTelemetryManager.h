@class SUTelemetryManager;

@interface SUOSUTelemetryManager : NSObject

@property (retain) SUTelemetryManager *manager;

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (id)initWithManager:(id)a0;
- (id)installEvent;
- (void)reportEvent:(id)a0;
- (id)doItLaterEvent;
- (id)installRestartEvent;
- (void)reportEventFromDaemon:(id)a0;
- (id)splatRevokedEvent;

@end

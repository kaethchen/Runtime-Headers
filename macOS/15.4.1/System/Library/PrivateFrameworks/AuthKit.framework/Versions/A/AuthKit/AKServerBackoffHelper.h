@class NSString, AKServerBackoffController;

@interface AKServerBackoffHelper : NSObject <AKServerBackoffControllerDelegate> {
    AKServerBackoffController *_serverBackoffController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)_backoffContextFromRequest:(id)a0;
- (void)configureFromHeaderFields:(id)a0;
- (BOOL)isBackoffSupported;
- (void)reportTelemetryForRequest:(id)a0 backoffType:(unsigned long long)a1;
- (id)serverBackoffInfoForRequest:(id)a0;
- (BOOL)shouldBackoffRequest:(id)a0;
- (id)urlAtKey:(id)a0;

@end

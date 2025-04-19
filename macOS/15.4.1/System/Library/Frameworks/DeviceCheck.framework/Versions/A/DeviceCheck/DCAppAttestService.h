@class DCAppAttestController;

@interface DCAppAttestService : NSObject

@property (class, readonly) DCAppAttestService *sharedService;

@property (retain, nonatomic) DCAppAttestController *appAttestController;
@property (readonly, getter=isSupported) BOOL supported;

- (void).cxx_destruct;
- (void)generateKeyWithCompletionHandler:(id /* block */)a0;
- (void)attestKey:(id)a0 clientDataHash:(id)a1 completionHandler:(id /* block */)a2;
- (void)generateAssertion:(id)a0 clientDataHash:(id)a1 completionHandler:(id /* block */)a2;

@end

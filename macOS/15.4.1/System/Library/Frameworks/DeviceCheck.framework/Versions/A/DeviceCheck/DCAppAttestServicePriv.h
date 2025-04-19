@class DCAppAttestController;

@interface DCAppAttestServicePriv : NSObject

@property (class, readonly) DCAppAttestServicePriv *sharedService;

@property (retain, nonatomic) DCAppAttestController *appAttestController;
@property (readonly, getter=isSupported) BOOL supported;

- (void).cxx_destruct;
- (void)sign:(id)a0 withKey:(id)a1 completionHandler:(id /* block */)a2;
- (void)attestKey:(id)a0 teamIdentifier:(id)a1 clientDataHash:(id)a2 completionHandler:(id /* block */)a3;
- (void)generateAssertion:(id)a0 teamIdentifier:(id)a1 clientDataHash:(id)a2 completionHandler:(id /* block */)a3;
- (void)generateKeyWithTeamIdentifier:(id)a0 completion:(id /* block */)a1;

@end

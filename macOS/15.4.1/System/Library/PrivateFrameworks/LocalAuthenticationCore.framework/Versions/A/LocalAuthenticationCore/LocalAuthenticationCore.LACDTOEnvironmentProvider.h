@interface LocalAuthenticationCore.LACDTOEnvironmentProvider : NSObject <LACDTOEnvironmentProviding> {
    void /* unknown type, empty encoding */ locationProvider;
    void /* unknown type, empty encoding */ featureController;
    void /* unknown type, empty encoding */ ratchetStateProvider;
    void /* unknown type, empty encoding */ lostModeController;
}

- (id)init;
- (void).cxx_destruct;
- (void)fetchEnvironmentForPolicy:(long long)a0 options:(id)a1 completion:(id /* block */)a2;
- (id)initWithLocationProvider:(id)a0 featureController:(id)a1 ratchetStateProvider:(id)a2 lostModeController:(id)a3;

@end

@interface _TtC23ProximityAppleIDSetupUIP33_80665A0358B1FB8F2601A5B0671D5AB425InfoProviderDecoratorBase : _TtCs12_SwiftObject <ProximityAppleIDSetup.PASExtensionInfoProvider> {
    void /* unknown type, empty encoding */ underlyingInfoProvider;
}

- (void)authenticateWithAccount:(id)a0 with:(id)a1 completion:(id /* block */)a2;
- (void)didPerformLocalAuthenticationWithCompletion:(id /* block */)a0;
- (void)fetchManifestWithCompletion:(id /* block */)a0;
- (void)fetchViewDetailsWithDevicePair:(id)a0 completion:(id /* block */)a1;
- (void)shouldPerformLocalAuthenticationWithCompletion:(id /* block */)a0;
- (void)signInSucceededWithAccount:(id)a0 completion:(id /* block */)a1;

@end

@class NSString, AKAuthorizationRVSWindowController;

@interface AKAuthorizationUIProviderMacHelperImp : UIProviderMacHelper <AKAuthorizationUIProviderMacHelper> {
    AKAuthorizationRVSWindowController *_authorizationWindowController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)presentSheetOverWindow:(id)a0 context:(id)a1 completion:(id /* block */)a2;

@end

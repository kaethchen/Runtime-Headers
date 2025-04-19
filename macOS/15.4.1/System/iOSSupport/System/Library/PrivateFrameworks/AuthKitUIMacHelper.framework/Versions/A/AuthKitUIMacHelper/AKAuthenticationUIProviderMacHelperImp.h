@class NSString, AKAuthenticationRVSWindowController;

@interface AKAuthenticationUIProviderMacHelperImp : UIProviderMacHelper <AKAuthenticationUIProviderMacHelper> {
    AKAuthenticationRVSWindowController *_authenticationWindowController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dismiss;
- (void)presentPromptWithContext:(id)a0 surrogateID:(id)a1 hostWindow:(id)a2 errorHandler:(id /* block */)a3;

@end

@interface ASAuthorizationRemoteViewController : NSRemoteViewController <AuthenticationServicesHelperProtocol> {
    id /* block */ _viewServiceTerminationHandler;
}

+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void)beginAuthorizationOnEndpoint:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)beginExportFlowWithData:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)cancelExportFlow;
- (void)presentSheetForNearbyDevice:(id)a0 completionHandler:(id /* block */)a1;

@end

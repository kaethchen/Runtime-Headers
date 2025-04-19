@class ASAuthorizationRemoteViewController;

@interface ASCAuthorizationRemotePresenter : NSObject {
    ASAuthorizationRemoteViewController *_remoteViewController;
}

- (void).cxx_destruct;
- (void)presentWithWindow:(id)a0 daemonEndpoint:(id)a1 completionHandler:(id /* block */)a2;
- (void)cancelExportFlow;
- (void)presentExportFlowWithData:(id)a0 window:(id)a1 completionHandler:(id /* block */)a2;
- (void)presentForRunningPasskeyOperationUsingNearbyDevice:(id)a0 inWindow:(id)a1;
- (void)presentExportFlowWithData:(id)a0 uiWindow:(id)a1 completionHandler:(id /* block */)a2;
- (void)presentWithUIWindow:(id)a0 daemonEndpoint:(id)a1 completionHandler:(id /* block */)a2;
- (void)_requestRemoteViewController:(id /* block */)a0;

@end

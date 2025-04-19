@interface Feedback.FeedbackSession : NSObject <FBKReAuthenticationHandler, FBKDeviceDiagnosticsDelegate, FBKDraftingDelegate> {
    void /* unknown type, empty encoding */ devicesController;
    void /* unknown type, empty encoding */ draftingController;
    void /* unknown type, empty encoding */ swiftUIController;
    void /* unknown type, empty encoding */ feedbackForm;
    void /* unknown type, empty encoding */ ded;
    void /* unknown type, empty encoding */ formStub;
    void /* unknown type, empty encoding */ user;
    void /* unknown type, empty encoding */ parentViewController;
    void /* unknown type, empty encoding */ window;
    void /* unknown type, empty encoding */ startDraftCompletion;
    void /* unknown type, empty encoding */ isSaving;
}

- (id)init;
- (void).cxx_destruct;
- (void)appNeedsReAuthentication;
- (void)deviceDiagnosticsController:(id)a0 didAddAttachment:(id)a1 toDevice:(id)a2;
- (void)deviceDiagnosticsController:(id)a0 didAddDevices:(id)a1;
- (void)deviceDiagnosticsController:(id)a0 didChangeState:(long long)a1;
- (void)deviceDiagnosticsController:(id)a0 didFailToAttach:(id)a1 toDevice:(id)a2 error:(id)a3;
- (void)deviceDiagnosticsController:(id)a0 didFailToConnectToDevice:(id)a1;
- (void)deviceDiagnosticsController:(id)a0 didRemoveAttachment:(id)a1 fromDevice:(id)a2;
- (void)deviceDiagnosticsController:(id)a0 didRemoveDevice:(id)a1;
- (void)deviceDiagnosticsController:(id)a0 didUpdateAttachment:(id)a1 onDevice:(id)a2;
- (void)deviceDiagnosticsController:(id)a0 didUpdateDevice:(id)a1;
- (void)deviceDiagnosticsController:(id)a0 needsSelectionFromDevices:(id)a1 completion:(id /* block */)a2;
- (void)draftingController:(id)a0 didChangeSnapshot:(id)a1;
- (void)draftingControllerDidBeginLoading:(id)a0;
- (void)draftingControllerDidFinishLoading:(id)a0 withError:(id)a1;

@end

@interface ScreenSharingKit.SharingBackedAuthenticationPrimitives : NSObject <SFAuthenticationManagerDelegate> {
    void /* unknown type, empty encoding */ continuityDevice;
    void /* unknown type, empty encoding */ authenticationManager;
    void /* unknown type, empty encoding */ authenticationQueue;
    void /* unknown type, empty encoding */ trustDeviceContinuation;
    void /* unknown type, empty encoding */ unlockDeviceContinuation;
    void /* unknown type, empty encoding */ unlockGeneration;
    void /* unknown type, empty encoding */ resetGeneration;
    void /* unknown type, empty encoding */ disableDeviceContinuation;
    void /* unknown type, empty encoding */ approveByMacDelegate;
}

- (id)init;
- (void).cxx_destruct;
- (void)manager:(id)a0 didCompleteAuthenticationForSessionWithID:(id)a1;
- (void)manager:(id)a0 didDisableAuthenticationForSessionWithID:(id)a1;
- (void)manager:(id)a0 didEnableAuthenticationForSessionWithID:(id)a1;
- (void)manager:(id)a0 didFailAuthenticationForSessionWithID:(id)a1 error:(id)a2;
- (void)manager:(id)a0 didFailToDisableDeviceForSessionWithID:(id)a1 error:(id)a2;
- (void)manager:(id)a0 didFailToEnableDeviceForSessionWithID:(id)a1 error:(id)a2;
- (void)manager:(id)a0 didReceiveRequestToApproveForSessionID:(id)a1 info:(id)a2 completionHandler:(id /* block */)a3;
- (void)manager:(id)a0 didStartAuthenticationForSessionWithID:(id)a1;

@end

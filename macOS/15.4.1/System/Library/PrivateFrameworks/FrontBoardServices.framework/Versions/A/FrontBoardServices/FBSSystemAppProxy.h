@class BSProcessHandle, BSServiceConnectionEndpoint;

@interface FBSSystemAppProxy : FBSServiceFacilityClient {
    BSServiceConnectionEndpoint *_endpoint;
    unsigned long long _checkoutCount;
    BSProcessHandle *_processHandle;
}

+ (id)checkoutProxyWithEndpoint:(id)a0;

- (void).cxx_destruct;
- (void)checkin;
- (void)terminateApplication:(id)a0 forReason:(long long)a1 andReport:(BOOL)a2 withDescription:(id)a3 completion:(id /* block */)a4;
- (void)_handleConnect:(id)a0;
- (void)_handleTerminationReply:(id)a0 targetDescription:(id)a1 withCompletion:(id /* block */)a2;
- (void)_sendMessageType:(long long)a0 withMessage:(id /* block */)a1 withReplyHandler:(id /* block */)a2 waitForReply:(BOOL)a3;
- (id)clientCallbackQueue;
- (void)fireCompletion:(id /* block */)a0 error:(id)a1;
- (void)fireCompletion:(id /* block */)a0 openAppErrorCode:(long long)a1;
- (void)handleMessage:(id)a0 withType:(long long)a1;
- (BOOL)isPasscodeLockedOrBlocked;
- (id)processHandleForBundleID:(id)a0;
- (void)sendActions:(id)a0 withResult:(id /* block */)a1;
- (void)setKeyboardFocusApplication:(int)a0 deferringToken:(id)a1 completion:(id /* block */)a2;
- (void)shutdownWithOptions:(id)a0;
- (id)systemApplicationBundleIdentifier;
- (void)terminateApplicationGroup:(long long)a0 forReason:(long long)a1 andReport:(BOOL)a2 withDescription:(id)a3 completion:(id /* block */)a4;

@end

@interface RemoteNotificationRegistrationRequest : RemoteNotificationCenterRequest {
    id /* block */ _agentDidRegisterHandler;
}

- (void).cxx_destruct;
- (void)centerDelegateDidFinishRequest:(id)a0;
- (void)centerDelegateRequestDidFail;
- (id)initWithWebsiteIdentifier:(id)a0 completionHandler:(id /* block */)a1;

@end

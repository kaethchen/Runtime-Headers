@class NSDictionary;

@interface NEAppPushProvider : NEProvider

@property (retain) NSDictionary *providerConfiguration;

- (id)init;
- (void).cxx_destruct;
- (void)start;
- (void)reportIncomingCallWithUserInfo:(id)a0;
- (void)handleTimerEvent;
- (void)reportPushToTalkMessageWithUserInfo:(id)a0;
- (void)startWithCompletionHandler:(id /* block */)a0;
- (void)stopWithReason:(long long)a0 completionHandler:(id /* block */)a1;

@end

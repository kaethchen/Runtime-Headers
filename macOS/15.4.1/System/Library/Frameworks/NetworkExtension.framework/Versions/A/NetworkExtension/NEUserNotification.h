@class NSObject;
@protocol OS_dispatch_queue;

@interface NEUserNotification : NSObject {
    BOOL _isAlert;
    id _notification;
    id _notificationSource;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    id /* block */ _callback;
}

+ (void)cancelCurrentNotificationWithResponse:(unsigned long long)a0 queue:(id)a1 completionHandler:(id /* block */)a2;
+ (void)promptForLocalAuthenticationWithReason:(id)a0 completionQueue:(id)a1 completionHandler:(id /* block */)a2;
+ (BOOL)shouldPromptForLocalAuthentication;

- (void).cxx_destruct;
- (void)cancel;
- (id)initAndShowAddConfigurationsForApp:(id)a0 warningHeader:(const char *)a1 warning:(const char *)a2 callbackQueue:(id)a3 callbackHandler:(id /* block */)a4;
- (id)initAndShowAlertWithHeader:(id)a0 message:(id)a1 alternateMessage:(id)a2 defaultMessage:(id)a3 noBoldDefault:(BOOL)a4 usePrivacyIcon:(BOOL)a5 extensionItem:(id)a6 callbackQueue:(id)a7 callbackHandler:(id /* block */)a8;
- (id)initAndShowAuthenticationWithHeader:(id)a0 options:(id)a1 flags:(unsigned long long)a2 callbackQueue:(id)a3 callbackHandler:(id /* block */)a4;
- (id)initAndShowLocalNetworkAlertWithAppName:(id)a0 reasonString:(id)a1 extensionItem:(id)a2 callbackQueue:(id)a3 callbackHandler:(id /* block */)a4;

@end

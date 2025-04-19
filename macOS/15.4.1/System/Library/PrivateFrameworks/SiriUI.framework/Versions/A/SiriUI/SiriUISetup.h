@interface SiriUISetup : NSObject

+ (void)setLaunchAgentEnabled:(BOOL)a0;
+ (void)showImproveSiriForWindow:(id)a0 completionHandler:(id /* block */)a1;
+ (void)_showEnableAskSiriForWindow:(id)a0 completionHandler:(id /* block */)a1;
+ (void)_showImproveSiriForWindow:(id)a0 completionHandler:(id /* block */)a1;
+ (void)getSiriLanguageDataWithReply:(id /* block */)a0;
+ (void)showDisableAskSiriForWindow:(id)a0 completionHandler:(id /* block */)a1;
+ (void)showEnableAskSiriForWindow:(id)a0 completionHandler:(id /* block */)a1;
+ (void)showEnableAskSiriWithCompletionHandler:(id /* block */)a0;
+ (void)showEnableHeySiriForWindow:(id)a0 forBluetoothAddress:(id)a1 completionHandler:(id /* block */)a2;
+ (void)showEnableHeySiriForWindow:(id)a0 forBluetoothAudioDevice:(id)a1 completionHandler:(id /* block */)a2;
+ (void)showImproveSiriWithCompletionHandler:(id /* block */)a0;

@end

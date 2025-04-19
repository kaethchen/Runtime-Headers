@interface SRFStateNotifier : NSObject

+ (id)sharedNotifier;
+ (void)notifyDictationAboutToListen;
+ (void)notifyDictationListening;
+ (void)notifySiriAboutToListen;
+ (void)notifySiriDidAppear;
+ (void)notifySiriDidDisappear;
+ (void)notifySiriListening;
+ (void)notifySiriSuccess;
+ (void)notifySiriThinking;
+ (void)notifyTrainingAboutToListen;
+ (void)notifyTrainingListening;
+ (void)notifyTrainingThinking;

- (void)_notifyWithDistributedNotification:(id)a0;
- (void)_notifyWithNotification:(id)a0;

@end

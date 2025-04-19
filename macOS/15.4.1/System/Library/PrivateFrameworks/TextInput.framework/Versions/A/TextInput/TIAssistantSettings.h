@interface TIAssistantSettings : NSObject

+ (void)connectForOperations:(id /* block */)a0 withErrorHandler:(id /* block */)a1;
+ (void)dismissDialog;
+ (void)dismissEnableDataSharingPrompt;
+ (void)dismissEnableDictationPrompt;
+ (void)dismissedDataSharingWithResponse:(long long)a0;
+ (void)launchDictationSettings;
+ (void)launchKeyboardSettings;
+ (void)launchPencilSettings;
+ (void)presentDialogForType:(long long)a0 withCompletionHandler:(id /* block */)a1;
+ (void)promptReminderDataSharingWithCompletionHandler:(id /* block */)a0;
+ (void)promptToEnableDataSharingWithCompletionHandler:(id /* block */)a0;
+ (void)promptToEnableDictationWithCompletionHandler:(id /* block */)a0;
+ (void)promptToRemindDataSharingWithCompletionHandler:(id /* block */)a0;
+ (void)setTestBlock:(id /* block */)a0;

@end

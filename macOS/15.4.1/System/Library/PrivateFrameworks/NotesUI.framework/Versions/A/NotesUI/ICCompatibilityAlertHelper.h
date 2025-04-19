@interface ICCompatibilityAlertHelper : NSObject

+ (id)oneTimeAlertKeyForAccount:(id)a0;
+ (void)showAttachmentCompatibilityAlertInAccountIfNeeded:(id)a0 completion:(id /* block */)a1;
+ (void)showCompatibilityAlertForAccountIfNeeded:(id)a0 title:(id)a1 alertMessage:(id)a2 defaultButtonTitle:(id)a3 secondaryButtonTitle:(id)a4 postscript:(id)a5 hasShownAlertKey:(id)a6 minimumNotesVersion:(long long)a7 completion:(id /* block */)a8;
+ (void)showCompatibilityAlertForInlineAttachmentsInAccountIfNeeded:(id)a0 completion:(id /* block */)a1;
+ (void)showCompatibilityAlertWithDeviceMessage:(id)a0 title:(id)a1 alertMessage:(id)a2 defaultButtonTitle:(id)a3 secondaryButtonTitle:(id)a4 postscript:(id)a5 completion:(id /* block */)a6;
+ (void)suppressOneTimeAttachmentUpgradeAlertForAcccount:(id)a0;

@end

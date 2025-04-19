@class NSView, KHAlertManagerDeferralQueue, NSButtonCell;

@interface KHAlertManager : NSObject {
    NSView *mExceedsFortyAccessoryView;
    NSButtonCell *mExceedsFortyPanelCreateEmptyButtonCell;
    NSButtonCell *mExceedsFortyPanelFitAllButtonCell;
    NSButtonCell *mExceedsFortyPanelLimitButtonCell;
    KHAlertManagerDeferralQueue *_deferralQueue;
}

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)defaultAction:(id)a0;
- (id)deferAlertProxy;
- (unsigned long long)_confirmForPanel:(id)a0 suppressionKey:(id)a1 view:(id)a2;
- (void)_endSheet:(id)a0 returnCode:(int)a1 contextInfo:(void *)a2;
- (void)_processPreflightErrors:(id)a0 completionBlock:(id /* block */)a1;
- (void)_showAlertForTitle:(id)a0 message:(id)a1 accessoryView:(id)a2 view:(id)a3 defaultLabel:(id)a4 otherLabel:(id)a5 altLabel:(id)a6 suppressionKey:(id)a7 completionBlock:(id /* block */)a8;
- (void)_showAlertForTitle:(id)a0 message:(id)a1 view:(id)a2 defaultLabel:(id)a3 otherLabel:(id)a4 altLabel:(id)a5 suppressionKey:(id)a6 completionBlock:(id /* block */)a7;
- (void)alternativeAction:(id)a0;
- (void)confirmClearAllPhotosForProject:(id)a0 view:(id)a1 completionBlock:(id /* block */)a2;
- (void)confirmClearSomePhotosForProject:(id)a0 view:(id)a1 completionBlock:(id /* block */)a2;
- (void)confirmLayoutDeletionForProject:(id)a0 view:(id)a1 completionBlock:(id /* block */)a2;
- (void)confirmStoreCountryWithCompletionBlock:(id /* block */)a0;
- (void)executeDeferredAlerts;
- (unsigned long long)numberOfDeferredAlerts;
- (void)preflightProject:(id)a0 completionBlock:(id /* block */)a1;
- (void)showAssetCreationErrorForProject:(id)a0 completionBlock:(id /* block */)a1;
- (void)showCommsErrorMessageWithCompletionBlock:(id /* block */)a0;
- (void)showDownloadUnavailableAlertForTheme:(id)a0 completionBlock:(id /* block */)a1;
- (void)showExceedsFortyAlertForView:(id)a0 completionBlock:(id /* block */)a1;
- (void)showExceedsPhotoPrintLimitAlert:(unsigned long long)a0 completionBlock:(id /* block */)a1;
- (void)showFinalizationErrorMessageWithCompletionBlock:(id /* block */)a0;
- (void)showLargePhotoPrintOrderAlert:(unsigned long long)a0 completionBlock:(id /* block */)a1;
- (void)showMaximumPagesAlertForProject:(id)a0 view:(id)a1 completionBlock:(id /* block */)a2;
- (void)showMinimumPagesAlertForProject:(id)a0 view:(id)a1 completionBlock:(id /* block */)a2;
- (void)showMissingPhotoAtPath:(id)a0 completionBlock:(id /* block */)a1;
- (void)showMissingThemeAndUpgradeAlertForView:(id)a0 completionBlock:(id /* block */)a1;
- (void)showNoConfigMessageWithCompletionBlock:(id /* block */)a0;
- (void)showNoNetworkMessageWithCompletionBlock:(id /* block */)a0;
- (void)showProductChangeTextWarningForProject:(id)a0 view:(id)a1 completionBlock:(id /* block */)a2;
- (void)showProductConvertedAlertWithCompletionBlock:(id /* block */)a0;
- (void)showRecoverableErrorMessageWithCompletionBlock:(id /* block */)a0;
- (void)showRemovingCoverOrFlapAlertForProject:(id)a0 view:(id)a1 completionBlock:(id /* block */)a2;
- (void)showStoreCommsErrorMessageWithCompletionBlock:(id /* block */)a0;
- (void)showStoreDownMessageWithCompletionBlock:(id /* block */)a0;
- (void)showThemeChangeTextWarningForProject:(id)a0 view:(id)a1 completionBlock:(id /* block */)a2;
- (void)showUnusedPhotosAlertForProject:(id)a0 view:(id)a1 completionBlock:(id /* block */)a2;
- (void)showUpgradedMessageForProject:(id)a0 withView:(id)a1 completionBlock:(id /* block */)a2;

@end

@class FMDUIFMMiCloudSettingsController, NSImage, NSString, NSError, NSOperationQueue;

@interface MMFindMyMacService : MMService <MMServicePreflightProtocol> {
    NSOperationQueue *_requesterQueue;
}

@property (retain) NSError *fmmError;
@property (retain) NSImage *warningIcon;
@property (retain) FMDUIFMMiCloudSettingsController *optionsController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_errorWithFMMErroCode:(unsigned long long)a0;
+ (id)_updateQueue;

- (void)dealloc;
- (void).cxx_destruct;
- (id)icon;
- (void)showMoreInfo:(id)a0;
- (void)openLocationServicesSettings;
- (void)_updateStatus;
- (id)_fmmWarningIcon;
- (void)_serviceFailed:(id)a0;
- (void)setEnabled:(BOOL)a0 creating:(BOOL)a1 withWindow:(id)a2;
- (id)_accountDisplayName;
- (BOOL)_alreadyActive;
- (id)_alreadyActiveAccountID;
- (id)_alreadyActiveDisplayName;
- (BOOL)_areLocationServicesEnabled;
- (id)_fmmIcon;
- (id)_iconForError:(id)a0;
- (BOOL)_isLocationServicesCapable;
- (void)_serviceEnableChanged:(id)a0;
- (void)_servicePropertiesChanged:(id)a0;
- (void)_setEnabled:(BOOL)a0 withRightsMask:(unsigned long long)a1 avoidUI:(BOOL)a2 completion:(id /* block */)a3;
- (BOOL)_shouldShowWakeOnLAN;
- (void)_showClientFailureSheet:(id)a0 enabling:(BOOL)a1 withError:(id)a2 completion:(id /* block */)a3;
- (id)acquireAuthRights:(unsigned long long)a0;
- (BOOL)canEnable:(id *)a0;
- (void)didSelect;
- (void)disableFMMWithActivationLock:(id)a0 completion:(id /* block */)a1;
- (void)enableSilentlyWithCompletion:(id /* block */)a0;
- (void)handleEnableFMMWhenAlreadyActive:(id)a0 completion:(id /* block */)a1;
- (BOOL)hasDataToMerge;
- (BOOL)hasPreflightAction;
- (id)initWithServiceID:(id)a0 forAccount:(id)a1;
- (void)openPowerPreferences:(id)a0;
- (BOOL)preflightForSignoutWithWindow:(id)a0;
- (void)setEnabled:(BOOL)a0 creating:(BOOL)a1 withWindow:(id)a2 completion:(id /* block */)a3;
- (void)showFMMAlreadyActiveSheet:(id)a0 completion:(id /* block */)a1;
- (void)showFMMEnableConfirmationSheet:(id)a0 isAlreadyActive:(BOOL)a1 creating:(BOOL)a2 completion:(id /* block */)a3;
- (void)showFMMLocationServicesOffSheet:(id)a0;
- (void)showFMMMissingRecoveryPartitionSheet:(id)a0;
- (void)showFMMMissingWiFiSheet:(id)a0;
- (void)showFMMNetworkOffSheet:(id)a0;
- (void)showFMMOptionsSheet:(id)a0;
- (void)showSheetForWindow:(id)a0 title:(id)a1 message:(id)a2 defaultButtonTitle:(id)a3 defaultKeyEquivalent:(id)a4 alternateButtonTitle:(id)a5 alternateKeyEquivalent:(id)a6 otherButtonTitle:(id)a7 otherKeyEquivalent:(id)a8 andHelpHandler:(id /* block */)a9 completionHandler:(id /* block */)a10;
- (void)showiCloudPasswordSheet:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)willGainFocus;

@end

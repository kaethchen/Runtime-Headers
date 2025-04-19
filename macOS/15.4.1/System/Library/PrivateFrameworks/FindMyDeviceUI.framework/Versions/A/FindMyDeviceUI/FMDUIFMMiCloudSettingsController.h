@class NSTextField, NSProgressIndicator, NSDictionary, NSImage, NSLayoutConstraint, NSButton, NSObject, NSWindow;
@protocol SPSettingsConfigurating;

@interface FMDUIFMMiCloudSettingsController : NSObject

@property (retain, nonatomic) NSImage *icon;
@property (retain, nonatomic) NSWindow *hostWindow;
@property (retain, nonatomic) NSWindow *optionsWindow;
@property (copy, nonatomic) id /* block */ getStateBlock;
@property (copy, nonatomic) id /* block */ setStateBlock;
@property (copy, nonatomic) id /* block */ doneBlock;
@property (retain, nonatomic) NSObject<SPSettingsConfigurating> *spSession;
@property (retain, nonatomic) NSTextField *enableFindMyMacTitleTextField;
@property (retain, nonatomic) NSTextField *enableFindMyMacStatusTextField;
@property (retain, nonatomic) NSProgressIndicator *enableFindMyMacStatusProgress;
@property (retain, nonatomic) NSTextField *enableFindMyMacDescriptionTextField;
@property (retain, nonatomic) NSButton *enableFindMyMacButton;
@property (retain, nonatomic) NSTextField *enableOfflineFindingTitleTextField;
@property (retain, nonatomic) NSTextField *enableOfflineFindingStatusTextField;
@property (retain, nonatomic) NSProgressIndicator *enableOfflineFindingStatusProgress;
@property (retain, nonatomic) NSTextField *enableOfflineFindingDescriptionTextField;
@property (retain, nonatomic) NSButton *enableOfflineFindingButton;
@property (retain, nonatomic) NSButton *doneButton;
@property (retain, nonatomic) NSLayoutConstraint *doneButtonBottomConstraint;
@property (retain, nonatomic) NSLayoutConstraint *contentViewBottomConstraint;
@property (retain, nonatomic) NSDictionary *descriptionAttrs;
@property (nonatomic) BOOL isRTL;
@property (nonatomic) BOOL findMyMacEnabled;
@property (nonatomic) BOOL offlineFindingQueried;
@property (nonatomic) BOOL offlineFindingEnabled;
@property (nonatomic) BOOL offlineFindingDisabledDueToNotHSA2;

+ (id)controllerWithGetStateBlock:(id /* block */)a0 setStateBlock:(id /* block */)a1;

- (id)init;
- (void).cxx_destruct;
- (void)showFMMOptionsSheetOnHostWindow:(id)a0 withDoneBlock:(id /* block */)a1;
- (BOOL)_FMWLANEnabled;
- (void)_loadFindMyMacConfiguration;
- (void)_loadSearchPartyConfiguration;
- (void)_loadView;
- (void)_presentHSA2UpgradeForOfflineFinding;
- (void)_setFindMyMacConfigurationActive:(BOOL)a0;
- (void)_setSearchPartyConfigurationActive:(BOOL)a0;
- (void)_showEnableOfflineFindingOption:(BOOL)a0 forceRefresh:(BOOL)a1;
- (void)_showHSA2UpgradeAlert;
- (void)_showOfflineFindingAlertWhenTurningOff;
- (void)_updateEnableFindMyMacStatusWithForceRefresh:(BOOL)a0;
- (void)_updateEnableOfflineFindingStatus;
- (void)doneButtonAction:(id)a0;
- (void)findMyMacDidChange;
- (void)toggleFindMyMacButtonAction:(id)a0;
- (void)toggleOfflineFindingButtonAction:(id)a0;

@end

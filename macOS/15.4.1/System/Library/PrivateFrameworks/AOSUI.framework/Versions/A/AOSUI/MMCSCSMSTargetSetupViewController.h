@class NSTextField, NSString, MMPhoneNumberFormatter, NSTouchBar, NSPopUpButton, iCloudTouchBarController, NSImageView, NSButton;
@protocol MMCSCSMSTargetSetupViewControllerDelegate;

@interface MMCSCSMSTargetSetupViewController : NSViewController <NSTouchBarProvider>

@property (retain) MMPhoneNumberFormatter *smsTargetFormatter;
@property (retain) iCloudTouchBarController *touchBarController;
@property id<MMCSCSMSTargetSetupViewControllerDelegate> delegate;
@property (weak) NSImageView *smsTargetImageView;
@property (weak) NSPopUpButton *smsTargetCountryMenu;
@property (weak) NSTextField *smsTargetTextField;
@property (weak) NSButton *smsTargetCancelButton;
@property (weak) NSButton *smsTargetConfirmButton;
@property (weak) NSTextField *smsTargetTitle;
@property (weak) NSTextField *smsTargetMessage;
@property (weak) NSTextField *smsTargetCountryLabel;
@property (weak) NSTextField *smsTargetNumberLabel;
@property (weak) NSButton *smsTargetHelpButton;
@property (readonly) NSString *smsCountryCode;
@property (readonly) NSString *smsCountryPrefix;
@property (readonly) NSString *smsTarget;
@property (readonly) NSTouchBar *touchBar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)controlTextDidChange:(id)a0;
- (void)setup;
- (void)cancelButtonClicked:(id)a0;
- (void)_selectCountryCodeInPopUpMenu:(id)a0;
- (void)confirmButtonClicked:(id)a0;
- (void)popUpMenuItemSelected:(id)a0;

@end

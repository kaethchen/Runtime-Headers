@class NSTextField, ADMLoginPrefs, NSPopUpButton, NSSecureTextField, NSWindow;

@interface ADMAutoLoginController : NSObject

@property long long guestUserIndex;
@property (retain) ADMLoginPrefs *loginPrefs;
@property (retain) NSWindow *autologinSheet;
@property (retain) NSPopUpButton *autologinSheetPopUp;
@property (retain) NSSecureTextField *autologinSheetPassword;
@property (retain) NSTextField *autologinNameSingle;
@property (retain) NSTextField *autologinSheetPasswordLabel;
@property (readonly) unsigned long long numberOfAutologinUsers;

+ (id)sharedAutoLoginController;

- (void).cxx_destruct;
- (void)autologinSheetCancel:(id)a0;
- (void)autologinSheetOk:(id)a0;
- (void)autologinUserDidChange:(id)a0;
- (unsigned long long)numberOfAutologinUsers;
- (void)showAutologinSheetModalForWindow:(id)a0 modalDelegate:(id)a1 didEndSelector:(SEL)a2 selectUserName:(id)a3;

@end

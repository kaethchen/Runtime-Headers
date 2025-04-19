@class IMAccount, NSMenu, NSPopUpButton, NSWindow;

@interface SOAccountValidationSheetController : NSObject

@property (retain, nonatomic) NSWindow *window;
@property (retain, nonatomic) NSMenu *regionsMenu;
@property (retain, nonatomic) NSPopUpButton *locationsPopup;
@property (weak, nonatomic) IMAccount *account;
@property (copy, nonatomic) id /* block */ completionBlock;

- (void).cxx_destruct;
- (id)initWithWindow:(id)a0;
- (void)_ensureValidAccountProfile;
- (void)_regionListFinishedLoading:(id)a0;
- (void)ensureValidFaceTimeAccountProfileWithCompletionBlock:(id /* block */)a0;
- (void)ensureValidiMessageAccountProfileWithCompletionBlock:(id /* block */)a0;

@end

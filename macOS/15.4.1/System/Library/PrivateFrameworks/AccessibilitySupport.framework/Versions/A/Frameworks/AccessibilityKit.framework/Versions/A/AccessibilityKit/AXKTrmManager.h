@class AXKAlertWindowController, NSWindow;

@interface AXKTrmManager : NSObject

@property (nonatomic) long long reason;
@property (weak, nonatomic) NSWindow *hostWindow;
@property (nonatomic) BOOL systemState;
@property (nonatomic) BOOL dialogHasEverBeenDisplayed;
@property (retain, nonatomic) AXKAlertWindowController *windowController;

+ (id)trmManagerForReason:(long long)a0 hostWindow:(id)a1;

- (void).cxx_destruct;
- (id)_baseKey;
- (BOOL)_hasValidReason;
- (id)_dialogHasEverBeenDisplayedKey;
- (id)_infoString;
- (BOOL)disableTRMStateAndInformUserIfNeeded;
- (BOOL)disableTRMStateAndInformUserIfNeededWithCompletionBlock:(id /* block */)a0;
- (id)initWithReason:(long long)a0 hostWindow:(id)a1;
- (BOOL)shouldShowDialog;
- (void)showDialog;
- (void)showDialogWithCompletionBlock:(id /* block */)a0;

@end

@class AlertDialogConfiguration, NSString, NSTimer;

@interface AlertDialogViewController : TabDialogViewController <AlertDialogViewDelegate> {
    NSTimer *_enableReturnEnterKeyTimer;
    BOOL _waitForKeyPressDone;
    BOOL _returnEnterKeyInitiallyDown;
    BOOL _seenNonInitialReturnEnterKeyDown;
    unsigned long long _browsingMode;
}

@property (readonly, nonatomic) AlertDialogConfiguration *configuration;
@property (readonly, copy, nonatomic) NSString *dialogMessage;

+ (long long)alertDialogResultFromInteger:(long long)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (void)viewWillDisappear;
- (id)_alertDialogView;
- (void)_handleEvent:(id)a0 eventIsInitialEvent:(BOOL)a1;
- (void)_ignoreKeyPressesIfNecessary;
- (void)_invalidateReturnEnterTimer;
- (id)_makeResponseWithResult:(long long)a0 promptResponse:(id)a1;
- (id)_nextValidKeyViewForAlertDialogView:(id)a0;
- (void)didAcceptAlertDialogView:(id)a0 withPromptResponse:(id)a1;
- (void)didDismissAlertDialogView:(id)a0;
- (void)didRejectAlertDialogView:(id)a0;
- (id)initWithDialogConfiguration:(id)a0 slot:(struct { int x0; unsigned long long x1; })a1 browsingMode:(unsigned long long)a2;
- (id)initWithNibName:(id)a0 bundle:(id)a1 dialogConfiguration:(id)a2 slot:(struct { int x0; unsigned long long x1; })a3;

@end

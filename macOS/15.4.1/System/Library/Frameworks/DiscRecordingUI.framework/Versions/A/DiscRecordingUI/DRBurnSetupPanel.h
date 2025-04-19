@class NSButton, NSMatrix, NSPopUpButton;

@interface DRBurnSetupPanel : DRSetupPanel {
    id _advancedItems;
    NSButton *_expander;
    NSPopUpButton *_burnSpeedPopup;
    NSButton *_appendable;
    NSMatrix *_completionActions;
    NSButton *_testBurn;
    NSButton *_verifyBurn;
    NSButton *_eraseDisc;
    void *_reservedBurnSetupPanel[4];
    void *_bsp_privateStorage;
}

+ (void)initialize;
+ (id)setupPanel;

- (id)init;
- (void)ok:(id)a0;
- (void)open:(id)a0;
- (void)setDefaultButtonTitle:(id)a0;
- (id)initWithNibName:(id)a0;
- (void)setAppendable:(id)a0;
- (void)setTestBurn:(id)a0;
- (void)expand:(id)a0;
- (void)appendable:(id)a0;
- (void)setupForDisplay;
- (BOOL)_itemIsEnabled:(id)a0;
- (void)_confirmSheetDidDismiss:(id)a0 returnCode:(long long)a1 contextInfo:(void *)a2;
- (void)_savePanelUserDefaults;
- (void)_setBoolValue:(BOOL)a0 forButton:(id)a1 optionKey:(id)a2;
- (void)_setControl:(id)a0 enabled:(BOOL)a1;
- (void)_setWindowExpanderDelta:(float)a0;
- (void)_sizePanelFrom:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 to:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 expand:(BOOL)a2;
- (void)_updateBurnSpeedMenu:(id)a0;
- (float)_windowExpanderDelta;
- (id)burnObject;
- (void)burnSpeed:(id)a0;
- (void)completionAction:(id)a0;
- (id)defaultDeviceKey;
- (void)deviceSelectionChanged:(id)a0;
- (void)eject:(id)a0;
- (void)eraseDisc:(id)a0;
- (BOOL)mediaStateChanged:(id)a0;
- (void)setAdvancedItems:(id)a0;
- (void)setBurnSpeedPopup:(id)a0;
- (void)setCanSelectAppendableMedia:(BOOL)a0;
- (void)setCanSelectEraseDisc:(BOOL)a0;
- (void)setCanSelectTestBurn:(BOOL)a0;
- (void)setCompletionActions:(id)a0;
- (void)setEraseDisc:(id)a0;
- (void)setExpander:(id)a0;
- (void)setVerifyBurn:(id)a0;
- (void)testBurn:(id)a0;
- (void)verifyBurn:(id)a0;

@end

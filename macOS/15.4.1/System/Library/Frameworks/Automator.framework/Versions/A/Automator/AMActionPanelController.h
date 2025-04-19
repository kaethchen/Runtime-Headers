@class NSButton, AMActionPanelActionView, AMBundleAction;

@interface AMActionPanelController : NSWindowController

@property (weak) AMActionPanelActionView *_actionBox;
@property (weak) NSButton *_cancelButton;
@property (weak) NSButton *_continueButton;
@property (retain) AMBundleAction *panelAction;
@property (retain) AMBundleAction *action;
@property (readonly) NSButton *cancelButton;
@property (readonly) NSButton *continueButton;

- (void).cxx_destruct;
- (long long)runModal;
- (id)initWithAction:(id)a0;
- (void)cancelAction:(id)a0;
- (void)continueAction:(id)a0;
- (struct CGSize { double x0; double x1; })_adjustView:(id)a0;
- (void)_notifyLayoutViewOfActivation:(id)a0;
- (void)_panelDidBecomeMain:(id)a0;
- (void)_panelDidBecomeVisible:(id)a0;
- (void)_runModalWithInfo:(id)a0;

@end

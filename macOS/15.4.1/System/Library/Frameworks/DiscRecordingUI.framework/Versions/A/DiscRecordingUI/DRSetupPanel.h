@class NSButton, NSImageView, NSTextField;

@interface DRSetupPanel : NSPanel {
    NSButton *_eject;
    NSImageView *_icon;
    id _deviceChooser;
    void *_reservedSetupPanel[2];
    NSTextField *_userMessage;
    id _sp_privateStorage;
    NSButton *_ok;
    NSButton *_cancel;
}

+ (void)initialize;

- (void)dealloc;
- (void)setDelegate:(id)a0;
- (void)close:(id)a0;
- (void)ok:(id)a0;
- (void)cancel:(id)a0;
- (BOOL)canBecomeMainWindow;
- (void)open:(id)a0;
- (void)setIcon:(id)a0;
- (BOOL)validateMenuItem:(id)a0;
- (void)setDevice:(id)a0;
- (id)initWithNibName:(id)a0;
- (void)setCancel:(id)a0;
- (void)setUserMessage:(id)a0;
- (void)setOk:(id)a0;
- (void)setupForDisplay;
- (void)_deviceChooserAction:(id)a0;
- (void)_didEndSetupSheet:(id)a0 returnCode:(long long)a1 contextInfo:(void *)a2;
- (void)_mediaStateDidChange:(id)a0;
- (void)_savePanelUserDefaults;
- (void)beginSetupSheetForWindow:(id)a0 modalDelegate:(id)a1 didEndSelector:(SEL)a2 contextInfo:(void *)a3;
- (BOOL)delegateRespondsToDetermineSuitable;
- (BOOL)delegateRespondsToDeviceCouldBeTarget;
- (void)deviceSelectionChanged:(id)a0;
- (void)eject:(id)a0;
- (BOOL)mediaStateChanged:(id)a0;
- (long long)runSetupPanel;
- (void)setDeviceChooser:(id)a0;
- (void)setEject:(id)a0;

@end

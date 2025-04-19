@class NSButton, NSTextField;

@interface DRMediaEraseController : NSObject {
    NSTextField *_userMessageField;
    NSButton *_startEraseButton;
    NSButton *_trayControlButton;
    BOOL _userEnableState;
    BOOL _isErasing;
    id _controllerPrivate;
}

- (void)dealloc;
- (void)forwardInvocation:(id)a0;
- (id)init;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)controller;
- (void)setControlsEnabled:(BOOL)a0;
- (void)mediaStateDidChange:(id)a0;
- (void)setUserPrompt:(id)a0 andOKButtonState:(BOOL)a1;
- (void)setIsErasing:(BOOL)a0;
- (void)setMonitoredDevice:(id)a0;
- (void)setStartEraseButton:(id)a0;
- (void)setTrayControlButton:(id)a0;
- (void)setUserMessageField:(id)a0;
- (void)updateEjectStateForDevice:(id)a0 mediaStatus:(id)a1;
- (void)updateUserMessageForDevice:(id)a0 mediaStatus:(id)a1;

@end

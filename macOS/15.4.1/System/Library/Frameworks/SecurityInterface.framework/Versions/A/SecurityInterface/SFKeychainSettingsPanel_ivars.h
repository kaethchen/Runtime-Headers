@class NSTextField, NSWindow, NSStepper, NSProgressIndicator, NSString, NSButton, SFAutoLockTextValue;

@interface SFKeychainSettingsPanel_ivars : NSObject {
    NSTextField *_panelMessage;
    SFAutoLockTextValue *_autoLockValue;
    NSStepper *_autoLockStepper;
    NSButton *_autoLockCtrl;
    NSButton *_lockOnSleepCtrl;
    NSButton *_cancelButton;
    NSButton *_saveButton;
    NSWindow *_panel;
    NSButton *_dotMacButton;
    NSButton *_syncDotMacCtrl;
    NSTextField *_syncStateMessage;
    NSProgressIndicator *_progressCtrl;
    NSString *_keychainNameStr;
    NSWindow *_parentWindowForSheet;
    SEL _clientDidEndSelector;
    id _clientDelegate;
    void *_clientContextInfo;
    unsigned long long _lockIntervalVal;
    struct __SecKeychain { } *_keychainRef;
    BOOL _lockOnSleepVal;
    BOOL _syncVal;
    struct SecKeychainSettings { unsigned int version; unsigned char lockOnSleep; unsigned char useLockInterval; unsigned int lockInterval; } _settings;
    BOOL _runAsSheet;
}

- (void)dealloc;

@end

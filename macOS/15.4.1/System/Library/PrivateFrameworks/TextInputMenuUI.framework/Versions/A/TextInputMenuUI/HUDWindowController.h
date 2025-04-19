@class NSArray, InputSource, NSString, NSNumber, HUDController;

@interface HUDWindowController : NSWindowController <InputSourceOwnerProtocol, HUDDataSource, TSMMessageProtocol> {
    InputSource *fCurrentInputSource;
    struct ProcessSerialNumber { unsigned int highLongOfPSN; unsigned int lowLongOfPSN; } fTargetApp;
    NSNumber *fTargetDocRef;
    BOOL fIsSecureMode;
    BOOL fHotKeysRegistered;
    BOOL fSourceListContainsOnlyCurrentSource;
    HUDController *hudViewController;
}

@property (nonatomic) BOOL ignoreNextFlagChangedEvent;
@property (nonatomic) BOOL inlineSwicherVisible;
@property struct ProcessSerialNumber { unsigned int x0; unsigned int x1; } *targetApp;
@property struct ProcessSerialNumber { unsigned int highLongOfPSN; unsigned int lowLongOfPSN; } targetSwitcher;
@property (retain) NSNumber *targetTSMDocument;
@property InputSource *currentInputSource;
@property (retain) HUDController *hudViewController;
@property (retain) NSArray *inputs;
@property long long inputsCount;
@property unsigned short hotKeyChar;
@property unsigned short hotVirtualKey;
@property unsigned int hotModifiers;
@property (readonly) struct EventHotKeyID { unsigned int x0; unsigned int x1; } escapeHotKeyID;
@property (retain) NSArray *fDisabledInputSources;
@property (readonly, nonatomic) BOOL hudActive;
@property (readonly, nonatomic) BOOL hudVisible;
@property (readonly, nonatomic) BOOL hudObscure;
@property (nonatomic) BOOL eventCaptureOurs;
@property (readonly, nonatomic) BOOL supportsMouse;
@property (readonly, nonatomic) BOOL inlineSwitcherEnalbed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newHUDWindowController;

- (void).cxx_destruct;
- (id)bundle;
- (void)flagsChanged:(id)a0;
- (void)update;
- (BOOL)isSecureMode;
- (void)commitSelection;
- (void)escape:(id)a0;
- (void)handleEnabledInputSourcesChange;
- (BOOL)areHotKeysRegistered;
- (void)awakeFromNb;
- (void)changeInputToSelection;
- (struct __CFData { } *)copyMessageReceiver:(int)a0 withInfo:(id)a1;
- (void)hideHUD:(BOOL)a0 immediate:(BOOL)a1;
- (void)hotKeyDown:(id)a0;
- (void)hotKeyUp:(id)a0;
- (void)moveSelection:(long long)a0;
- (void)registerWindowHotKeys;
- (void)replyReceiver:(int)a0 withInfo:(id)a1;
- (void)setCurrentInputSourceFromName:(id)a0;
- (void)setHotKeysRegistered:(BOOL)a0;
- (void)setNotificationOverride;
- (void)setTargetAppToTIMTarget;
- (void)showHUD:(unsigned long long)a0;
- (void)sourceWasChangedTo:(id)a0;
- (void)toggleCharacterPaletteInputSource:(long long)a0;
- (void)unregisterWindowHotKeys;

@end

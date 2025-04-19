@class NSTouchBar, RTIInputSystemServiceSession, NSArray, NSData, NSPopoverTouchBarItem, RTIDocumentState, NSViewController, RTIInputSystemSourceSession, NSTextInputContext;
@protocol TUICursorAccessoryAssertion;

@interface __NSTextInputContextAuxiliaryStorage : NSObject {
    NSPopoverTouchBarItem *_keyboardInputSourcePopoverTouchBarItem;
    NSTouchBar *_keyboardInputSourcePopoverTouchBar;
    NSPopoverTouchBarItem *_characterPickerPopoverTouchBarItem;
    NSData *_ucharDataForSelectedInputSource;
    id<TUICursorAccessoryAssertion> _dictationAccessoryAssertion;
    id<TUICursorAccessoryAssertion> _dictationLanguageSwitcherAssertion;
    RTIInputSystemServiceSession *_rtiCurrentInputSystemServiceSession;
    RTIDocumentState *_rtiCurrentDocumentState;
    RTIInputSystemSourceSession *_rtiInputSystemSourceSession;
    struct { unsigned char _haveKeyboardIM : 1; unsigned char _havePressAndHold : 1; unsigned char _haveCharacterPickerInput : 1; unsigned char _haveTrackpadHandwritingInput : 1; unsigned char _characterPickerDisabled : 1; unsigned char _haveFunctionRowDeviceKVOObserver : 1; unsigned char _iosMacClient : 1; unsigned int _extra : 25; } _ticFlags;
}

@property (readonly) NSTextInputContext *inputContext;
@property (retain, nonatomic) NSArray *functionRowItemIdentifiers;
@property (retain, nonatomic) NSViewController *keyboardInputSourceViewController;
@property (retain, nonatomic) NSViewController *characterPickerViewController;
@property (retain, nonatomic) NSViewController *pressAndHoldTouchBarItemViewController;
@property (readonly) NSPopoverTouchBarItem *keyboardInputSourcePopoverTouchBarItem;
@property (weak) NSPopoverTouchBarItem *characterPickerPopoverTouchBarItem;
@property (retain) NSPopoverTouchBarItem *pressAndHoldPopoverTouchBarItem;
@property (retain, nonatomic) NSViewController *trackpadHandwritingTouchBarItemViewController;
@property (retain) NSPopoverTouchBarItem *trackpadHandwritingPopoverTouchBarItem;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)characterPickerPopoverTouchBarItem;
- (id)initWithTextInputContext:(id)a0;
- (id)keyboardInputSourcePopoverTouchBarItem;
- (id)pressAndHoldTouchBarItemViewController;
- (void)setCharacterPickerPopoverTouchBarItem:(id)a0;
- (void)setPressAndHoldTouchBarItemViewController:(id)a0;
- (void)setTrackpadHandwritingTouchBarItemViewController:(id)a0;
- (id)trackpadHandwritingTouchBarItemViewController;

@end

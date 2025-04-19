@class NSString, NSImage;

@interface NSInputManager : NSObject <NSTextInput> {
    id _currentClient;
    id _server;
    id _bundleObj;
    id _keybindings;
    NSString *_trueName;
    NSString *_connectionName;
    NSString *_hostName;
    NSString *_procToExec;
    NSString *_visibleName;
    NSString *_bundleName;
    NSString *_language;
    NSImage *_image;
    unsigned int _flags;
    NSString *_keyBindingsName;
}

+ (void)initialize;
+ (id)_inputManagerInNextScript:(id)a0;
+ (id)_nextInputManagerInScript:(id)a0;
+ (void)_switchToPlatformInput:(id)a0;
+ (void)_terminate:(id)a0;
+ (id)currentInputManager;
+ (void)cycleToNextInputLanguage:(id)a0;
+ (void)cycleToNextInputServerInLanguage:(id)a0;
+ (void)installInputManagerMenu:(id)a0;
+ (void)setCurrentInputManager:(id)a0;
+ (BOOL)worksWhenModal;

- (void)dealloc;
- (id)description;
- (id)attributedSubstringFromRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)isEnabled;
- (id)image;
- (id)language;
- (void)_activateServer;
- (id)_currentClient;
- (BOOL)_isActivated;
- (id)_keyBindingManager;
- (void)_loadBundle;
- (void)_loadKeyboardBindings;
- (void)_senderIsInvalid:(id)a0;
- (BOOL)_setActivationState:(BOOL)a0;
- (void)_setCurrentClient:(id)a0;
- (void)_terminate;
- (id)_trueName;
- (BOOL)_validateBundleSecurity;
- (void)activateInputManagerFromMenu:(id)a0;
- (id)bundleObject;
- (unsigned long long)characterIndexForPoint:(struct CGPoint { double x0; double x1; })a0;
- (long long)conversationIdentifier;
- (void)doCommandBySelector:(SEL)a0;
- (void)doCommandBySelector:(SEL)a0 client:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })firstRectForCharacterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)getMarkedText:(id *)a0 selectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (BOOL)handleMouseEvent:(id)a0;
- (BOOL)hasMarkedText;
- (id)initWithName:(id)a0 host:(id)a1;
- (void)insertText:(id)a0;
- (void)insertText:(id)a0 client:(id)a1;
- (id)localizedInputManagerName;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })markedRange;
- (void)markedTextAbandoned:(id)a0;
- (void)markedTextSelectionChanged:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 client:(id)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })selectedRange;
- (id)server;
- (void)setMarkedText:(id)a0 selectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)unmarkText;
- (id)validAttributesForMarkedText;
- (BOOL)wantsToDelayTextChangeNotifications;
- (BOOL)wantsToHandleMouseEvents;
- (BOOL)wantsToInterpretAllKeystrokes;
- (BOOL)worksWhenModal;

@end

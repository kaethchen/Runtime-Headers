@class NSNumber, NSString;
@protocol ConfigEditorDelegate;

@interface ConfigKeyEditor : NSTextView {
    id<ConfigEditorDelegate> mDelegate;
    unsigned long long mModifiers;
    BOOL mOperationModeEnabled;
    unsigned int mSavedHotKeyOperatingMode;
}

@property BOOL allowsHighFunctionKeys;
@property (readonly) NSNumber *key;
@property (readonly) NSString *charCode;
@property (readonly) NSNumber *modifier;
@property BOOL allowKeyWithoutModifiers;

+ (id)stringForVirtualKey:(unsigned long long)a0 characterCode:(unsigned short)a1 modifiers:(unsigned long long)a2;

- (void)dealloc;
- (BOOL)becomeFirstResponder;
- (void)keyDown:(id)a0;
- (void)mouseDown:(id)a0;
- (BOOL)performKeyEquivalent:(id)a0;
- (BOOL)resignFirstResponder;
- (BOOL)validateMenuItem:(id)a0;
- (void)_windowDidResignKeyNotification:(id)a0;
- (void)_disableHotKeyOperationMode;
- (void)_restoreHotKeyOperationMode;
- (void)_windowDidBecomeKeyNotification:(id)a0;
- (id)initConfigKeyEditorWithDelegate:(id)a0;

@end

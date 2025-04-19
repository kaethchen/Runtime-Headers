@class NSTextField, NSString, NSView, NSWindow;

@interface SFKeychainSavePanel_ivars : NSObject {
    NSView *_customView;
    NSTextField *_message;
    NSString *_password;
    NSString *_kcFullPathName;
    NSString *_startPath;
    NSString *_keychainFileName;
    struct __SecKeychain { } *_returnedKeychain;
    NSWindow *_parentWindowForSheet;
    SEL _clientDidEndSelector;
    id _clientDelegate;
    void *_contextInfo;
    int _result;
}

- (void)dealloc;

@end

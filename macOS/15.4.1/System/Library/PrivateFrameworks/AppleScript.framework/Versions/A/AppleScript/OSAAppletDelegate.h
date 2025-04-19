@class NSImageView, NSString, NSTextField, NSWindow;

@interface OSAAppletDelegate : NSObject <NSApplicationDelegate> {
    struct ComponentInstanceRecord { long long x0[1]; } *_gustav;
    unsigned int _script;
    char _didShowSplashDialog;
    char _shouldShowSplashDialog;
    char _canChangeSplashDialog;
    char _shouldStayOpen;
    NSWindow *_splashDialog;
    NSImageView *_splashIcon;
    NSTextField *_splashText;
}

@property (readonly) BOOL shouldStayOpen;
@property (readonly) BOOL canChangeSplashDialog;
@property BOOL shouldShowSplashDialog;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (struct ComponentInstanceRecord { long long x0[1]; } *)component;
- (void)applicationWillFinishLaunching:(id)a0;
- (void)applicationWillTerminate:(id)a0;
- (void)idle;
- (void)terminate:(id)a0;
- (unsigned int)script;
- (void)runScript:(id)a0;
- (void)_setSplashFlags;
- (BOOL)needsSaveScript;
- (void)addScriptErrorInfoToEvent:(struct AEDesc { unsigned int x0; struct OpaqueAEDataStorageType **x1; } *)a0;
- (void)addScriptErrorKey:(unsigned int)a0 toEvent:(struct AEDesc { unsigned int x0; struct OpaqueAEDataStorageType **x1; } *)a1;
- (BOOL)canSaveScript;
- (void)editScript:(id)a0;
- (void)editScriptWithErrorRange:(id)a0;
- (short)handleEvent:(const struct AEDesc { unsigned int x0; struct OpaqueAEDataStorageType **x1; } *)a0 withReply:(struct AEDesc { unsigned int x0; struct OpaqueAEDataStorageType **x1; } *)a1 error:(id *)a2;
- (BOOL)isScriptEditable;
- (BOOL)mustShowSplashDialog;
- (void)presentScriptError:(id)a0;
- (void)quitScript:(id)a0;
- (id)scriptDescription;
- (id)scriptErrorDescriptorOfType:(unsigned int)a0 forKey:(unsigned int)a1;
- (id)scriptErrorNumberForKey:(unsigned int)a0;
- (id)scriptErrorStringForKey:(unsigned int)a0;
- (id)scriptErrorWithCode:(int)a0;
- (void)showSplashDialog;

@end

@class NSString;

@interface SFKeychainSavePanel : NSSavePanel <NSOpenSavePanelDelegate> {
    id _reserved_SFKeychainSavePanel;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedKeychainSavePanel;

- (void)dealloc;
- (id)init;
- (id)error;
- (void)lock;
- (void)setPassword:(id)a0;
- (void)unlock;
- (void)_setDidEndSelector:(SEL)a0;
- (void)beginSheetForDirectory:(id)a0 file:(id)a1 modalForWindow:(id)a2 modalDelegate:(id)a3 didEndSelector:(SEL)a4 contextInfo:(void *)a5;
- (BOOL)panel:(id)a0 isValidFilename:(id)a1;
- (long long)runModalForDirectory:(id)a0 file:(id)a1;
- (struct __SecKeychain { } *)keychain;
- (SEL)_didEndSelector;
- (id)_appendSuffixIfNeeded:(id)a0;
- (int)_result;
- (void *)_contextInfo;
- (id)_ivars;
- (void)_openDialog:(id)a0 file:(id)a1;
- (void)_saveSheetDidEnd:(id)a0 returnCode:(long long)a1 contextInfo:(void *)a2;
- (id)_savedDelegate;
- (void)_setContextInfo:(void *)a0;
- (void)_setFileName:(id)a0;
- (void)_setKeychainFullPathName:(id)a0;
- (void)_setSavedDelegate:(id)a0;
- (void)_setStartPath:(id)a0;

@end

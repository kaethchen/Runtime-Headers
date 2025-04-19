@class NSArray, NSMutableArray;

@interface SOHotKeyManager : NSObject {
    unsigned int _ourCGSConnectionID;
    NSMutableArray *_registeredHotKeyArray;
    NSArray *_cachedSymbolicHotKeyTable;
    unsigned int _ioConnection;
}

+ (id)defaultHotKeyManager;

- (id)init;
- (void)delete;
- (id)symbolicHotKeys;
- (unsigned int)_IOConnection;
- (unsigned int)findConflictingSymbolicHotKeyFor:(unsigned int)a0;
- (void)gotoKbdPref;
- (BOOL)registerVirtualKeyCode:(unsigned short)a0 modifierKeyFlags:(unsigned int)a1 target:(id)a2 selector:(SEL)a3 userInfo:(id)a4;
- (unsigned int)sharedCGSConnectionID;
- (BOOL)stickyKeysIsEnabled;
- (BOOL)unregisterAllHotKeys;
- (BOOL)unregisterVirtualKeyCode:(unsigned short)a0 modifierKeyFlags:(unsigned int)a1;

@end

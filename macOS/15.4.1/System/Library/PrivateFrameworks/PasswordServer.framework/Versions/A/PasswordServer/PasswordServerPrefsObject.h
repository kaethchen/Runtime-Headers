@interface PasswordServerPrefsObject : NSObject {
    struct __CFDictionary { } *mPrefsDict;
    struct __CFCharacterSet { } *mExternalToolIllegalChars;
    struct PasswordServerPrefs { unsigned long long badTrialDelay; unsigned short listenerPort[11]; int listenerTypeFlags; BOOL externalToolSet; char externalToolPath[256]; BOOL realmSet; char realm[256]; BOOL syncSASLPluginList; long long deleteWait; long long purgeWait; struct SASLPluginEntry { char name[21]; int state; } saslPluginState[31]; int prefsVersion; struct PWSDebugLogOptions { BOOL changeList; BOOL quit; } logOptions; } mPrefs;
    struct ldap { } *mLdap;
    char *mLdapSearchBase;
}

- (void)dealloc;
- (id)init;
- (const char *)realm;
- (void)setRealm:(const char *)a0;
- (const struct PWSDebugLogOptions { BOOL x0; BOOL x1; } *)logOptions;
- (id)free;
- (struct __CFDictionary { } *)getDictionary;
- (void)setPrefs:(struct PasswordServerPrefs { unsigned long long x0; unsigned short x1[11]; int x2; BOOL x3; char x4[256]; BOOL x5; char x6[256]; BOOL x7; long long x8; long long x9; struct SASLPluginEntry { char x0[21]; int x1; } x10[31]; int x11; struct PWSDebugLogOptions { BOOL x0; BOOL x1; } x12; } *)a0;
- (unsigned long long)badTrialDelay;
- (void)buildSASLMechPrefsFromCurrentSASLState;
- (void)getPrefs:(struct PasswordServerPrefs { unsigned long long x0; unsigned short x1[11]; int x2; BOOL x3; char x4[256]; BOOL x5; char x6[256]; BOOL x7; long long x8; long long x9; struct SASLPluginEntry { char x0[21]; int x1; } x10[31]; int x11; struct PWSDebugLogOptions { BOOL x0; BOOL x1; } x12; } *)a0;
- (int)getSASLPluginStatus:(const char *)a0 foundAtIndex:(int *)a1;
- (char *)getSearchBase;
- (int)loadPrefs;
- (int)loadXMLData;
- (BOOL)localListenersOnly;
- (long long)longValueForKey:(struct __CFString { } *)a0 inDictionary:(struct __CFDictionary { } *)a1;
- (BOOL)methodExists:(const char *)a0 inArray:(struct __CFArray { } *)a1;
- (const char *)passwordToolPath;
- (struct __CFDictionary { } *)saslMechArrayToCFDictionary;
- (int)savePrefs;
- (int)saveXMLData;
- (BOOL)syncSASLPluginList;

@end
